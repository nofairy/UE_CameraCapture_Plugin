// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraCapture/Public/CameraCaptureActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraCaptureActor() {}
// Cross Module References
	CAMERACAPTURE_API UClass* Z_Construct_UClass_ACameraCaptureActor();
	CAMERACAPTURE_API UClass* Z_Construct_UClass_ACameraCaptureActor_NoRegister();
	CAMERACAPTURE_API UClass* Z_Construct_UClass_UCameraCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_CameraCapture();
// End Cross Module References
	void ACameraCaptureActor::StaticRegisterNativesACameraCaptureActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraCaptureActor);
	UClass* Z_Construct_UClass_ACameraCaptureActor_NoRegister()
	{
		return ACameraCaptureActor::StaticClass();
	}
	struct Z_Construct_UClass_ACameraCaptureActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraCaptureComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraCaptureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "CameraCaptureActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CameraCaptureActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCaptureActor_Statics::NewProp_CameraCaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CineCameraCaptureActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraCaptureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCaptureActor_Statics::NewProp_CameraCaptureComponent = { "CameraCaptureComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCaptureActor, CameraCaptureComponent), Z_Construct_UClass_UCameraCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureActor_Statics::NewProp_CameraCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureActor_Statics::NewProp_CameraCaptureComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraCaptureActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCaptureActor_Statics::NewProp_CameraCaptureComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraCaptureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraCaptureActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraCaptureActor_Statics::ClassParams = {
		&ACameraCaptureActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraCaptureActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraCaptureActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCaptureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraCaptureActor()
	{
		if (!Z_Registration_Info_UClass_ACameraCaptureActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraCaptureActor.OuterSingleton, Z_Construct_UClass_ACameraCaptureActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraCaptureActor.OuterSingleton;
	}
	template<> CAMERACAPTURE_API UClass* StaticClass<ACameraCaptureActor>()
	{
		return ACameraCaptureActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraCaptureActor);
	ACameraCaptureActor::~ACameraCaptureActor() {}
	struct Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraCaptureActor, ACameraCaptureActor::StaticClass, TEXT("ACameraCaptureActor"), &Z_Registration_Info_UClass_ACameraCaptureActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraCaptureActor), 254164063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureActor_h_3308398919(TEXT("/Script/CameraCapture"),
		Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CameraCaptureActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
