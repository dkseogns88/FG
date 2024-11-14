// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/GameModes/GradExperienceDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradExperienceDefinition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradExperienceActionSet_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradExperienceDefinition();
GRADGAME_API UClass* Z_Construct_UClass_UGradExperienceDefinition_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradExperienceDefinition
void UGradExperienceDefinition::StaticRegisterNativesUGradExperienceDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradExperienceDefinition);
UClass* Z_Construct_UClass_UGradExperienceDefinition_NoRegister()
{
	return UGradExperienceDefinition::StaticClass();
}
struct Z_Construct_UClass_UGradExperienceDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameModes/GradExperienceDefinition.h" },
		{ "ModuleRelativePath", "GameModes/GradExperienceDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * member variables\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameModes/GradExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "member variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd property\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdc\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb7 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb5\xd0\xb4\xef\xbf\xbd\n\x09 * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameFeature plugin\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xc2\xb5\xef\xbf\xbd \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\n\x09 * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ShooterCore \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Plugin \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameModes/GradExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd property\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdc\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb7 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb5\xd0\xb4\xef\xbf\xbd\n- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameFeature plugin\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xc2\xb5\xef\xbf\xbd \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\n- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ShooterCore \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Plugin \xef\xbf\xbd\xdb\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionSets_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ExperienceActionSet\xef\xbf\xbd\xef\xbf\xbd UGameFeatureAction\xef\xbf\xbd\xef\xbf\xbd Set\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd, Gameplay \xef\xbf\xbd\xeb\xb5\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xd0\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "GameModes/GradExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ExperienceActionSet\xef\xbf\xbd\xef\xbf\xbd UGameFeatureAction\xef\xbf\xbd\xef\xbf\xbd Set\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd, Gameplay \xef\xbf\xbd\xeb\xb5\xb5\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xd0\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xcf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameFeatureAction\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbc\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/GradExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameFeatureAction\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbc\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPawnData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionSets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradExperienceDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradExperienceDefinition, DefaultPawnData), Z_Construct_UClass_UGradPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPawnData_MetaData), NewProp_DefaultPawnData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradExperienceDefinition, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFeaturesToEnable_MetaData), NewProp_GameFeaturesToEnable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_ActionSets_Inner = { "ActionSets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradExperienceActionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_ActionSets = { "ActionSets", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradExperienceDefinition, ActionSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionSets_MetaData), NewProp_ActionSets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradExperienceDefinition, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradExperienceDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_DefaultPawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_GameFeaturesToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_ActionSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_ActionSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceDefinition_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradExperienceDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradExperienceDefinition_Statics::ClassParams = {
	&UGradExperienceDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradExperienceDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceDefinition_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradExperienceDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradExperienceDefinition()
{
	if (!Z_Registration_Info_UClass_UGradExperienceDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradExperienceDefinition.OuterSingleton, Z_Construct_UClass_UGradExperienceDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradExperienceDefinition.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradExperienceDefinition>()
{
	return UGradExperienceDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradExperienceDefinition);
UGradExperienceDefinition::~UGradExperienceDefinition() {}
// End Class UGradExperienceDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradExperienceDefinition, UGradExperienceDefinition::StaticClass, TEXT("UGradExperienceDefinition"), &Z_Registration_Info_UClass_UGradExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradExperienceDefinition), 925925549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceDefinition_h_3690234687(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
