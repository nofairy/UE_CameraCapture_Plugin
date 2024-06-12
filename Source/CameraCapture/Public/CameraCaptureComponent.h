// Copyright sayonara Limited, 2023-2023. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneComponent.h"
#include "Widgets/SWindow.h"
#include "Widgets/SVirtualWindow.h"
#include "Input/HittestGrid.h"
#include "ShowFlags.h"
#include "UnrealClient.h"
#include "SceneTypes.h"

#include "CameraCaptureComponent.generated.h"
UCLASS(Blueprintable, hidecategories = (Collision, Object, Physics, SceneComponent, Mobility, Tags, Activation, Cooking, Rendering), ClassGroup = Rendering, meta = (BlueprintSpawnableComponent))
class CAMERACAPTURE_API UCameraCaptureComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UCameraCaptureComponent(const FObjectInitializer& ObjectInitializer);

	/** TextureTarget2D asset to render*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Camera Capture Settings", meta=(EditConditionHides))
	UTextureRenderTarget2D* TextureTarget = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Capture Settings", meta = (NoSpinbox=true, EditConditionHides))
	int32 TextureTargetX = 1920;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera Capture Settings", meta = (NoSpinbox=true, EditConditionHides))
	int32 TextureTargetY = 1080;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Capture Settings", meta = (EditConditionHides))
	bool HighTextureQuality = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Capture Settings", meta = (EditConditionHides))
	TArray<AActor*> HiddenActors;

	/** If use PostProcessVolumes' effect ,the camera's postprocess settings is always enable*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Capture Settings", meta = (EditConditionHides))
	bool UsePostProcessEffect = false;

public:
	virtual void BeginDestroy() override;
	virtual void OnRegister() override;
	virtual void OnUnregister() override;

protected:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	float UserIsControllingAtmosphericLightTimer = 0.f;
	FSceneViewStateReference ViewState;
	bool Is_ViewStateInitialized = false;

public:
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
};