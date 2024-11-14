// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/GameFeatures/GameFeatureAction_AddInputConfig.h"
#include "GradGame/Input/GradMappableConfigPair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddInputConfig() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputConfig();
GRADGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputConfig_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradMappableConfigPair();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGameFeatureAction_AddInputConfig
void UGameFeatureAction_AddInputConfig::StaticRegisterNativesUGameFeatureAction_AddInputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddInputConfig);
UClass* Z_Construct_UClass_UGameFeatureAction_AddInputConfig_NoRegister()
{
	return UGameFeatureAction_AddInputConfig::StaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddInputConfig.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigs_MetaData[] = {
		{ "Category", "GameFeatureAction_AddInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PlayerMappableInputConfig\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddInputConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerMappableInputConfig\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs_Inner = { "InputConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradMappableConfigPair, METADATA_PARAMS(0, nullptr) }; // 2730142954
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs = { "InputConfigs", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddInputConfig, InputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfigs_MetaData), NewProp_InputConfigs_MetaData) }; // 2730142954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::NewProp_InputConfigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::ClassParams = {
	&UGameFeatureAction_AddInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddInputConfig()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddInputConfig.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddInputConfig.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGameFeatureAction_AddInputConfig>()
{
	return UGameFeatureAction_AddInputConfig::StaticClass();
}
UGameFeatureAction_AddInputConfig::UGameFeatureAction_AddInputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddInputConfig);
UGameFeatureAction_AddInputConfig::~UGameFeatureAction_AddInputConfig() {}
// End Class UGameFeatureAction_AddInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddInputConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddInputConfig, UGameFeatureAction_AddInputConfig::StaticClass, TEXT("UGameFeatureAction_AddInputConfig"), &Z_Registration_Info_UClass_UGameFeatureAction_AddInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddInputConfig), 4247739527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddInputConfig_h_4135737165(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddInputConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
