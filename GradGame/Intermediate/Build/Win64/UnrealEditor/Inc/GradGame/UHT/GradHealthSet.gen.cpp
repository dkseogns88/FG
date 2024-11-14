// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/Attributes/GradHealthSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradHealthSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
GRADGAME_API UClass* Z_Construct_UClass_UGradAttributeSet();
GRADGAME_API UClass* Z_Construct_UClass_UGradHealthSet();
GRADGAME_API UClass* Z_Construct_UClass_UGradHealthSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradHealthSet
void UGradHealthSet::StaticRegisterNativesUGradHealthSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradHealthSet);
UClass* Z_Construct_UClass_UGradHealthSet_NoRegister()
{
	return UGradHealthSet::StaticClass();
}
struct Z_Construct_UClass_UGradHealthSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/GradHealthSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/GradHealthSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Grad|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/GradHealthSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Grad|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xc4\xa1 */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/GradHealthSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xc4\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Healing_MetaData[] = {
		{ "Category", "Grad|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/GradHealthSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Grad|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Incoming damage. This is mapped directly to -Health\n" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/GradHealthSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Incoming damage. This is mapped directly to -Health" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradHealthSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradHealthSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradHealthSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradHealthSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradHealthSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradHealthSet_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradHealthSet, Healing), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Healing_MetaData), NewProp_Healing_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradHealthSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradHealthSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradHealthSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHealthSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHealthSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHealthSet_Statics::NewProp_Healing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHealthSet_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHealthSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradHealthSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHealthSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradHealthSet_Statics::ClassParams = {
	&UGradHealthSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradHealthSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradHealthSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHealthSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradHealthSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradHealthSet()
{
	if (!Z_Registration_Info_UClass_UGradHealthSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradHealthSet.OuterSingleton, Z_Construct_UClass_UGradHealthSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradHealthSet.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradHealthSet>()
{
	return UGradHealthSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradHealthSet);
UGradHealthSet::~UGradHealthSet() {}
// End Class UGradHealthSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Attributes_GradHealthSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradHealthSet, UGradHealthSet::StaticClass, TEXT("UGradHealthSet"), &Z_Registration_Info_UClass_UGradHealthSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradHealthSet), 2513163801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Attributes_GradHealthSet_h_1606429872(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Attributes_GradHealthSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Attributes_GradHealthSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
