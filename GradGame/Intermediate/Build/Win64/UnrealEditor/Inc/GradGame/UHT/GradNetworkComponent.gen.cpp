// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Network/GradNetworkComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradNetworkComponent() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradNetworkComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradNetworkComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradNetworkComponent Function AddItemToSlot
struct Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics
{
	struct GradNetworkComponent_eventAddItemToSlot_Parms
	{
		int32 SlotIndex;
		UGradInventoryItemInstance* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Network/GradNetworkComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradNetworkComponent_eventAddItemToSlot_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradNetworkComponent_eventAddItemToSlot_Parms, Item), Z_Construct_UClass_UGradInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradNetworkComponent, nullptr, "AddItemToSlot", nullptr, nullptr, Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::GradNetworkComponent_eventAddItemToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::GradNetworkComponent_eventAddItemToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradNetworkComponent::execAddItemToSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_OBJECT(UGradInventoryItemInstance,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToSlot(Z_Param_SlotIndex,Z_Param_Item);
	P_NATIVE_END;
}
// End Class UGradNetworkComponent Function AddItemToSlot

// Begin Class UGradNetworkComponent Function SetActiveSlotIndex
struct Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics
{
	struct GradNetworkComponent_eventSetActiveSlotIndex_Parms
	{
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GradNet" },
		{ "ModuleRelativePath", "Network/GradNetworkComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradNetworkComponent_eventSetActiveSlotIndex_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradNetworkComponent, nullptr, "SetActiveSlotIndex", nullptr, nullptr, Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::GradNetworkComponent_eventSetActiveSlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::GradNetworkComponent_eventSetActiveSlotIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradNetworkComponent::execSetActiveSlotIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveSlotIndex(Z_Param_NewIndex);
	P_NATIVE_END;
}
// End Class UGradNetworkComponent Function SetActiveSlotIndex

// Begin Class UGradNetworkComponent
void UGradNetworkComponent::StaticRegisterNativesUGradNetworkComponent()
{
	UClass* Class = UGradNetworkComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToSlot", &UGradNetworkComponent::execAddItemToSlot },
		{ "SetActiveSlotIndex", &UGradNetworkComponent::execSetActiveSlotIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradNetworkComponent);
UClass* Z_Construct_UClass_UGradNetworkComponent_NoRegister()
{
	return UGradNetworkComponent::StaticClass();
}
struct Z_Construct_UClass_UGradNetworkComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Network/GradNetworkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Network/GradNetworkComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[] = {
		{ "ModuleRelativePath", "Network/GradNetworkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[] = {
		{ "ModuleRelativePath", "Network/GradNetworkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Network/GradNetworkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItem_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Network/GradNetworkComponent.h" },
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
		{ &Z_Construct_UFunction_UGradNetworkComponent_AddItemToSlot, "AddItemToSlot" }, // 3731705535
		{ &Z_Construct_UFunction_UGradNetworkComponent_SetActiveSlotIndex, "SetActiveSlotIndex" }, // 3051852141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradNetworkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradNetworkComponent, NumSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSlots_MetaData), NewProp_NumSlots_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradNetworkComponent, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slots_MetaData), NewProp_Slots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_ActiveSlotIndex = { "ActiveSlotIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradNetworkComponent, ActiveSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSlotIndex_MetaData), NewProp_ActiveSlotIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_EquippedItem = { "EquippedItem", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradNetworkComponent, EquippedItem), Z_Construct_UClass_UGradEquipmentInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedItem_MetaData), NewProp_EquippedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradNetworkComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_NumSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_Slots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_Slots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_ActiveSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradNetworkComponent_Statics::NewProp_EquippedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradNetworkComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradNetworkComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradNetworkComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradNetworkComponent_Statics::ClassParams = {
	&UGradNetworkComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradNetworkComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradNetworkComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradNetworkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradNetworkComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradNetworkComponent()
{
	if (!Z_Registration_Info_UClass_UGradNetworkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradNetworkComponent.OuterSingleton, Z_Construct_UClass_UGradNetworkComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradNetworkComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradNetworkComponent>()
{
	return UGradNetworkComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradNetworkComponent);
// End Class UGradNetworkComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradNetworkComponent, UGradNetworkComponent::StaticClass, TEXT("UGradNetworkComponent"), &Z_Registration_Info_UClass_UGradNetworkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradNetworkComponent), 3978347194U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_1092267097(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
