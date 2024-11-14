// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Inventory/GradInventoryManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradInventoryManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemDefinition_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryManagerComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryManagerComponent_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradInventoryEntry();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradInventoryList();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradInventoryEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradInventoryEntry;
class UScriptStruct* FGradInventoryEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradInventoryEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradInventoryEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradInventoryEntry, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradInventoryEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GradInventoryEntry.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradInventoryEntry>()
{
	return FGradInventoryEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradInventoryEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inventory Item \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc */" },
#endif
		{ "ModuleRelativePath", "Inventory/GradInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory Item \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/GradInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradInventoryEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradInventoryEntry, Instance), Z_Construct_UClass_UGradInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::NewProp_Instance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradInventoryEntry",
	Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::PropPointers),
	sizeof(FGradInventoryEntry),
	alignof(FGradInventoryEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradInventoryEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GradInventoryEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradInventoryEntry.InnerSingleton, Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradInventoryEntry.InnerSingleton;
}
// End ScriptStruct FGradInventoryEntry

// Begin ScriptStruct FGradInventoryList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradInventoryList;
class UScriptStruct* FGradInventoryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradInventoryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradInventoryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradInventoryList, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradInventoryList"));
	}
	return Z_Registration_Info_UScriptStruct_GradInventoryList.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradInventoryList>()
{
	return FGradInventoryList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradInventoryList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inventory Item \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc */" },
#endif
		{ "ModuleRelativePath", "Inventory/GradInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory Item \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/GradInventoryManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/GradInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradInventoryList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradInventoryList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradInventoryEntry, METADATA_PARAMS(0, nullptr) }; // 196436453
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGradInventoryList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradInventoryList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 196436453
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradInventoryList_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradInventoryList, OwnerComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradInventoryList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradInventoryList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradInventoryList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradInventoryList_Statics::NewProp_OwnerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradInventoryList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradInventoryList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradInventoryList",
	Z_Construct_UScriptStruct_FGradInventoryList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradInventoryList_Statics::PropPointers),
	sizeof(FGradInventoryList),
	alignof(FGradInventoryList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradInventoryList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradInventoryList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradInventoryList()
{
	if (!Z_Registration_Info_UScriptStruct_GradInventoryList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradInventoryList.InnerSingleton, Z_Construct_UScriptStruct_FGradInventoryList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradInventoryList.InnerSingleton;
}
// End ScriptStruct FGradInventoryList

// Begin Class UGradInventoryManagerComponent Function AddItemDefinition
struct Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics
{
	struct GradInventoryManagerComponent_eventAddItemDefinition_Parms
	{
		TSubclassOf<UGradInventoryItemDefinition> ItemDef;
		UGradInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** InventoryItemDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, InventoryList\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd, InventoryItemInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Inventory/GradInventoryManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InventoryItemDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, InventoryList\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd, InventoryItemInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryManagerComponent_eventAddItemDefinition_Parms, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradInventoryItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryManagerComponent_eventAddItemDefinition_Parms, ReturnValue), Z_Construct_UClass_UGradInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradInventoryManagerComponent, nullptr, "AddItemDefinition", nullptr, nullptr, Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::GradInventoryManagerComponent_eventAddItemDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::GradInventoryManagerComponent_eventAddItemDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradInventoryManagerComponent::execAddItemDefinition)
{
	P_GET_OBJECT(UClass,Z_Param_ItemDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGradInventoryItemInstance**)Z_Param__Result=P_THIS->AddItemDefinition(Z_Param_ItemDef);
	P_NATIVE_END;
}
// End Class UGradInventoryManagerComponent Function AddItemDefinition

// Begin Class UGradInventoryManagerComponent
void UGradInventoryManagerComponent::StaticRegisterNativesUGradInventoryManagerComponent()
{
	UClass* Class = UGradInventoryManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemDefinition", &UGradInventoryManagerComponent::execAddItemDefinition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradInventoryManagerComponent);
UClass* Z_Construct_UClass_UGradInventoryManagerComponent_NoRegister()
{
	return UGradInventoryManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UGradInventoryManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * PlayerController\xef\xbf\xbd\xef\xbf\xbd Component\xef\xbf\xbd\xce\xbc\xef\xbf\xbd Inventory\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UActorComponent \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd UControllerComponent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xde\xbe\xc6\xb5\xef\xbf\xbd \xef\xbf\xbd\xc9\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd... \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Grad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UActorComponent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xde\xb0\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "Inventory/GradInventoryManagerComponent.h" },
		{ "ModuleRelativePath", "Inventory/GradInventoryManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PlayerController\xef\xbf\xbd\xef\xbf\xbd Component\xef\xbf\xbd\xce\xbc\xef\xbf\xbd Inventory\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UActorComponent \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd UControllerComponent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xde\xbe\xc6\xb5\xef\xbf\xbd \xef\xbf\xbd\xc9\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd... \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Grad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UActorComponent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xde\xb0\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryList_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/GradInventoryManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradInventoryManagerComponent_AddItemDefinition, "AddItemDefinition" }, // 2767210735
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradInventoryManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradInventoryManagerComponent_Statics::NewProp_InventoryList = { "InventoryList", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInventoryManagerComponent, InventoryList), Z_Construct_UScriptStruct_FGradInventoryList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryList_MetaData), NewProp_InventoryList_MetaData) }; // 2120258921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradInventoryManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryManagerComponent_Statics::NewProp_InventoryList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradInventoryManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradInventoryManagerComponent_Statics::ClassParams = {
	&UGradInventoryManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradInventoryManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradInventoryManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradInventoryManagerComponent()
{
	if (!Z_Registration_Info_UClass_UGradInventoryManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradInventoryManagerComponent.OuterSingleton, Z_Construct_UClass_UGradInventoryManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradInventoryManagerComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradInventoryManagerComponent>()
{
	return UGradInventoryManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradInventoryManagerComponent);
UGradInventoryManagerComponent::~UGradInventoryManagerComponent() {}
// End Class UGradInventoryManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradInventoryEntry::StaticStruct, Z_Construct_UScriptStruct_FGradInventoryEntry_Statics::NewStructOps, TEXT("GradInventoryEntry"), &Z_Registration_Info_UScriptStruct_GradInventoryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradInventoryEntry), 196436453U) },
		{ FGradInventoryList::StaticStruct, Z_Construct_UScriptStruct_FGradInventoryList_Statics::NewStructOps, TEXT("GradInventoryList"), &Z_Registration_Info_UScriptStruct_GradInventoryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradInventoryList), 2120258921U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradInventoryManagerComponent, UGradInventoryManagerComponent::StaticClass, TEXT("UGradInventoryManagerComponent"), &Z_Registration_Info_UClass_UGradInventoryManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradInventoryManagerComponent), 689856690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_1081713986(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
