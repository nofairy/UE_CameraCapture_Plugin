// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraCapture/Public/CameraCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraCaptureComponent() {}
// Cross Module References
	CAMERACAPTURE_API UClass* Z_Construct_UClass_UCameraCaptureComponent();
	CAMERACAPTURE_API UClass* Z_Construct_UClass_UCameraCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCapture();
// End Cross Module References
	void UCameraCaptureComponent::StaticRegisterNativesUCameraCaptureComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraCaptureComponent);
	UClass* Z_Construct_UClass_UCameraCaptureComponent_NoRegister()
	{
		return UCameraCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCameraCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTargetX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureTargetX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTargetY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureTargetY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighTextureQuality_MetaData[];
#endif
		static void NewProp_HighTextureQuality_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HighTextureQuality;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsePostProcessEffect_MetaData[];
#endif
		static void NewProp_UsePostProcessEffect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePostProcessEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Collision Object Physics SceneComponent Mobility Tags Activation Cooking Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "CameraCaptureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CameraCaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "Category", "Camera Capture Settings" },
		{ "Comment", "/** TextureTarget2D asset to render*/" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CameraCaptureComponent.h" },
		{ "ToolTip", "TextureTarget2D asset to render" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCaptureComponent, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetX_MetaData[] = {
		{ "Category", "Camera Capture Settings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CameraCaptureComponent.h" },
		{ "NoSpinbox", "TRUE" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetX = { "TextureTargetX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCaptureComponent, TextureTargetX), METADATA_PARAMS(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetY_MetaData[] = {
		{ "Category", "Camera Capture Settings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CameraCaptureComponent.h" },
		{ "NoSpinbox", "TRUE" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetY = { "TextureTargetY", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCaptureComponent, TextureTargetY), METADATA_PARAMS(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HighTextureQuality_MetaData[] = {
		{ "Category", "Camera Capture Settings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CameraCaptureComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HighTextureQuality_SetBit(void* Obj)
	{
		((UCameraCaptureComponent*)Obj)->HighTextureQuality = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HighTextureQuality = { "HighTextureQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraCaptureComponent), &Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HighTextureQuality_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HighTextureQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HighTextureQuality_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HiddenActors_MetaData[] = {
		{ "Category", "Camera Capture Settings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CameraCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCaptureComponent, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HiddenActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HiddenActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_UsePostProcessEffect_MetaData[] = {
		{ "Category", "Camera Capture Settings" },
		{ "Comment", "/** If use PostProcessVolumes' effect ,the camera's postprocess settings is always enable*/" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CameraCaptureComponent.h" },
		{ "ToolTip", "If use PostProcessVolumes' effect ,the camera's postprocess settings is always enable" },
	};
#endif
	void Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_UsePostProcessEffect_SetBit(void* Obj)
	{
		((UCameraCaptureComponent*)Obj)->UsePostProcessEffect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_UsePostProcessEffect = { "UsePostProcessEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraCaptureComponent), &Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_UsePostProcessEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_UsePostProcessEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_UsePostProcessEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_TextureTargetY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HighTextureQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HiddenActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_HiddenActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCaptureComponent_Statics::NewProp_UsePostProcessEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraCaptureComponent_Statics::ClassParams = {
		&UCameraCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCaptureComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UCameraCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraCaptureComponent.OuterSingleton, Z_Construct_UClass_UCameraCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraCaptureComponent.OuterSingleton;
	}
	template<> CAMERACAPTURE_API UClass* StaticClass<UCameraCaptureComponent>()
	{
		return UCameraCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraCaptureComponent);
	UCameraCaptureComponent::~UCameraCaptureComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraCaptureComponent, UCameraCaptureComponent::StaticClass, TEXT("UCameraCaptureComponent"), &Z_Registration_Info_UClass_UCameraCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraCaptureComponent), 688631545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureComponent_h_2672028521(TEXT("/Script/CameraCapture"),
		Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
