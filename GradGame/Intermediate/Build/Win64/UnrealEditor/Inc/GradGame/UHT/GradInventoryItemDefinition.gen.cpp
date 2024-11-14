// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Inventory/GradInventoryItemDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradInventoryItemDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemDefinition();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemDefinition_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemFragment();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemFragment_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradInventoryItemFragment
void UGradInventoryItemFragment::StaticRegisterNativesUGradInventoryItemFragment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradInventoryItemFragment);
UClass* Z_Construct_UClass_UGradInventoryItemFragment_NoRegister()
{
	return UGradInventoryItemFragment::StaticClass();
}
struct Z_Construct_UClass_UGradInventoryItemFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Inventory\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Fragment\xef\xbf\xbd\xef\xbf\xbd \xc8\xae \xef\xbf\xbd\xcd\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd:\n * - Grad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd:\n *   - UGradInventoryFragment_EquippableItem\xef\xbf\xbd\xef\xbf\xbd EquipmentItemDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n *   - UGradInventoryFramgent_SetStats\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\n *     - Rifle\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SetStats\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xbe\xef\xbf\xbd(Ammo)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\n *\x09 - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd...\n */" },
#endif
		{ "IncludePath", "Inventory/GradInventoryItemDefinition.h" },
		{ "ModuleRelativePath", "Inventory/GradInventoryItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Fragment\xef\xbf\xbd\xef\xbf\xbd \xc8\xae \xef\xbf\xbd\xcd\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd:\n- Grad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd:\n  - UGradInventoryFragment_EquippableItem\xef\xbf\xbd\xef\xbf\xbd EquipmentItemDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n  - UGradInventoryFramgent_SetStats\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\n    - Rifle\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd SetStats\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xbe\xef\xbf\xbd(Ammo)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\n     - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd..." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradInventoryItemFragment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradInventoryItemFragment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemFragment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradInventoryItemFragment_Statics::ClassParams = {
	&UGradInventoryItemFragment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x002010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemFragment_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradInventoryItemFragment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradInventoryItemFragment()
{
	if (!Z_Registration_Info_UClass_UGradInventoryItemFragment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradInventoryItemFragment.OuterSingleton, Z_Construct_UClass_UGradInventoryItemFragment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradInventoryItemFragment.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradInventoryItemFragment>()
{
	return UGradInventoryItemFragment::StaticClass();
}
UGradInventoryItemFragment::UGradInventoryItemFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradInventoryItemFragment);
UGradInventoryItemFragment::~UGradInventoryItemFragment() {}
// End Class UGradInventoryItemFragment

// Begin Class UGradInventoryItemDefinition
void UGradInventoryItemDefinition::StaticRegisterNativesUGradInventoryItemDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradInventoryItemDefinition);
UClass* Z_Construct_UClass_UGradInventoryItemDefinition_NoRegister()
{
	return UGradInventoryItemDefinition::StaticClass();
}
struct Z_Construct_UClass_UGradInventoryItemDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/GradInventoryItemDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/GradInventoryItemDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inventory Item \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8) \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd **/" },
#endif
		{ "ModuleRelativePath", "Inventory/GradInventoryItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory Item \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8) \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_Inner_MetaData[] = {
		{ "Category", "Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inventory Item\xef\xbf\xbd\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd Fragment\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/GradInventoryItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory Item\xef\xbf\xbd\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd Fragment\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[] = {
		{ "Category", "Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inventory Item\xef\xbf\xbd\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd Fragment\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/GradInventoryItemDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory Item\xef\xbf\xbd\xef\xbf\xbd Component\xef\xbf\xbd\xef\xbf\xbd Fragment\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradInventoryItemDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGradInventoryItemDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInventoryItemDefinition, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradInventoryItemDefinition_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_Inner_MetaData), NewProp_Fragments_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradInventoryItemDefinition_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x011400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInventoryItemDefinition, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_MetaData), NewProp_Fragments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradInventoryItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryItemDefinition_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryItemDefinition_Statics::NewProp_Fragments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryItemDefinition_Statics::NewProp_Fragments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradInventoryItemDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradInventoryItemDefinition_Statics::ClassParams = {
	&UGradInventoryItemDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradInventoryItemDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemDefinition_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradInventoryItemDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradInventoryItemDefinition()
{
	if (!Z_Registration_Info_UClass_UGradInventoryItemDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradInventoryItemDefinition.OuterSingleton, Z_Construct_UClass_UGradInventoryItemDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradInventoryItemDefinition.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradInventoryItemDefinition>()
{
	return UGradInventoryItemDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradInventoryItemDefinition);
UGradInventoryItemDefinition::~UGradInventoryItemDefinition() {}
// End Class UGradInventoryItemDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryItemDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradInventoryItemFragment, UGradInventoryItemFragment::StaticClass, TEXT("UGradInventoryItemFragment"), &Z_Registration_Info_UClass_UGradInventoryItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradInventoryItemFragment), 1663555548U) },
		{ Z_Construct_UClass_UGradInventoryItemDefinition, UGradInventoryItemDefinition::StaticClass, TEXT("UGradInventoryItemDefinition"), &Z_Registration_Info_UClass_UGradInventoryItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradInventoryItemDefinition), 4038332343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryItemDefinition_h_1212311437(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryItemDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryItemDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
