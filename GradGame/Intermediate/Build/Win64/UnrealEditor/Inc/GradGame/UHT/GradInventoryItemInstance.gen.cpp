// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Inventory/GradInventoryItemInstance.h"
#include "GradGame/System/GradGameplayTagStack.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradInventoryItemInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemDefinition_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemFragment_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemInstance();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemInstance_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradGameplayTagStackContainer();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradInventoryItemInstance Function AddStatTagStack
struct Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics
{
	struct GradInventoryItemInstance_eventAddStatTagStack_Parms
	{
		FGameplayTag Tag;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** add/remove stack count to stat tag(=gameplay-tag stack) */" },
#endif
		{ "ModuleRelativePath", "Inventory/GradInventoryItemInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "add/remove stack count to stat tag(=gameplay-tag stack)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryItemInstance_eventAddStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryItemInstance_eventAddStatTagStack_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradInventoryItemInstance, nullptr, "AddStatTagStack", nullptr, nullptr, Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::GradInventoryItemInstance_eventAddStatTagStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::GradInventoryItemInstance_eventAddStatTagStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradInventoryItemInstance::execAddStatTagStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStatTagStack(Z_Param_Tag,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class UGradInventoryItemInstance Function AddStatTagStack

// Begin Class UGradInventoryItemInstance Function FindFragmentByClass
struct Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics
{
	struct GradInventoryItemInstance_eventFindFragmentByClass_Parms
	{
		TSubclassOf<UGradInventoryItemFragment> FragmentClass;
		const UGradInventoryItemFragment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Inventory/GradInventoryItemInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryItemInstance_eventFindFragmentByClass_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryItemInstance_eventFindFragmentByClass_Parms, ReturnValue), Z_Construct_UClass_UGradInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradInventoryItemInstance, nullptr, "FindFragmentByClass", nullptr, nullptr, Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::GradInventoryItemInstance_eventFindFragmentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::GradInventoryItemInstance_eventFindFragmentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradInventoryItemInstance::execFindFragmentByClass)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UGradInventoryItemFragment**)Z_Param__Result=P_THIS->FindFragmentByClass(Z_Param_FragmentClass);
	P_NATIVE_END;
}
// End Class UGradInventoryItemInstance Function FindFragmentByClass

// Begin Class UGradInventoryItemInstance Function GetStatTagStackCount
struct Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics
{
	struct GradInventoryItemInstance_eventGetStatTagStackCount_Parms
	{
		FGameplayTag Tag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** get the current count of gameplay-tag stack */" },
#endif
		{ "ModuleRelativePath", "Inventory/GradInventoryItemInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "get the current count of gameplay-tag stack" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryItemInstance_eventGetStatTagStackCount_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryItemInstance_eventGetStatTagStackCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradInventoryItemInstance, nullptr, "GetStatTagStackCount", nullptr, nullptr, Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::GradInventoryItemInstance_eventGetStatTagStackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::GradInventoryItemInstance_eventGetStatTagStackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradInventoryItemInstance::execGetStatTagStackCount)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStatTagStackCount(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UGradInventoryItemInstance Function GetStatTagStackCount

// Begin Class UGradInventoryItemInstance Function RemoveStatTagStack
struct Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics
{
	struct GradInventoryItemInstance_eventRemoveStatTagStack_Parms
	{
		FGameplayTag Tag;
		int32 StackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Inventory/GradInventoryItemInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryItemInstance_eventRemoveStatTagStack_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradInventoryItemInstance_eventRemoveStatTagStack_Parms, StackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradInventoryItemInstance, nullptr, "RemoveStatTagStack", nullptr, nullptr, Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::GradInventoryItemInstance_eventRemoveStatTagStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::GradInventoryItemInstance_eventRemoveStatTagStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradInventoryItemInstance::execRemoveStatTagStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_GET_PROPERTY(FIntProperty,Z_Param_StackCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStatTagStack(Z_Param_Tag,Z_Param_StackCount);
	P_NATIVE_END;
}
// End Class UGradInventoryItemInstance Function RemoveStatTagStack

// Begin Class UGradInventoryItemInstance
void UGradInventoryItemInstance::StaticRegisterNativesUGradInventoryItemInstance()
{
	UClass* Class = UGradInventoryItemInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddStatTagStack", &UGradInventoryItemInstance::execAddStatTagStack },
		{ "FindFragmentByClass", &UGradInventoryItemInstance::execFindFragmentByClass },
		{ "GetStatTagStackCount", &UGradInventoryItemInstance::execGetStatTagStackCount },
		{ "RemoveStatTagStack", &UGradInventoryItemInstance::execRemoveStatTagStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradInventoryItemInstance);
UClass* Z_Construct_UClass_UGradInventoryItemInstance_NoRegister()
{
	return UGradInventoryItemInstance::StaticClass();
}
struct Z_Construct_UClass_UGradInventoryItemInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Inventory/GradInventoryItemInstance.h" },
		{ "ModuleRelativePath", "Inventory/GradInventoryItemInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** gameplay-tag stacks for inventory item instance */" },
#endif
		{ "ModuleRelativePath", "Inventory/GradInventoryItemInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "gameplay-tag stacks for inventory item instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDef_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inventory Item\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GradInventoryItemDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Inventory/GradInventoryItemInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory Item\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GradInventoryItemDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradInventoryItemInstance_AddStatTagStack, "AddStatTagStack" }, // 3445620428
		{ &Z_Construct_UFunction_UGradInventoryItemInstance_FindFragmentByClass, "FindFragmentByClass" }, // 3219523130
		{ &Z_Construct_UFunction_UGradInventoryItemInstance_GetStatTagStackCount, "GetStatTagStackCount" }, // 2515403408
		{ &Z_Construct_UFunction_UGradInventoryItemInstance_RemoveStatTagStack, "RemoveStatTagStack" }, // 2422875787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradInventoryItemInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradInventoryItemInstance_Statics::NewProp_StatTags = { "StatTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInventoryItemInstance, StatTags), Z_Construct_UScriptStruct_FGradGameplayTagStackContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTags_MetaData), NewProp_StatTags_MetaData) }; // 3682936267
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGradInventoryItemInstance_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInventoryItemInstance, ItemDef), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradInventoryItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDef_MetaData), NewProp_ItemDef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradInventoryItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryItemInstance_Statics::NewProp_StatTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInventoryItemInstance_Statics::NewProp_ItemDef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradInventoryItemInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradInventoryItemInstance_Statics::ClassParams = {
	&UGradInventoryItemInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradInventoryItemInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemInstance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInventoryItemInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradInventoryItemInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradInventoryItemInstance()
{
	if (!Z_Registration_Info_UClass_UGradInventoryItemInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradInventoryItemInstance.OuterSingleton, Z_Construct_UClass_UGradInventoryItemInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradInventoryItemInstance.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradInventoryItemInstance>()
{
	return UGradInventoryItemInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradInventoryItemInstance);
UGradInventoryItemInstance::~UGradInventoryItemInstance() {}
// End Class UGradInventoryItemInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradInventoryItemInstance, UGradInventoryItemInstance::StaticClass, TEXT("UGradInventoryItemInstance"), &Z_Registration_Info_UClass_UGradInventoryItemInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradInventoryItemInstance), 4104280688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_3475751540(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
