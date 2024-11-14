// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Weapons/InventoryFragment_ReticleConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryFragment_ReticleConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryFragment_ReticleConfig();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemFragment();
GRADGAME_API UClass* Z_Construct_UClass_UGradReticleWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradInventoryFragment_ReticleConfig
void UGradInventoryFragment_ReticleConfig::StaticRegisterNativesUGradInventoryFragment_ReticleConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradInventoryFragment_ReticleConfig);
UClass* Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_NoRegister()
{
	return UGradInventoryFragment_ReticleConfig::StaticClass();
}
struct Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/InventoryFragment_ReticleConfig.h" },
		{ "ModuleRelativePath", "Weapons/InventoryFragment_ReticleConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReticleWidgets_MetaData[] = {
		{ "Category", "Reticle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe2\xbf\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb5\xef\xbf\xbd ReticleWidget \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Fragment */" },
#endif
		{ "ModuleRelativePath", "Weapons/InventoryFragment_ReticleConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe2\xbf\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb5\xef\xbf\xbd ReticleWidget \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Fragment" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReticleWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReticleWidgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradInventoryFragment_ReticleConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets_Inner = { "ReticleWidgets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGradReticleWidgetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets = { "ReticleWidgets", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInventoryFragment_ReticleConfig, ReticleWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReticleWidgets_MetaData), NewProp_ReticleWidgets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::NewProp_ReticleWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::ClassParams = {
	&UGradInventoryFragment_ReticleConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradInventoryFragment_ReticleConfig()
{
	if (!Z_Registration_Info_UClass_UGradInventoryFragment_ReticleConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradInventoryFragment_ReticleConfig.OuterSingleton, Z_Construct_UClass_UGradInventoryFragment_ReticleConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradInventoryFragment_ReticleConfig.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradInventoryFragment_ReticleConfig>()
{
	return UGradInventoryFragment_ReticleConfig::StaticClass();
}
UGradInventoryFragment_ReticleConfig::UGradInventoryFragment_ReticleConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradInventoryFragment_ReticleConfig);
UGradInventoryFragment_ReticleConfig::~UGradInventoryFragment_ReticleConfig() {}
// End Class UGradInventoryFragment_ReticleConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Weapons_InventoryFragment_ReticleConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradInventoryFragment_ReticleConfig, UGradInventoryFragment_ReticleConfig::StaticClass, TEXT("UGradInventoryFragment_ReticleConfig"), &Z_Registration_Info_UClass_UGradInventoryFragment_ReticleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradInventoryFragment_ReticleConfig), 2995946703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Weapons_InventoryFragment_ReticleConfig_h_686008730(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Weapons_InventoryFragment_ReticleConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Weapons_InventoryFragment_ReticleConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
