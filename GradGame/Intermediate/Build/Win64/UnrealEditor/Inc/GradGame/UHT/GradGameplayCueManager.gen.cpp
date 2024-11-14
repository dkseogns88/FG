// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/GradGameplayCueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameplayCueManager() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayCueManager();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayCueManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradGameplayCueManager
void UGradGameplayCueManager::StaticRegisterNativesUGradGameplayCueManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradGameplayCueManager);
UClass* Z_Construct_UClass_UGradGameplayCueManager_NoRegister()
{
	return UGradGameplayCueManager::StaticClass();
}
struct Z_Construct_UClass_UGradGameplayCueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/GradGameplayCueManager.h" },
		{ "ModuleRelativePath", "AbilitySystem/GradGameplayCueManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradGameplayCueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradGameplayCueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayCueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradGameplayCueManager_Statics::ClassParams = {
	&UGradGameplayCueManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayCueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradGameplayCueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradGameplayCueManager()
{
	if (!Z_Registration_Info_UClass_UGradGameplayCueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradGameplayCueManager.OuterSingleton, Z_Construct_UClass_UGradGameplayCueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradGameplayCueManager.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradGameplayCueManager>()
{
	return UGradGameplayCueManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradGameplayCueManager);
UGradGameplayCueManager::~UGradGameplayCueManager() {}
// End Class UGradGameplayCueManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradGameplayCueManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradGameplayCueManager, UGradGameplayCueManager::StaticClass, TEXT("UGradGameplayCueManager"), &Z_Registration_Info_UClass_UGradGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradGameplayCueManager), 3430828296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradGameplayCueManager_h_1973663558(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradGameplayCueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradGameplayCueManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
