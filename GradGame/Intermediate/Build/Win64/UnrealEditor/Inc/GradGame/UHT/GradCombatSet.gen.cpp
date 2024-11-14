// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/Attributes/GradCombatSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradCombatSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GRADGAME_API UClass* Z_Construct_UClass_UGradAttributeSet();
GRADGAME_API UClass* Z_Construct_UClass_UGradCombatSet();
GRADGAME_API UClass* Z_Construct_UClass_UGradCombatSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradCombatSet
void UGradCombatSet::StaticRegisterNativesUGradCombatSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradCombatSet);
UClass* Z_Construct_UClass_UGradCombatSet_NoRegister()
{
	return UGradCombatSet::StaticClass();
}
struct Z_Construct_UClass_UGradCombatSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * CombatSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xd7\xb4\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd Attribute\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Set\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd:\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BaseHeal\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, BaseDamage\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CombatSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AttributeSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/GradCombatSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/GradCombatSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CombatSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xd7\xb4\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd Attribute\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Set\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd:\n- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BaseHeal\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, BaseDamage\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CombatSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AttributeSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Grad|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base amount of damage to apply in the damage execution.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/GradCombatSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base amount of damage to apply in the damage execution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseHeal_MetaData[] = {
		{ "Category", "Grad|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * FGameplayAttribute\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AttributeSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd (float\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd Struct\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xb5)\n\x09 * - Healing\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n\x09 * - e.g. 5.0f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, Period\xef\xbf\xbd\xef\xbf\xbd 5\xef\xbf\xbd\xef\xbf\xbd Healing\xef\xbf\xbd\xc8\xb4\xd9\xb4\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\n\x09 */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/GradCombatSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FGameplayAttribute\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AttributeSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd (float\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd Struct\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xb5)\n- Healing\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n- e.g. 5.0f\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, Period\xef\xbf\xbd\xef\xbf\xbd 5\xef\xbf\xbd\xef\xbf\xbd Healing\xef\xbf\xbd\xc8\xb4\xd9\xb4\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseHeal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradCombatSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradCombatSet_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCombatSet, BaseDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradCombatSet_Statics::NewProp_BaseHeal = { "BaseHeal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCombatSet, BaseHeal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseHeal_MetaData), NewProp_BaseHeal_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradCombatSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCombatSet_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCombatSet_Statics::NewProp_BaseHeal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCombatSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradCombatSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCombatSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradCombatSet_Statics::ClassParams = {
	&UGradCombatSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradCombatSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradCombatSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCombatSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradCombatSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradCombatSet()
{
	if (!Z_Registration_Info_UClass_UGradCombatSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradCombatSet.OuterSingleton, Z_Construct_UClass_UGradCombatSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradCombatSet.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradCombatSet>()
{
	return UGradCombatSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradCombatSet);
UGradCombatSet::~UGradCombatSet() {}
// End Class UGradCombatSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Attributes_GradCombatSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradCombatSet, UGradCombatSet::StaticClass, TEXT("UGradCombatSet"), &Z_Registration_Info_UClass_UGradCombatSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradCombatSet), 1254538714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Attributes_GradCombatSet_h_1909047554(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Attributes_GradCombatSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Attributes_GradCombatSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
