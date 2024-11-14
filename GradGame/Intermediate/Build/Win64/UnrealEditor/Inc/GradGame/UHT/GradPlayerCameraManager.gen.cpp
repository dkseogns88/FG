// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Camera/GradPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradPlayerCameraManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
GRADGAME_API UClass* Z_Construct_UClass_AGradPlayerCameraManager();
GRADGAME_API UClass* Z_Construct_UClass_AGradPlayerCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class AGradPlayerCameraManager
void AGradPlayerCameraManager::StaticRegisterNativesAGradPlayerCameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGradPlayerCameraManager);
UClass* Z_Construct_UClass_AGradPlayerCameraManager_NoRegister()
{
	return AGradPlayerCameraManager::StaticClass();
}
struct Z_Construct_UClass_AGradPlayerCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Camera/GradPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Camera/GradPlayerCameraManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradPlayerCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGradPlayerCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradPlayerCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradPlayerCameraManager_Statics::ClassParams = {
	&AGradPlayerCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradPlayerCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGradPlayerCameraManager()
{
	if (!Z_Registration_Info_UClass_AGradPlayerCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradPlayerCameraManager.OuterSingleton, Z_Construct_UClass_AGradPlayerCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradPlayerCameraManager.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<AGradPlayerCameraManager>()
{
	return AGradPlayerCameraManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGradPlayerCameraManager);
AGradPlayerCameraManager::~AGradPlayerCameraManager() {}
// End Class AGradPlayerCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradPlayerCameraManager, AGradPlayerCameraManager::StaticClass, TEXT("AGradPlayerCameraManager"), &Z_Registration_Info_UClass_AGradPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradPlayerCameraManager), 1628881574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_3101818034(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
