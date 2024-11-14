// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Equipment/GradEquipmentManagerComponent.h"
#include "GradGame/AbilitySystem/GradAbilitySet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradEquipmentManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentDefinition_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentManagerComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentManagerComponent_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradEquipmentList();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradAppliedEquipmentEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradAppliedEquipmentEntry;
class UScriptStruct* FGradAppliedEquipmentEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradAppliedEquipmentEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradAppliedEquipmentEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradAppliedEquipmentEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GradAppliedEquipmentEntry.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradAppliedEquipmentEntry>()
{
	return FGradAppliedEquipmentEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentDefinition_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** EquipmentDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EquipmentDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe2\xbf\xa1 \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xeb\xb0\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameplayAbility */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe2\xbf\xa1 \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xeb\xb0\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GameplayAbility" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradAppliedEquipmentEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAppliedEquipmentEntry, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradEquipmentDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentDefinition_MetaData), NewProp_EquipmentDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAppliedEquipmentEntry, Instance), Z_Construct_UClass_UGradEquipmentInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::NewProp_GrantedHandles = { "GrantedHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradAppliedEquipmentEntry, GrantedHandles), Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedHandles_MetaData), NewProp_GrantedHandles_MetaData) }; // 2762917416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::NewProp_EquipmentDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::NewProp_GrantedHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradAppliedEquipmentEntry",
	Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::PropPointers),
	sizeof(FGradAppliedEquipmentEntry),
	alignof(FGradAppliedEquipmentEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GradAppliedEquipmentEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradAppliedEquipmentEntry.InnerSingleton, Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradAppliedEquipmentEntry.InnerSingleton;
}
// End ScriptStruct FGradAppliedEquipmentEntry

// Begin ScriptStruct FGradEquipmentList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradEquipmentList;
class UScriptStruct* FGradEquipmentList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradEquipmentList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradEquipmentList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradEquipmentList, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradEquipmentList"));
	}
	return Z_Registration_Info_UScriptStruct_GradEquipmentList.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradEquipmentList>()
{
	return FGradEquipmentList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradEquipmentList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd EquipmentInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Entry\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd:\n * - GradEquipmentList\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xd9\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\n */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd EquipmentInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Entry\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd:\n- GradEquipmentList\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xd9\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradEquipmentList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradEquipmentList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry, METADATA_PARAMS(0, nullptr) }; // 2785047409
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGradEquipmentList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradEquipmentList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 2785047409
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradEquipmentList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradEquipmentList, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradEquipmentList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradEquipmentList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradEquipmentList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradEquipmentList_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradEquipmentList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradEquipmentList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradEquipmentList",
	Z_Construct_UScriptStruct_FGradEquipmentList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradEquipmentList_Statics::PropPointers),
	sizeof(FGradEquipmentList),
	alignof(FGradEquipmentList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradEquipmentList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradEquipmentList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradEquipmentList()
{
	if (!Z_Registration_Info_UScriptStruct_GradEquipmentList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradEquipmentList.InnerSingleton, Z_Construct_UScriptStruct_FGradEquipmentList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradEquipmentList.InnerSingleton;
}
// End ScriptStruct FGradEquipmentList

// Begin Class UGradEquipmentManagerComponent Function GetEquipmentInstancesOfType
struct Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics
{
	struct GradEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms
	{
		TSubclassOf<UGradEquipmentInstance> InstanceType;
		TArray<UGradEquipmentInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradEquipmentManagerComponent, nullptr, "GetEquipmentInstancesOfType", nullptr, nullptr, Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::GradEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::GradEquipmentManagerComponent_eventGetEquipmentInstancesOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradEquipmentManagerComponent::execGetEquipmentInstancesOfType)
{
	P_GET_OBJECT(UClass,Z_Param_InstanceType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UGradEquipmentInstance*>*)Z_Param__Result=P_THIS->GetEquipmentInstancesOfType(Z_Param_InstanceType);
	P_NATIVE_END;
}
// End Class UGradEquipmentManagerComponent Function GetEquipmentInstancesOfType

// Begin Class UGradEquipmentManagerComponent
void UGradEquipmentManagerComponent::StaticRegisterNativesUGradEquipmentManagerComponent()
{
	UClass* Class = UGradEquipmentManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquipmentInstancesOfType", &UGradEquipmentManagerComponent::execGetEquipmentInstancesOfType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradEquipmentManagerComponent);
UClass* Z_Construct_UClass_UGradEquipmentManagerComponent_NoRegister()
{
	return UGradEquipmentManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UGradEquipmentManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Pawn\xef\xbf\xbd\xef\xbf\xbd Component\xef\xbf\xbd\xce\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Equipment/GradEquipmentManagerComponent.h" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn\xef\xbf\xbd\xef\xbf\xbd Component\xef\xbf\xbd\xce\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentList_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/GradEquipmentManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradEquipmentManagerComponent_GetEquipmentInstancesOfType, "GetEquipmentInstancesOfType" }, // 3033154986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradEquipmentManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::NewProp_EquipmentList = { "EquipmentList", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradEquipmentManagerComponent, EquipmentList), Z_Construct_UScriptStruct_FGradEquipmentList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentList_MetaData), NewProp_EquipmentList_MetaData) }; // 3074088480
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::NewProp_EquipmentList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::ClassParams = {
	&UGradEquipmentManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradEquipmentManagerComponent()
{
	if (!Z_Registration_Info_UClass_UGradEquipmentManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradEquipmentManagerComponent.OuterSingleton, Z_Construct_UClass_UGradEquipmentManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradEquipmentManagerComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradEquipmentManagerComponent>()
{
	return UGradEquipmentManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradEquipmentManagerComponent);
UGradEquipmentManagerComponent::~UGradEquipmentManagerComponent() {}
// End Class UGradEquipmentManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradAppliedEquipmentEntry::StaticStruct, Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics::NewStructOps, TEXT("GradAppliedEquipmentEntry"), &Z_Registration_Info_UScriptStruct_GradAppliedEquipmentEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradAppliedEquipmentEntry), 2785047409U) },
		{ FGradEquipmentList::StaticStruct, Z_Construct_UScriptStruct_FGradEquipmentList_Statics::NewStructOps, TEXT("GradEquipmentList"), &Z_Registration_Info_UScriptStruct_GradEquipmentList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradEquipmentList), 3074088480U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradEquipmentManagerComponent, UGradEquipmentManagerComponent::StaticClass, TEXT("UGradEquipmentManagerComponent"), &Z_Registration_Info_UClass_UGradEquipmentManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradEquipmentManagerComponent), 3922923248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_2430569869(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
