// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/GradAbilitySet.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradAbilitySet() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySet();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySet_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradAbilitySet_GameplayAbility
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradAbilitySet_GameplayAbility;
class UScriptStruct* FGradAbilitySet_GameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradAbilitySet_GameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradAbilitySet_GameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradAbilitySet_GameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_GradAbilitySet_GameplayAbility.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradAbilitySet_GameplayAbility>()
{
	return FGradAbilitySet_GameplayAbility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameplayAbility\xef\xbf\xbd\xef\xbf\xbd Wrapper \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * - \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayAbility\xef\xbf\xbd\xef\xbf\xbd Wrapper \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n- \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "GradAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameplayAbility */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameplayAbility" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "GradAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Tag\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd Ability\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd Ability\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "GradAbilitySet_GameplayAbility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Level) */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Level)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradAbilitySet_GameplayAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAbilitySet_GameplayAbility, Ability), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAbilitySet_GameplayAbility, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAbilitySet_GameplayAbility, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::NewProp_AbilityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradAbilitySet_GameplayAbility",
	Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::PropPointers),
	sizeof(FGradAbilitySet_GameplayAbility),
	alignof(FGradAbilitySet_GameplayAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility()
{
	if (!Z_Registration_Info_UScriptStruct_GradAbilitySet_GameplayAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradAbilitySet_GameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradAbilitySet_GameplayAbility.InnerSingleton;
}
// End ScriptStruct FGradAbilitySet_GameplayAbility

// Begin ScriptStruct FGradAbilitySet_GrantedHandles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradAbilitySet_GrantedHandles;
class UScriptStruct* FGradAbilitySet_GrantedHandles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradAbilitySet_GrantedHandles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradAbilitySet_GrantedHandles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradAbilitySet_GrantedHandles"));
	}
	return Z_Registration_Info_UScriptStruct_GradAbilitySet_GrantedHandles.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradAbilitySet_GrantedHandles>()
{
	return FGradAbilitySet_GrantedHandles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySpecHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameplayAbilitySpecHandle(int32) */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameplayAbilitySpecHandle(int32)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySpecHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySpecHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradAbilitySet_GrantedHandles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles = { "AbilitySpecHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAbilitySet_GrantedHandles, AbilitySpecHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySpecHandles_MetaData), NewProp_AbilitySpecHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::NewProp_AbilitySpecHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradAbilitySet_GrantedHandles",
	Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::PropPointers),
	sizeof(FGradAbilitySet_GrantedHandles),
	alignof(FGradAbilitySet_GrantedHandles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles()
{
	if (!Z_Registration_Info_UScriptStruct_GradAbilitySet_GrantedHandles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradAbilitySet_GrantedHandles.InnerSingleton, Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradAbilitySet_GrantedHandles.InnerSingleton;
}
// End ScriptStruct FGradAbilitySet_GrantedHandles

// Begin Class UGradAbilitySet
void UGradAbilitySet::StaticRegisterNativesUGradAbilitySet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradAbilitySet);
UClass* Z_Construct_UClass_UGradAbilitySet_NoRegister()
{
	return UGradAbilitySet::StaticClass();
}
struct Z_Construct_UClass_UGradAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/GradAbilitySet.h" },
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedGameplayAbilities_MetaData[] = {
		{ "Category", "Gameplay Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameplayAbilities */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameplayAbilities" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedGameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedGameplayAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradAbilitySet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility, METADATA_PARAMS(0, nullptr) }; // 1055908798
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradAbilitySet_Statics::NewProp_GrantedGameplayAbilities = { "GrantedGameplayAbilities", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradAbilitySet, GrantedGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedGameplayAbilities_MetaData), NewProp_GrantedGameplayAbilities_MetaData) }; // 1055908798
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradAbilitySet_Statics::NewProp_GrantedGameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradAbilitySet_Statics::NewProp_GrantedGameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilitySet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradAbilitySet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilitySet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradAbilitySet_Statics::ClassParams = {
	&UGradAbilitySet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradAbilitySet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilitySet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradAbilitySet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradAbilitySet()
{
	if (!Z_Registration_Info_UClass_UGradAbilitySet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradAbilitySet.OuterSingleton, Z_Construct_UClass_UGradAbilitySet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradAbilitySet.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradAbilitySet>()
{
	return UGradAbilitySet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradAbilitySet);
UGradAbilitySet::~UGradAbilitySet() {}
// End Class UGradAbilitySet

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradAbilitySet_GameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics::NewStructOps, TEXT("GradAbilitySet_GameplayAbility"), &Z_Registration_Info_UScriptStruct_GradAbilitySet_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradAbilitySet_GameplayAbility), 1055908798U) },
		{ FGradAbilitySet_GrantedHandles::StaticStruct, Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics::NewStructOps, TEXT("GradAbilitySet_GrantedHandles"), &Z_Registration_Info_UScriptStruct_GradAbilitySet_GrantedHandles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradAbilitySet_GrantedHandles), 2762917416U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradAbilitySet, UGradAbilitySet::StaticClass, TEXT("UGradAbilitySet"), &Z_Registration_Info_UClass_UGradAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradAbilitySet), 1377191112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_628070993(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
