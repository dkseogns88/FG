// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Inventory/GradInventoryFragment_EquippableItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradInventoryFragment_EquippableItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentDefinition_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryFragment_EquippableItem();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryFragment_EquippableItem_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemFragment();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradInventoryFragment_EquippableItem
void UGradInventoryFragment_EquippableItem::StaticRegisterNativesUGradInventoryFragment_EquippableItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradInventoryFragment_EquippableItem);
UClass* Z_Construct_UClass_UGradInventoryFragment_EquippableItem_NoRegister()
{
	return UGradInventoryFragment_EquippableItem::StaticClass();
}
struct Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/GradInventoryFragment_EquippableItem.h" },
		{ "ModuleRelativePath", "Inventory/GradInventoryFragment_EquippableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentDefinition_MetaData[] = {
		{ "Category", "Grad" },
		{ "ModuleRelativePath", "Inventory/GradInventoryFragment_EquippableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradInventoryFragment_EquippableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::NewProp_EquipmentDefinition = { "EquipmentDefinition", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInventoryFragment_EquippableItem, EquipmentDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradEquipmentDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentDefinition_MetaData), NewProp_EquipmentDefinition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::NewProp_EquipmentDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::ClassParams = {
	&UGradInventoryFragment_EquippableItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradInventoryFragment_EquippableItem()
{
	if (!Z_Registration_Info_UClass_UGradInventoryFragment_EquippableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradInventoryFragment_EquippableItem.OuterSingleton, Z_Construct_UClass_UGradInventoryFragment_EquippableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradInventoryFragment_EquippableItem.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradInventoryFragment_EquippableItem>()
{
	return UGradInventoryFragment_EquippableItem::StaticClass();
}
UGradInventoryFragment_EquippableItem::UGradInventoryFragment_EquippableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradInventoryFragment_EquippableItem);
UGradInventoryFragment_EquippableItem::~UGradInventoryFragment_EquippableItem() {}
// End Class UGradInventoryFragment_EquippableItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryFragment_EquippableItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradInventoryFragment_EquippableItem, UGradInventoryFragment_EquippableItem::StaticClass, TEXT("UGradInventoryFragment_EquippableItem"), &Z_Registration_Info_UClass_UGradInventoryFragment_EquippableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradInventoryFragment_EquippableItem), 3860607551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryFragment_EquippableItem_h_186849063(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryFragment_EquippableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryFragment_EquippableItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
