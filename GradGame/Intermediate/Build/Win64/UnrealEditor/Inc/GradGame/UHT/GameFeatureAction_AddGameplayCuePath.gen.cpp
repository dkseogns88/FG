// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/GameFeatures/GameFeatureAction_AddGameplayCuePath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddGameplayCuePath() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
GRADGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath();
GRADGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGameFeatureAction_AddGameplayCuePath
void UGameFeatureAction_AddGameplayCuePath::StaticRegisterNativesUGameFeatureAction_AddGameplayCuePath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddGameplayCuePath);
UClass* Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_NoRegister()
{
	return UGameFeatureAction_AddGameplayCuePath::StaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddGameplayCuePath.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddGameplayCuePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryPathsToAdd_MetaData[] = {
		{ "Category", "GameFeature|GameplayCues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GameplayCueNotify \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddGameplayCuePath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayCueNotify \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoryPathsToAdd_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoryPathsToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddGameplayCuePath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::NewProp_DirectoryPathsToAdd_Inner = { "DirectoryPathsToAdd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::NewProp_DirectoryPathsToAdd = { "DirectoryPathsToAdd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddGameplayCuePath, DirectoryPathsToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoryPathsToAdd_MetaData), NewProp_DirectoryPathsToAdd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::NewProp_DirectoryPathsToAdd_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::NewProp_DirectoryPathsToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::ClassParams = {
	&UGameFeatureAction_AddGameplayCuePath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGameFeatureAction_AddGameplayCuePath>()
{
	return UGameFeatureAction_AddGameplayCuePath::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddGameplayCuePath);
UGameFeatureAction_AddGameplayCuePath::~UGameFeatureAction_AddGameplayCuePath() {}
// End Class UGameFeatureAction_AddGameplayCuePath

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddGameplayCuePath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddGameplayCuePath, UGameFeatureAction_AddGameplayCuePath::StaticClass, TEXT("UGameFeatureAction_AddGameplayCuePath"), &Z_Registration_Info_UClass_UGameFeatureAction_AddGameplayCuePath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddGameplayCuePath), 2469427920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddGameplayCuePath_h_3893236596(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddGameplayCuePath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddGameplayCuePath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS