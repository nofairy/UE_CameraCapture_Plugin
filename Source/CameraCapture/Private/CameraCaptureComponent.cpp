// Copyright sayonara Limited, 2023-2023. All rights reserved.

#include "CameraCaptureComponent.h"

#include "CanvasTypes.h"
#include "TextureResource.h"

#include "RenderingThread.h"
#include "RendererInterface.h"
#include "SceneView.h"
#include "SceneViewExtension.h"
#include "SceneViewExtensionContext.h"
#include "RHIResources.h"
#include "RHIDefinitions.h"

#include "EngineModule.h"
//#include "EditorViewportClient.h"
#include "Engine/GameViewportClient.h"
#include "HAL/IConsoleManager.h"
#include "GameFramework/WorldSettings.h"
#include "LegacyScreenPercentageDriver.h"
#include "ContentStreaming.h"

#include "Camera/CameraComponent.h"
#include "CineCameraComponent.h"
#include "Components/PrimitiveComponent.h"
#include "SceneManagement.h"

PRAGMA_DISABLE_OPTIMIZATION
UCameraCaptureComponent::UCameraCaptureComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
	,ViewState()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UCameraCaptureComponent::BeginDestroy()
{
	Super::BeginDestroy();
}

void UCameraCaptureComponent::OnRegister()
{
	Super::OnRegister();
}

void UCameraCaptureComponent::OnUnregister()
{
	Super::OnUnregister();
}

void UCameraCaptureComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FSceneInterface* Scene = GetWorld()->Scene;
	if(!Is_ViewStateInitialized)
	{
		ViewState.Allocate(Scene ? Scene->GetFeatureLevel() : GMaxRHIFeatureLevel);
		Is_ViewStateInitialized = true;
	}
	if(!TextureTarget) return;

	UCameraComponent* ActiveCameraComponent  = GetOwner()->FindComponentByClass<UCameraComponent>();
	if(!ActiveCameraComponent) return;

	float FilmbackRatio = 1.0f;

	UCineCameraComponent* ActiveCineCameraComponent = Cast<UCineCameraComponent>(ActiveCameraComponent);
	if (ActiveCineCameraComponent)
	{
		FilmbackRatio = ActiveCineCameraComponent->Filmback.SensorAspectRatio;
	}
	else
	{
		FilmbackRatio = ActiveCameraComponent->AspectRatio;
	}

	{
		TextureTargetY = FMath::RoundToInt((float)TextureTargetX / FilmbackRatio);
		if (TextureTarget->SizeX != TextureTargetX || TextureTarget->SizeY != TextureTargetY)
		{
			TextureTarget->ResizeTarget(TextureTargetX, TextureTargetY);
		}
	}

	uint32 SizeX = TextureTarget->SizeX;
	uint32 SizeY = TextureTarget->SizeY;

	//tick-------------------------------------------------------

	FMinimalViewInfo ControllingActorViewInfo;
	TOptional<EAspectRatioAxisConstraint> ControllingActorAspectRatioAxisConstraint;
	TArray<FPostProcessSettings> ControllingActorExtraPostProcessBlends;
	TArray<float> ControllingActorExtraPostProcessBlendWeights;

	float ViewFOV;
	float AspectRatio;
	ActiveCameraComponent->GetCameraView(DeltaTime, ControllingActorViewInfo);
	{
		ActiveCameraComponent->GetExtraPostProcessBlends(ControllingActorExtraPostProcessBlends, ControllingActorExtraPostProcessBlendWeights);

		// Post processing is handled by OverridePostProcessingSettings
		ViewFOV = ControllingActorViewInfo.FOV;
		AspectRatio = ControllingActorViewInfo.AspectRatio;
		/*ViewportCameraTransform.SetLocation(ControllingActorViewInfo.Location);
		ViewportCameraTransform.SetRotation(ControllingActorViewInfo.Rotation);*/
	}

	UserIsControllingAtmosphericLightTimer = FMath::Max(UserIsControllingAtmosphericLightTimer - DeltaTime, 0.0f);

	//draw-------------------------------------------------------

	UWorld* World = GetWorld();
	if(TextureTarget&&World)
	{

		auto Time = World->GetTime();
		FTextureRenderTarget2DResource* textureRenderTarget2DResource = static_cast<FTextureRenderTarget2DResource*>(TextureTarget->GameThread_GetRenderTargetResource());
		FCanvas Canvas(textureRenderTarget2DResource, nullptr, Time, Scene->GetFeatureLevel(), 1.f);
		Canvas.SetRenderTargetRect(FIntRect(0, 0, SizeX, SizeY));

		Canvas.SetScaledToRenderTarget(false);
		Canvas.SetStereoRendering(false);

		FEngineShowFlags UseEngineShowFlags(EShowFlagInitMode::ESFIM_Game);
		//UseEngineShowFlags.Tonemapper = false;

		FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
			Canvas.GetRenderTarget(),
			World->Scene,
			UseEngineShowFlags)
			.SetTime(Time)
			.SetRealtimeUpdate( true )
			.SetViewModeParam( -1, FName("None") ) );

		ViewFamily.DebugDPIScale = 1.0;

		ViewFamily.EngineShowFlags = UseEngineShowFlags;

		ViewFamily.bIsHDR = false;

		ViewFamily.SceneCaptureSource = ESceneCaptureSource::SCS_FinalToneCurveHDR;

		ViewFamily.LandscapeLODOverride = 0;

		FSceneViewExtensionContext ViewExtensionContext(World->Scene);
		ViewExtensionContext.bStereoEnabled = false;
		ViewFamily.ViewExtensions = GEngine->ViewExtensions->GatherActiveExtensions(ViewExtensionContext);

		for (auto ViewExt : ViewFamily.ViewExtensions)
		{
			ViewExt->SetupViewFamily(ViewFamily);
		}

		//TODO:ViewMode和ViewportType可以作为属性暴露出去
		EViewModeIndex CurrentViewMode = EViewModeIndex::VMI_Lit;
		ViewFamily.ViewMode = CurrentViewMode;

		EngineShowFlagOverride(EShowFlagInitMode::ESFIM_Game, ViewFamily.ViewMode, ViewFamily.EngineShowFlags, false);
		EngineShowFlagOrthographicOverride(true, ViewFamily.EngineShowFlags);

		//create FSceneView
		FSceneView* View = nullptr;
		{
			const bool bStereoRendering = false;

			FSceneViewInitOptions ViewInitOptions;

			const FVector ModifiedViewLocation = ControllingActorViewInfo.Location;
			FRotator ModifiedViewRotation = ControllingActorViewInfo.Rotation;
			const float ModifiedViewFOV = ViewFOV;

			ViewInitOptions.ViewOrigin = ModifiedViewLocation;

			FIntPoint ViewportSize(SizeX,SizeY);
			ViewportSize.X = FMath::Max(ViewportSize.X, 1);
			ViewportSize.Y = FMath::Max(ViewportSize.Y, 1);
			FIntPoint ViewportOffset(0, 0);

			ViewInitOptions.SetViewRectangle(FIntRect(ViewportOffset, ViewportOffset + ViewportSize));

			// no matter how we are drawn (forced or otherwise), reset our time here
			float TimeForForceRedraw = 0.0;

			const bool bConstrainAspectRatio = ControllingActorViewInfo.bConstrainAspectRatio;

			AWorldSettings* WorldSettings = nullptr;
			if( GetWorld()->Scene != nullptr)
			{
				WorldSettings = GetWorld()->GetWorldSettings();
			}
			if( WorldSettings != nullptr )
			{
				ViewInitOptions.WorldToMetersScale = WorldSettings->WorldToMeters;
			}

			if (true)
			{
				// @todo vreditor: Not stereo friendly yet
				ViewInitOptions.ViewRotationMatrix = FInverseRotationMatrix(ModifiedViewRotation) * FMatrix(
					FPlane(0, 0, 1, 0),
					FPlane(1, 0, 0, 0),
					FPlane(0, 1, 0, 0),
					FPlane(0, 0, 0, 1));

				ViewInitOptions.ProjectionMatrix = ControllingActorViewInfo.CalculateProjectionMatrix();
			}

			if (!ViewInitOptions.IsValidViewRectangle())
			{
				// Zero sized rects are invalid, so fake to 1x1 to avoid asserts later on
				ViewInitOptions.SetViewRectangle(FIntRect(0, 0, 1, 1));
			}

			// Allocate our stereo view state on demand, so that only viewports that actually use stereo features have one
			const int32 ViewStateIndex =/* (StereoViewIndex != INDEX_NONE) ? StereoViewIndex : */0;

			ViewInitOptions.ViewFamily = &ViewFamily;
			ViewInitOptions.SceneViewStateInterface = ViewState.GetReference();
			ViewInitOptions.StereoViewIndex = -1;

			ViewInitOptions.BackgroundColor = FColor(0,0,0);

			//ViewInitOptions.EditorViewBitflag = 1, // send the bit for this view - each actor will check it's visibility bits against this

				// for ortho views to steal perspective view origin
				//ViewInitOptions.OverrideLODViewOrigin = FVector::ZeroVector;
			ViewInitOptions.bUseFauxOrthoViewPos = true;

			ViewInitOptions.bUseFieldOfViewForLOD = ControllingActorViewInfo.bUseFieldOfViewForLOD;
			ViewInitOptions.FOV = ControllingActorViewInfo.FOV;

			ViewInitOptions.OverrideFarClippingPlaneDistance = 0.f;


			TArray<UActorComponent*> ComponentQueue;
			TSet<FPrimitiveComponentId> HiddenPrimitives;
			for(AActor* Actor : HiddenActors)
			{
				if (Actor != nullptr)
				{
					for (UActorComponent* Component : Actor->GetComponents())
					{
						ComponentQueue.Add(Component);
					}
				}
			}
			while (ComponentQueue.Num() > 0)
			{
				UActorComponent* Component = ComponentQueue.Pop(false);
				if (Cast<UPrimitiveComponent>(Component) != nullptr)
				{
					UPrimitiveComponent* PrimitiveComponent = Cast<UPrimitiveComponent>(Component);
					HiddenPrimitives.Add(PrimitiveComponent->ComponentId);
				}
				else if (Cast<UChildActorComponent>(Component) != nullptr)
				{
					AActor* ChildActor = Cast<UChildActorComponent>(Component)->GetChildActor();
					if (ChildActor != nullptr)
					{
						for (UActorComponent* SubComponent : ChildActor->GetComponents())
						{
							ComponentQueue.Add(SubComponent);
						}
					}
				}
			}

			ViewInitOptions.HiddenPrimitives = HiddenPrimitives;

#if !UE_BUILD_SHIPPING
			{
				static const auto CVarVSync = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT("r.Test.ConstrainedView"));
				int32 Value = CVarVSync->GetValueOnGameThread();

				if (Value)
				{
					const FIntRect& ViewRect = ViewInitOptions.GetViewRect();
					FIntRect ConstrainedViewRect = ViewInitOptions.GetConstrainedViewRect();

					int InsetX = ConstrainedViewRect.Width() / 4;
					int InsetY = ConstrainedViewRect.Height() / 4;

					// this allows to test various typical view port situations
					switch (Value)
					{
					case 1:
						ConstrainedViewRect.Min.X += InsetX;
						ConstrainedViewRect.Min.Y += InsetY;
						ConstrainedViewRect.Max.X -= InsetX;
						ConstrainedViewRect.Max.Y -= InsetY;
						break;

					case 2:
						ConstrainedViewRect.Min.Y += InsetY;
						ConstrainedViewRect.Max.Y -= InsetY;
						break;

					case 3:
						ConstrainedViewRect.Min.X += InsetX;
						ConstrainedViewRect.Max.X -= InsetX;
						break;

					case 4:
						ConstrainedViewRect.Max.X -= 2 * InsetX;
						ConstrainedViewRect.Max.Y -= 2 * InsetY;
						break;

					case 5:
						ConstrainedViewRect.Min.X += 2 * InsetX;
						ConstrainedViewRect.Max.Y -= 2 * InsetY;
						break;

					case 6:
						ConstrainedViewRect.Max.X -= 2 * InsetX;
						ConstrainedViewRect.Min.Y += 2 * InsetY;
						break;

					case 7:
						ConstrainedViewRect.Min.X += 2 * InsetX;
						ConstrainedViewRect.Min.Y += 2 * InsetY;
						break;
					}

					ViewInitOptions.SetConstrainedViewRectangle(ConstrainedViewRect);
				}
			}
#endif

			View = new FSceneView(ViewInitOptions);

			View->ViewLocation = ModifiedViewLocation;
			View->ViewRotation = ModifiedViewRotation;

			int32 FamilyIndex = ViewFamily.Views.Add(View);
			check(FamilyIndex == View->StereoViewIndex || View->StereoViewIndex == INDEX_NONE);

			//PostProcess
			if (UsePostProcessEffect)
			{
				View->StartFinalPostprocessSettings(View->ViewLocation);
			}
			else
			{
				//This actually is an illegal operation to cheat the function so that it cannot find the world's pointer to avoid do PostProcessVolumes' effect;
				View->Family = nullptr;
				View->StartFinalPostprocessSettings(View->ViewLocation);
				View->Family = ViewInitOptions.ViewFamily;
			}

			// Pass on the previous view transform of the controlling actor to the view
			View->PreviousViewTransform = ControllingActorViewInfo.PreviousViewTransform;
			View->OverridePostProcessSettings(ControllingActorViewInfo.PostProcessSettings, ControllingActorViewInfo.PostProcessBlendWeight);

			for (int32 ExtraPPBlendIdx = 0; ExtraPPBlendIdx < ControllingActorExtraPostProcessBlends.Num(); ++ExtraPPBlendIdx)
			{
				FPostProcessSettings const& PPSettings = ControllingActorExtraPostProcessBlends[ExtraPPBlendIdx];
				float const Weight = ControllingActorExtraPostProcessBlendWeights[ExtraPPBlendIdx];
				View->OverridePostProcessSettings(PPSettings, Weight);
			}

			View->EndFinalPostprocessSettings(ViewInitOptions);

			for (int ViewExt = 0; ViewExt < ViewFamily.ViewExtensions.Num(); ViewExt++)
			{
				ViewFamily.ViewExtensions[ViewExt]->SetupView(ViewFamily, *View);
			}
		}
		View->ViewActor = GetOwner();
		View->bCameraCut = false;
		//View->bHasSelectedComponents = false;

		View->CameraConstrainedViewRect = View->UnscaledViewRect;

		if (ViewFamily.GetScreenPercentageInterface() == nullptr)
		{
			float GlobalResolutionFraction = 1.0f;
			ViewFamily.SetScreenPercentageInterface(new FLegacyScreenPercentageDriver(
				ViewFamily, GlobalResolutionFraction));
		}

		check(ViewFamily.GetScreenPercentageInterface() != nullptr);

		if (HighTextureQuality)
		{
			IStreamingManager::Get().AddViewInformation(View->ViewLocation, SizeX, SizeX / FMath::Tan(FMath::DegreesToRadians(View->FOV * 0.5f)));
		}
		GetRendererModule().BeginRenderingViewFamily(&Canvas,&ViewFamily);


		Canvas.Flush_GameThread();

	}
}

void UCameraCaptureComponent::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
	UCameraCaptureComponent* This = CastChecked<UCameraCaptureComponent>(InThis);

	FSceneViewStateInterface* Ref = This->ViewState.GetReference();
	if (Ref)
	{
		Ref->AddReferencedObjects(Collector);
	}

	USceneComponent::AddReferencedObjects(This, Collector);
}

PRAGMA_ENABLE_OPTIMIZATION