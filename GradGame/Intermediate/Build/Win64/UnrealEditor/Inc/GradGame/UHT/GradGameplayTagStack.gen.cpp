// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/System/GradGameplayTagStack.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameplayTagStack() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradGameplayTagStack();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradGameplayTagStackContainer();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradGameplayTagStack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradGameplayTagStack;
class UScriptStruct* FGradGameplayTagStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradGameplayTagStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradGameplayTagStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradGameplayTagStack, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradGameplayTagStack"));
	}
	return Z_Registration_Info_UScriptStruct_GradGameplayTagStack.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradGameplayTagStack>()
{
	return FGradGameplayTagStack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents one stack of a gameplay tag (tag + count)\n * : for example, Ammo is representative example for GameplayTagStack\n */" },
#endif
		{ "ModuleRelativePath", "System/GradGameplayTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents one stack of a gameplay tag (tag + count)\n: for example, Ammo is representative example for GameplayTagStack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "System/GradGameplayTagStack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "ModuleRelativePath", "System/GradGameplayTagStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradGameplayTagStack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradGameplayTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradGameplayTagStack, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradGameplayTagStack",
	Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::PropPointers),
	sizeof(FGradGameplayTagStack),
	alignof(FGradGameplayTagStack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradGameplayTagStack()
{
	if (!Z_Registration_Info_UScriptStruct_GradGameplayTagStack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradGameplayTagStack.InnerSingleton, Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradGameplayTagStack.InnerSingleton;
}
// End ScriptStruct FGradGameplayTagStack

// Begin ScriptStruct FGradGameplayTagStackContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradGameplayTagStackContainer;
class UScriptStruct* FGradGameplayTagStackContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradGameplayTagStackContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradGameplayTagStackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradGameplayTagStackContainer, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradGameplayTagStackContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GradGameplayTagStackContainer.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradGameplayTagStackContainer>()
{
	return FGradGameplayTagStackContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** container of GradGameplayTagStack */" },
#endif
		{ "ModuleRelativePath", "System/GradGameplayTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "container of GradGameplayTagStack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stacks_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** a list of gameplay tag stacks */" },
#endif
		{ "ModuleRelativePath", "System/GradGameplayTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "a list of gameplay tag stacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stacks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradGameplayTagStackContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::NewProp_Stacks_Inner = { "Stacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradGameplayTagStack, METADATA_PARAMS(0, nullptr) }; // 3672600600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::NewProp_Stacks = { "Stacks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradGameplayTagStackContainer, Stacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stacks_MetaData), NewProp_Stacks_MetaData) }; // 3672600600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::NewProp_Stacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::NewProp_Stacks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradGameplayTagStackContainer",
	Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::PropPointers),
	sizeof(FGradGameplayTagStackContainer),
	alignof(FGradGameplayTagStackContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradGameplayTagStackContainer()
{
	if (!Z_Registration_Info_UScriptStruct_GradGameplayTagStackContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradGameplayTagStackContainer.InnerSingleton, Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradGameplayTagStackContainer.InnerSingleton;
}
// End ScriptStruct FGradGameplayTagStackContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradGameplayTagStack_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradGameplayTagStack::StaticStruct, Z_Construct_UScriptStruct_FGradGameplayTagStack_Statics::NewStructOps, TEXT("GradGameplayTagStack"), &Z_Registration_Info_UScriptStruct_GradGameplayTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradGameplayTagStack), 3672600600U) },
		{ FGradGameplayTagStackContainer::StaticStruct, Z_Construct_UScriptStruct_FGradGameplayTagStackContainer_Statics::NewStructOps, TEXT("GradGameplayTagStackContainer"), &Z_Registration_Info_UScriptStruct_GradGameplayTagStackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradGameplayTagStackContainer), 3682936267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradGameplayTagStack_h_1358125473(TEXT("/Script/GradGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradGameplayTagStack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradGameplayTagStack_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
