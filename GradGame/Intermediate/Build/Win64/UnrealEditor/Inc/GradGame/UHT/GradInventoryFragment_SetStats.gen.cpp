// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Inventory/GradInventoryFragment_SetStats.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradInventoryFragment_SetStats() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryFragment_SetStats();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryFragment_SetStats_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemFragment();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradInventoryFragment_SetStats
void UGradInventoryFragment_SetStats::StaticRegisterNativesUGradInventoryFragment_SetStats()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradInventoryFragment_SetStats);
UClass* Z_Construct_UClass_UGradInventoryFragment_SetStats_NoRegister()
{
	return UGradInventoryFragment_SetStats::StaticClass();
}
struct Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/GradInventoryFragment_SetStats.h" },
		{ "ModuleRelativePath", "Inventory/GradInventoryFragment_SetStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialItemStats_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** InitialItemStats gives constructor's parameters for GradGameplayTagStackContainer */" },
#endif
		{ "ModuleRelativePath", "Inventory/GradInventoryFragment_SetStats.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InitialItemStats gives constructor's parameters for GradGameplayTagStackContainer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialItemStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialItemStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InitialItemStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradInventoryFragment_SetStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_ValueProp = { "InitialItemStats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_Key_KeyProp = { "InitialItemStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::NewProp_InitialItemStats = { "InitialItemStats", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInventoryFragment_SetStats, InitialItemStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialItemStats_MetaData), NewProp_InitialItemStats_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::NewProp_InitialItemStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::NewProp_InitialItemStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::ClassParams = {
	&UGradInventoryFragment_SetStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradInventoryFragment_SetStats()
{
	if (!Z_Registration_Info_UClass_UGradInventoryFragment_SetStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradInventoryFragment_SetStats.OuterSingleton, Z_Construct_UClass_UGradInventoryFragment_SetStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradInventoryFragment_SetStats.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradInventoryFragment_SetStats>()
{
	return UGradInventoryFragment_SetStats::StaticClass();
}
UGradInventoryFragment_SetStats::UGradInventoryFragment_SetStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradInventoryFragment_SetStats);
UGradInventoryFragment_SetStats::~UGradInventoryFragment_SetStats() {}
// End Class UGradInventoryFragment_SetStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryFragment_SetStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradInventoryFragment_SetStats, UGradInventoryFragment_SetStats::StaticClass, TEXT("UGradInventoryFragment_SetStats"), &Z_Registration_Info_UClass_UGradInventoryFragment_SetStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradInventoryFragment_SetStats), 1216356175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryFragment_SetStats_h_15805364(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryFragment_SetStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryFragment_SetStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
