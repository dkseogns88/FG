// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Equipment/GradQuickBarComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradQuickBarComponent() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradQuickBarComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradQuickBarComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradQuickBarComponent Function AddItemToSlot
struct Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics
{
	struct GradQuickBarComponent_eventAddItemToSlot_Parms
	{
		int32 SlotIndex;
		UGradInventoryItemInstance* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/GradQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradQuickBarComponent_eventAddItemToSlot_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradQuickBarComponent_eventAddItemToSlot_Parms, Item), Z_Construct_UClass_UGradInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradQuickBarComponent, nullptr, "AddItemToSlot", nullptr, nullptr, Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::GradQuickBarComponent_eventAddItemToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::GradQuickBarComponent_eventAddItemToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradQuickBarComponent::execAddItemToSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_OBJECT(UGradInventoryItemInstance,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToSlot(Z_Param_SlotIndex,Z_Param_Item);
	P_NATIVE_END;
}
// End Class UGradQuickBarComponent Function AddItemToSlot

// Begin Class UGradQuickBarComponent Function SetActiveSlotIndex
struct Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics
{
	struct GradQuickBarComponent_eventSetActiveSlotIndex_Parms
	{
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad" },
		{ "ModuleRelativePath", "Equipment/GradQuickBarComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradQuickBarComponent_eventSetActiveSlotIndex_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradQuickBarComponent, nullptr, "SetActiveSlotIndex", nullptr, nullptr, Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::GradQuickBarComponent_eventSetActiveSlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::GradQuickBarComponent_eventSetActiveSlotIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradQuickBarComponent::execSetActiveSlotIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveSlotIndex(Z_Param_NewIndex);
	P_NATIVE_END;
}
// End Class UGradQuickBarComponent Function SetActiveSlotIndex

// Begin Class UGradQuickBarComponent
void UGradQuickBarComponent::StaticRegisterNativesUGradQuickBarComponent()
{
	UClass* Class = UGradQuickBarComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToSlot", &UGradQuickBarComponent::execAddItemToSlot },
		{ "SetActiveSlotIndex", &UGradQuickBarComponent::execSetActiveSlotIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradQuickBarComponent);
UClass* Z_Construct_UClass_UGradQuickBarComponent_NoRegister()
{
	return UGradQuickBarComponent::StaticClass();
}
struct Z_Construct_UClass_UGradQuickBarComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * HUD\xef\xbf\xbd\xef\xbf\xbd QuckBar\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd:\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd MMORPG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ShortCut HUD\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\n *\n * \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd ControllerComponent\xef\xbf\xbd\xce\xbc\xef\xbf\xbd, PlayerController\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\n * - HUD(Slate)\xef\xbf\xbd\xef\xbf\xbd Inventory/Equipment(Gameplay)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd(Bridge) \xef\xbf\xbd\xef\xbf\xbd\xc8\xb0\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * - \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd Grad\xef\xbf\xbd\xef\xbf\xbd HUD \xef\xbf\xbd\xef\xbf\xbd Slate Widget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb7\xef\xbf\xbd\xe9\xbc\xad \xef\xbf\xbd\xd9\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Equipment/GradQuickBarComponent.h" },
		{ "ModuleRelativePath", "Equipment/GradQuickBarComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD\xef\xbf\xbd\xef\xbf\xbd QuckBar\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd:\n- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd MMORPG\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ShortCut HUD\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\n\n\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd ControllerComponent\xef\xbf\xbd\xce\xbc\xef\xbf\xbd, PlayerController\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\n- HUD(Slate)\xef\xbf\xbd\xef\xbf\xbd Inventory/Equipment(Gameplay)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd(Bridge) \xef\xbf\xbd\xef\xbf\xbd\xc8\xb0\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n- \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd Grad\xef\xbf\xbd\xef\xbf\xbd HUD \xef\xbf\xbd\xef\xbf\xbd Slate Widget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb7\xef\xbf\xbd\xe9\xbc\xad \xef\xbf\xbd\xd9\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** HUD QuickBar Slot \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradQuickBarComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD QuickBar Slot \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** HUD QuickBar Slot \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradQuickBarComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD QuickBar Slot \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSlotIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd Slot Index (\xef\xbf\xbd\xc6\xb8\xef\xbf\xbd Grad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Slot\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xc7\xb4\xc2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd?) */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradQuickBarComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd Slot Index (\xef\xbf\xbd\xc6\xb8\xef\xbf\xbd Grad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Slot\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xc7\xb4\xc2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd?)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItem_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradQuickBarComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveSlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradQuickBarComponent_AddItemToSlot, "AddItemToSlot" }, // 2170008148
		{ &Z_Construct_UFunction_UGradQuickBarComponent_SetActiveSlotIndex, "SetActiveSlotIndex" }, // 3606962417
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradQuickBarComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradQuickBarComponent, NumSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSlots_MetaData), NewProp_NumSlots_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradQuickBarComponent, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slots_MetaData), NewProp_Slots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_ActiveSlotIndex = { "ActiveSlotIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradQuickBarComponent, ActiveSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSlotIndex_MetaData), NewProp_ActiveSlotIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_EquippedItem = { "EquippedItem", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradQuickBarComponent, EquippedItem), Z_Construct_UClass_UGradEquipmentInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedItem_MetaData), NewProp_EquippedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradQuickBarComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_NumSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_Slots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_Slots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_ActiveSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradQuickBarComponent_Statics::NewProp_EquippedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradQuickBarComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradQuickBarComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradQuickBarComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradQuickBarComponent_Statics::ClassParams = {
	&UGradQuickBarComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradQuickBarComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradQuickBarComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradQuickBarComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradQuickBarComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradQuickBarComponent()
{
	if (!Z_Registration_Info_UClass_UGradQuickBarComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradQuickBarComponent.OuterSingleton, Z_Construct_UClass_UGradQuickBarComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradQuickBarComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradQuickBarComponent>()
{
	return UGradQuickBarComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradQuickBarComponent);
UGradQuickBarComponent::~UGradQuickBarComponent() {}
// End Class UGradQuickBarComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradQuickBarComponent, UGradQuickBarComponent::StaticClass, TEXT("UGradQuickBarComponent"), &Z_Registration_Info_UClass_UGradQuickBarComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradQuickBarComponent), 875748379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_711248557(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
