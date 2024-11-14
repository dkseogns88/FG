// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Cosmetics/GradCosmeticAnimationTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradCosmeticAnimationTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradAnimLayerSelectionEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionEntry;
class UScriptStruct* FGradAnimLayerSelectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradAnimLayerSelectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionEntry.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradAnimLayerSelectionEntry>()
{
	return FGradAnimLayerSelectionEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "Category", "GradAnimLayerSelectionEntry" },
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Category", "GradAnimLayerSelectionEntry" },
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradAnimLayerSelectionEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAnimLayerSelectionEntry, Layer), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAnimLayerSelectionEntry, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::NewProp_RequiredTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradAnimLayerSelectionEntry",
	Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::PropPointers),
	sizeof(FGradAnimLayerSelectionEntry),
	alignof(FGradAnimLayerSelectionEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionEntry.InnerSingleton;
}
// End ScriptStruct FGradAnimLayerSelectionEntry

// Begin ScriptStruct FGradAnimLayerSelectionSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionSet;
class UScriptStruct* FGradAnimLayerSelectionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradAnimLayerSelectionSet"));
	}
	return Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionSet.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradAnimLayerSelectionSet>()
{
	return FGradAnimLayerSelectionSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerRules_MetaData[] = {
		{ "Category", "GradAnimLayerSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd5\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb4\xef\xbf\xbd GradAnimBodyStyleSelection\xef\xbf\xbd\xef\xbf\xbd MeshRule\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AnimInstance\xef\xbf\xbd\xef\xbf\xbd Rule\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd LayerRules\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd5\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb4\xef\xbf\xbd GradAnimBodyStyleSelection\xef\xbf\xbd\xef\xbf\xbd MeshRule\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AnimInstance\xef\xbf\xbd\xef\xbf\xbd Rule\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd LayerRules\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayer_MetaData[] = {
		{ "Category", "GradAnimLayerSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae Layer */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae Layer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerRules;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradAnimLayerSelectionSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::NewProp_LayerRules_Inner = { "LayerRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry, METADATA_PARAMS(0, nullptr) }; // 2953989723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::NewProp_LayerRules = { "LayerRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAnimLayerSelectionSet, LayerRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerRules_MetaData), NewProp_LayerRules_MetaData) }; // 2953989723
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::NewProp_DefaultLayer = { "DefaultLayer", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAnimLayerSelectionSet, DefaultLayer), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLayer_MetaData), NewProp_DefaultLayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::NewProp_LayerRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::NewProp_LayerRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::NewProp_DefaultLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradAnimLayerSelectionSet",
	Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::PropPointers),
	sizeof(FGradAnimLayerSelectionSet),
	alignof(FGradAnimLayerSelectionSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet()
{
	if (!Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionSet.InnerSingleton, Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionSet.InnerSingleton;
}
// End ScriptStruct FGradAnimLayerSelectionSet

// Begin ScriptStruct FGradAnimBodyStyleSelectionEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionEntry;
class UScriptStruct* FGradAnimBodyStyleSelectionEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradAnimBodyStyleSelectionEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionEntry.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradAnimBodyStyleSelectionEntry>()
{
	return FGradAnimBodyStyleSelectionEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "GradAnimBodyStyleSelectionEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AnimLayer\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SkeletalMesh */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimLayer\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SkeletalMesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Categories", "Cosmetic" },
		{ "Category", "GradAnimBodyStyleSelectionEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cosmetic Tag\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cosmetic Tag\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradAnimBodyStyleSelectionEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAnimBodyStyleSelectionEntry, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAnimBodyStyleSelectionEntry, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::NewProp_RequiredTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradAnimBodyStyleSelectionEntry",
	Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::PropPointers),
	sizeof(FGradAnimBodyStyleSelectionEntry),
	alignof(FGradAnimBodyStyleSelectionEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionEntry.InnerSingleton, Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionEntry.InnerSingleton;
}
// End ScriptStruct FGradAnimBodyStyleSelectionEntry

// Begin ScriptStruct FGradAnimBodyStyleSelectionSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionSet;
class UScriptStruct* FGradAnimBodyStyleSelectionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradAnimBodyStyleSelectionSet"));
	}
	return Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionSet.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradAnimBodyStyleSelectionSet>()
{
	return FGradAnimBodyStyleSelectionSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshRules_MetaData[] = {
		{ "Category", "GradAnimBodyStyleSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*   - Cosmetic#1 25\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd    */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "- Cosmetic#1 25\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "GradAnimBodyStyleSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd7\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SkeletalMesh */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd7\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SkeletalMesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForcedPhysicsAsset_MetaData[] = {
		{ "Category", "GradAnimBodyStyleSelectionSet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Physics Asset\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd -> \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Animation\xef\xbf\xbd\xef\xbf\xbd Physics \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradCosmeticAnimationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics Asset\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd -> \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Animation\xef\xbf\xbd\xef\xbf\xbd Physics \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshRules;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForcedPhysicsAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradAnimBodyStyleSelectionSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules_Inner = { "MeshRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry, METADATA_PARAMS(0, nullptr) }; // 464166192
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules = { "MeshRules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAnimBodyStyleSelectionSet, MeshRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshRules_MetaData), NewProp_MeshRules_MetaData) }; // 464166192
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAnimBodyStyleSelectionSet, DefaultMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMesh_MetaData), NewProp_DefaultMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::NewProp_ForcedPhysicsAsset = { "ForcedPhysicsAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAnimBodyStyleSelectionSet, ForcedPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForcedPhysicsAsset_MetaData), NewProp_ForcedPhysicsAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::NewProp_MeshRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::NewProp_DefaultMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::NewProp_ForcedPhysicsAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradAnimBodyStyleSelectionSet",
	Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::PropPointers),
	sizeof(FGradAnimBodyStyleSelectionSet),
	alignof(FGradAnimBodyStyleSelectionSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet()
{
	if (!Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionSet.InnerSingleton, Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionSet.InnerSingleton;
}
// End ScriptStruct FGradAnimBodyStyleSelectionSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Cosmetics_GradCosmeticAnimationTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradAnimLayerSelectionEntry::StaticStruct, Z_Construct_UScriptStruct_FGradAnimLayerSelectionEntry_Statics::NewStructOps, TEXT("GradAnimLayerSelectionEntry"), &Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradAnimLayerSelectionEntry), 2953989723U) },
		{ FGradAnimLayerSelectionSet::StaticStruct, Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet_Statics::NewStructOps, TEXT("GradAnimLayerSelectionSet"), &Z_Registration_Info_UScriptStruct_GradAnimLayerSelectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradAnimLayerSelectionSet), 538081497U) },
		{ FGradAnimBodyStyleSelectionEntry::StaticStruct, Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionEntry_Statics::NewStructOps, TEXT("GradAnimBodyStyleSelectionEntry"), &Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradAnimBodyStyleSelectionEntry), 464166192U) },
		{ FGradAnimBodyStyleSelectionSet::StaticStruct, Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet_Statics::NewStructOps, TEXT("GradAnimBodyStyleSelectionSet"), &Z_Registration_Info_UScriptStruct_GradAnimBodyStyleSelectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradAnimBodyStyleSelectionSet), 2789229764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Cosmetics_GradCosmeticAnimationTypes_h_908877835(TEXT("/Script/GradGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Cosmetics_GradCosmeticAnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Cosmetics_GradCosmeticAnimationTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
