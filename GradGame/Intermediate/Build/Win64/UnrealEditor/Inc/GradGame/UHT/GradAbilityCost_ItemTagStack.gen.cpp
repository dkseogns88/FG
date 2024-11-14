// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/Abilities/GradAbilityCost_ItemTagStack.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradAbilityCost_ItemTagStack() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilityCost();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilityCost_ItemTagStack();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilityCost_ItemTagStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradAbilityCost_ItemTagStack
void UGradAbilityCost_ItemTagStack::StaticRegisterNativesUGradAbilityCost_ItemTagStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradAbilityCost_ItemTagStack);
UClass* Z_Construct_UClass_UGradAbilityCost_ItemTagStack_NoRegister()
{
	return UGradAbilityCost_ItemTagStack::StaticClass();
}
struct Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "Item Tag Stack" },
		{ "IncludePath", "AbilitySystem/Abilities/GradAbilityCost_ItemTagStack.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradAbilityCost_ItemTagStack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * how much of the tag spend:\n\x09 * - FScalableFloat is scaled by Curve with base float value\n\x09 * - Curve is normally indexed by ability level\n\x09 */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradAbilityCost_ItemTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how much of the tag spend:\n- FScalableFloat is scaled by Curve with base float value\n- Curve is normally indexed by ability level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** gameplay tag combined with the cost */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradAbilityCost_ItemTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "gameplay tag combined with the cost" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTag_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** failure identifier with gameplay-tag */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradAbilityCost_ItemTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "failure identifier with gameplay-tag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradAbilityCost_ItemTagStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradAbilityCost_ItemTagStack, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) }; // 703790095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradAbilityCost_ItemTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::NewProp_FailureTag = { "FailureTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradAbilityCost_ItemTagStack, FailureTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTag_MetaData), NewProp_FailureTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::NewProp_FailureTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradAbilityCost,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::ClassParams = {
	&UGradAbilityCost_ItemTagStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradAbilityCost_ItemTagStack()
{
	if (!Z_Registration_Info_UClass_UGradAbilityCost_ItemTagStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradAbilityCost_ItemTagStack.OuterSingleton, Z_Construct_UClass_UGradAbilityCost_ItemTagStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradAbilityCost_ItemTagStack.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradAbilityCost_ItemTagStack>()
{
	return UGradAbilityCost_ItemTagStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradAbilityCost_ItemTagStack);
UGradAbilityCost_ItemTagStack::~UGradAbilityCost_ItemTagStack() {}
// End Class UGradAbilityCost_ItemTagStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Abilities_GradAbilityCost_ItemTagStack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradAbilityCost_ItemTagStack, UGradAbilityCost_ItemTagStack::StaticClass, TEXT("UGradAbilityCost_ItemTagStack"), &Z_Registration_Info_UClass_UGradAbilityCost_ItemTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradAbilityCost_ItemTagStack), 341996606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Abilities_GradAbilityCost_ItemTagStack_h_1458753977(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Abilities_GradAbilityCost_ItemTagStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Abilities_GradAbilityCost_ItemTagStack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
