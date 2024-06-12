// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraCapture/Public/CineCameraCaptureActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraCaptureActor() {}
// Cross Module References
	CAMERACAPTURE_API UClass* Z_Construct_UClass_ACineCameraCaptureActor();
	CAMERACAPTURE_API UClass* Z_Construct_UClass_ACineCameraCaptureActor_NoRegister();
	CAMERACAPTURE_API UClass* Z_Construct_UClass_UCameraCaptureComponent_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_CameraCapture();
// End Cross Module References
	void ACineCameraCaptureActor::StaticRegisterNativesACineCameraCaptureActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACineCameraCaptureActor);
	UClass* Z_Construct_UClass_ACineCameraCaptureActor_NoRegister()
	{
		return ACineCameraCaptureActor::StaticClass();
	}
	struct Z_Construct_UClass_ACineCameraCaptureActor_Statics
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
	UObject* (*const Z_Construct_UClass_ACineCameraCaptureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraCaptureActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "CineCameraCaptureActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CineCameraCaptureActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraCaptureActor_Statics::NewProp_CameraCaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CineCameraCaptureActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CineCameraCaptureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACineCameraCaptureActor_Statics::NewProp_CameraCaptureComponent = { "CameraCaptureComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACineCameraCaptureActor, CameraCaptureComponent), Z_Construct_UClass_UCameraCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACineCameraCaptureActor_Statics::NewProp_CameraCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraCaptureActor_Statics::NewProp_CameraCaptureComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACineCameraCaptureActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraCaptureActor_Statics::NewProp_CameraCaptureComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACineCameraCaptureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACineCameraCaptureActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACineCameraCaptureActor_Statics::ClassParams = {
		&ACineCameraCaptureActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACineCameraCaptureActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraCaptureActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACineCameraCaptureActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraCaptureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACineCameraCaptureActor()
	{
		if (!Z_Registration_Info_UClass_ACineCameraCaptureActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACineCameraCaptureActor.OuterSingleton, Z_Construct_UClass_ACineCameraCaptureActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACineCameraCaptureActor.OuterSingleton;
	}
	template<> CAMERACAPTURE_API UClass* StaticClass<ACineCameraCaptureActor>()
	{
		return ACineCameraCaptureActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACineCameraCaptureActor);
	ACineCameraCaptureActor::~ACineCameraCaptureActor() {}
	struct Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CineCameraCaptureActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CineCameraCaptureActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACineCameraCaptureActor, ACineCameraCaptureActor::StaticClass, TEXT("ACineCameraCaptureActor"), &Z_Registration_Info_UClass_ACineCameraCaptureActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACineCameraCaptureActor), 142570015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CineCameraCaptureActor_h_4052273252(TEXT("/Script/CameraCapture"),
		Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CineCameraCaptureActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_87972_Documents_Unreal_Projects_ProtalProject_Plugins_CameraCapture_CameraCapture_Source_CameraCapture_Public_CineCameraCaptureActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
