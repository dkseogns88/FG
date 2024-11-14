// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Cosmetics/GradPawnComponent_AppliedCharacterParts.h"
#include "GradGame/Cosmetics/GradCharacterPartTypes.h"
#include "GradGame/Cosmetics/GradCosmeticAnimationTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradPawnComponent_AppliedCharacterParts() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPart();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPartList();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradAppliedCharacterPartEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradAppliedCharacterPartEntry;
class UScriptStruct* FGradAppliedCharacterPartEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradAppliedCharacterPartEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradAppliedCharacterPartEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradAppliedCharacterPartEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GradAppliedCharacterPartEntry.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradAppliedCharacterPartEntry>()
{
	return FGradAppliedCharacterPartEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd Character Part\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd Character Part\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Part_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character Part\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Part\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GradCharacterPartList\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Part \xef\xbf\xbd\xda\xb5\xe9\xb0\xaa (FGradControllerCharacterPartEntry\xef\xbf\xbd\xef\xbf\xbd Handle \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd -> \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Part) */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GradCharacterPartList\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Part \xef\xbf\xbd\xda\xb5\xe9\xb0\xaa (FGradControllerCharacterPartEntry\xef\xbf\xbd\xef\xbf\xbd Handle \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd -> \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Part)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd Character Part\xef\xbf\xbd\xef\xbf\xbd Actor */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd Character Part\xef\xbf\xbd\xef\xbf\xbd Actor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Part;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradAppliedCharacterPartEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::NewProp_Part = { "Part", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAppliedCharacterPartEntry, Part), Z_Construct_UScriptStruct_FGradCharacterPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Part_MetaData), NewProp_Part_MetaData) }; // 3153997023
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::NewProp_PartHandle = { "PartHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAppliedCharacterPartEntry, PartHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartHandle_MetaData), NewProp_PartHandle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::NewProp_SpawnedComponent = { "SpawnedComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAppliedCharacterPartEntry, SpawnedComponent), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedComponent_MetaData), NewProp_SpawnedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::NewProp_Part,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::NewProp_PartHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::NewProp_SpawnedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradAppliedCharacterPartEntry",
	Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::PropPointers),
	sizeof(FGradAppliedCharacterPartEntry),
	alignof(FGradAppliedCharacterPartEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GradAppliedCharacterPartEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradAppliedCharacterPartEntry.InnerSingleton, Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradAppliedCharacterPartEntry.InnerSingleton;
}
// End ScriptStruct FGradAppliedCharacterPartEntry

// Begin ScriptStruct FGradCharacterPartList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradCharacterPartList;
class UScriptStruct* FGradCharacterPartList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradCharacterPartList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradCharacterPartList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradCharacterPartList, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradCharacterPartList"));
	}
	return Z_Registration_Info_UScriptStruct_GradCharacterPartList.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradCharacterPartList>()
{
	return FGradCharacterPartList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradCharacterPartList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GradPawnComponent_CharacterParts\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Character Parts\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GradPawnComponent_CharacterParts\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Character Parts\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd Character Part */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd Character Part" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd GradCharacterPartList\xef\xbf\xbd\xef\xbf\xbd Owner\xef\xbf\xbd\xef\xbf\xbd PawnComponent */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd GradCharacterPartList\xef\xbf\xbd\xef\xbf\xbd Owner\xef\xbf\xbd\xef\xbf\xbd PawnComponent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradCharacterPartList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry, METADATA_PARAMS(0, nullptr) }; // 972586082
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradCharacterPartList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 972586082
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradCharacterPartList, OwnerComponent), Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradCharacterPartList",
	Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::PropPointers),
	sizeof(FGradCharacterPartList),
	alignof(FGradCharacterPartList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPartList()
{
	if (!Z_Registration_Info_UScriptStruct_GradCharacterPartList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradCharacterPartList.InnerSingleton, Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradCharacterPartList.InnerSingleton;
}
// End ScriptStruct FGradCharacterPartList

// Begin Class UGradPawnComponent_AppliedCharacterParts Function GetCombinedTags
struct Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics
{
	struct GradPawnComponent_AppliedCharacterParts_eventGetCombinedTags_Parms
	{
		FGameplayTag RequiredPrefix;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredPrefix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::NewProp_RequiredPrefix = { "RequiredPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradPawnComponent_AppliedCharacterParts_eventGetCombinedTags_Parms, RequiredPrefix), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradPawnComponent_AppliedCharacterParts_eventGetCombinedTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::NewProp_RequiredPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts, nullptr, "GetCombinedTags", nullptr, nullptr, Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::GradPawnComponent_AppliedCharacterParts_eventGetCombinedTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::GradPawnComponent_AppliedCharacterParts_eventGetCombinedTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradPawnComponent_AppliedCharacterParts::execGetCombinedTags)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_RequiredPrefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetCombinedTags(Z_Param_RequiredPrefix);
	P_NATIVE_END;
}
// End Class UGradPawnComponent_AppliedCharacterParts Function GetCombinedTags

// Begin Class UGradPawnComponent_AppliedCharacterParts
void UGradPawnComponent_AppliedCharacterParts::StaticRegisterNativesUGradPawnComponent_AppliedCharacterParts()
{
	UClass* Class = UGradPawnComponent_AppliedCharacterParts::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCombinedTags", &UGradPawnComponent_AppliedCharacterParts::execGetCombinedTags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradPawnComponent_AppliedCharacterParts);
UClass* Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_NoRegister()
{
	return UGradPawnComponent_AppliedCharacterParts::StaticClass();
}
struct Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPartList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd Character Parts */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd Character Parts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyMeshes_MetaData[] = {
		{ "Category", "Cosmetics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xc3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_AppliedCharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xc3\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterPartList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyMeshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradPawnComponent_AppliedCharacterParts_GetCombinedTags, "GetCombinedTags" }, // 3296866955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradPawnComponent_AppliedCharacterParts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::NewProp_CharacterPartList = { "CharacterPartList", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnComponent_AppliedCharacterParts, CharacterPartList), Z_Construct_UScriptStruct_FGradCharacterPartList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPartList_MetaData), NewProp_CharacterPartList_MetaData) }; // 4137711129
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::NewProp_BodyMeshes = { "BodyMeshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnComponent_AppliedCharacterParts, BodyMeshes), Z_Construct_UScriptStruct_FGradAnimBodyStyleSelectionSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyMeshes_MetaData), NewProp_BodyMeshes_MetaData) }; // 2789229764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::NewProp_CharacterPartList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::NewProp_BodyMeshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::ClassParams = {
	&UGradPawnComponent_AppliedCharacterParts::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts()
{
	if (!Z_Registration_Info_UClass_UGradPawnComponent_AppliedCharacterParts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradPawnComponent_AppliedCharacterParts.OuterSingleton, Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradPawnComponent_AppliedCharacterParts.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradPawnComponent_AppliedCharacterParts>()
{
	return UGradPawnComponent_AppliedCharacterParts::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradPawnComponent_AppliedCharacterParts);
UGradPawnComponent_AppliedCharacterParts::~UGradPawnComponent_AppliedCharacterParts() {}
// End Class UGradPawnComponent_AppliedCharacterParts

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_AppliedCharacterParts_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradAppliedCharacterPartEntry::StaticStruct, Z_Construct_UScriptStruct_FGradAppliedCharacterPartEntry_Statics::NewStructOps, TEXT("GradAppliedCharacterPartEntry"), &Z_Registration_Info_UScriptStruct_GradAppliedCharacterPartEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradAppliedCharacterPartEntry), 972586082U) },
		{ FGradCharacterPartList::StaticStruct, Z_Construct_UScriptStruct_FGradCharacterPartList_Statics::NewStructOps, TEXT("GradCharacterPartList"), &Z_Registration_Info_UScriptStruct_GradCharacterPartList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradCharacterPartList), 4137711129U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradPawnComponent_AppliedCharacterParts, UGradPawnComponent_AppliedCharacterParts::StaticClass, TEXT("UGradPawnComponent_AppliedCharacterParts"), &Z_Registration_Info_UClass_UGradPawnComponent_AppliedCharacterParts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradPawnComponent_AppliedCharacterParts), 2124970820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_AppliedCharacterParts_h_2356227357(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_AppliedCharacterParts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_AppliedCharacterParts_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_AppliedCharacterParts_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_AppliedCharacterParts_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
