// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Equipment/GradGameplayAbility_FromEquipment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameplayAbility_FromEquipment() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility_FromEquipment();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility_FromEquipment_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradGameplayAbility_FromEquipment Function GetAssociatedEquipment
struct Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics
{
	struct GradGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms
	{
		UGradEquipmentInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Ability" },
		{ "ModuleRelativePath", "Equipment/GradGameplayAbility_FromEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms, ReturnValue), Z_Construct_UClass_UGradEquipmentInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility_FromEquipment, nullptr, "GetAssociatedEquipment", nullptr, nullptr, Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::GradGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::GradGameplayAbility_FromEquipment_eventGetAssociatedEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility_FromEquipment::execGetAssociatedEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGradEquipmentInstance**)Z_Param__Result=P_THIS->GetAssociatedEquipment();
	P_NATIVE_END;
}
// End Class UGradGameplayAbility_FromEquipment Function GetAssociatedEquipment

// Begin Class UGradGameplayAbility_FromEquipment Function GetAssociatedItem
struct Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics
{
	struct GradGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms
	{
		UGradInventoryItemInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Ability" },
		{ "ModuleRelativePath", "Equipment/GradGameplayAbility_FromEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms, ReturnValue), Z_Construct_UClass_UGradInventoryItemInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility_FromEquipment, nullptr, "GetAssociatedItem", nullptr, nullptr, Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::GradGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::GradGameplayAbility_FromEquipment_eventGetAssociatedItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility_FromEquipment::execGetAssociatedItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGradInventoryItemInstance**)Z_Param__Result=P_THIS->GetAssociatedItem();
	P_NATIVE_END;
}
// End Class UGradGameplayAbility_FromEquipment Function GetAssociatedItem

// Begin Class UGradGameplayAbility_FromEquipment Function TestReload
struct Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_TestReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xc5\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd!\x09\n" },
#endif
		{ "ModuleRelativePath", "Equipment/GradGameplayAbility_FromEquipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xc5\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_TestReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility_FromEquipment, nullptr, "TestReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_TestReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_TestReload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_TestReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_TestReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility_FromEquipment::execTestReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestReload();
	P_NATIVE_END;
}
// End Class UGradGameplayAbility_FromEquipment Function TestReload

// Begin Class UGradGameplayAbility_FromEquipment
void UGradGameplayAbility_FromEquipment::StaticRegisterNativesUGradGameplayAbility_FromEquipment()
{
	UClass* Class = UGradGameplayAbility_FromEquipment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAssociatedEquipment", &UGradGameplayAbility_FromEquipment::execGetAssociatedEquipment },
		{ "GetAssociatedItem", &UGradGameplayAbility_FromEquipment::execGetAssociatedItem },
		{ "TestReload", &UGradGameplayAbility_FromEquipment::execTestReload },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradGameplayAbility_FromEquipment);
UClass* Z_Construct_UClass_UGradGameplayAbility_FromEquipment_NoRegister()
{
	return UGradGameplayAbility_FromEquipment::StaticClass();
}
struct Z_Construct_UClass_UGradGameplayAbility_FromEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Equipment/GradGameplayAbility_FromEquipment.h" },
		{ "ModuleRelativePath", "Equipment/GradGameplayAbility_FromEquipment.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedEquipment, "GetAssociatedEquipment" }, // 4064438105
		{ &Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_GetAssociatedItem, "GetAssociatedItem" }, // 1986645948
		{ &Z_Construct_UFunction_UGradGameplayAbility_FromEquipment_TestReload, "TestReload" }, // 1400132329
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradGameplayAbility_FromEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradGameplayAbility_FromEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_FromEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradGameplayAbility_FromEquipment_Statics::ClassParams = {
	&UGradGameplayAbility_FromEquipment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_FromEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradGameplayAbility_FromEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradGameplayAbility_FromEquipment()
{
	if (!Z_Registration_Info_UClass_UGradGameplayAbility_FromEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradGameplayAbility_FromEquipment.OuterSingleton, Z_Construct_UClass_UGradGameplayAbility_FromEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradGameplayAbility_FromEquipment.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradGameplayAbility_FromEquipment>()
{
	return UGradGameplayAbility_FromEquipment::StaticClass();
}
UGradGameplayAbility_FromEquipment::UGradGameplayAbility_FromEquipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradGameplayAbility_FromEquipment);
UGradGameplayAbility_FromEquipment::~UGradGameplayAbility_FromEquipment() {}
// End Class UGradGameplayAbility_FromEquipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradGameplayAbility_FromEquipment, UGradGameplayAbility_FromEquipment::StaticClass, TEXT("UGradGameplayAbility_FromEquipment"), &Z_Registration_Info_UClass_UGradGameplayAbility_FromEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradGameplayAbility_FromEquipment), 2062967022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_698060278(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
