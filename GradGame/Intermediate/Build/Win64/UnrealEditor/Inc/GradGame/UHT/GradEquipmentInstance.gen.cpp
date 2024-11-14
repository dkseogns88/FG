// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Equipment/GradEquipmentInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradEquipmentInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentInstance();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradEquipmentInstance Function GetInstigator
struct Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics
{
	struct GradEquipmentInstance_eventGetInstigator_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradEquipmentInstance_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradEquipmentInstance, nullptr, "GetInstigator", nullptr, nullptr, Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::GradEquipmentInstance_eventGetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::GradEquipmentInstance_eventGetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradEquipmentInstance::execGetInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetInstigator();
	P_NATIVE_END;
}
// End Class UGradEquipmentInstance Function GetInstigator

// Begin Class UGradEquipmentInstance Function GetPawn
struct Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics
{
	struct GradEquipmentInstance_eventGetPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradEquipmentInstance_eventGetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradEquipmentInstance, nullptr, "GetPawn", nullptr, nullptr, Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::GradEquipmentInstance_eventGetPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::GradEquipmentInstance_eventGetPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradEquipmentInstance_GetPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradEquipmentInstance_GetPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradEquipmentInstance::execGetPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetPawn();
	P_NATIVE_END;
}
// End Class UGradEquipmentInstance Function GetPawn

// Begin Class UGradEquipmentInstance Function GetSpawnedActors
struct Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics
{
	struct GradEquipmentInstance_eventGetSpawnedActors_Parms
	{
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradEquipmentInstance_eventGetSpawnedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradEquipmentInstance, nullptr, "GetSpawnedActors", nullptr, nullptr, Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::GradEquipmentInstance_eventGetSpawnedActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::GradEquipmentInstance_eventGetSpawnedActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradEquipmentInstance::execGetSpawnedActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSpawnedActors();
	P_NATIVE_END;
}
// End Class UGradEquipmentInstance Function GetSpawnedActors

// Begin Class UGradEquipmentInstance Function GetTypedPawn
struct Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics
{
	struct GradEquipmentInstance_eventGetTypedPawn_Parms
	{
		TSubclassOf<APawn> PawnType;
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * DeterminesOutputType\xef\xbf\xbd\xef\xbf\xbd C++ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd APawn* \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, BP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd PawnType\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd OutputType\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xc6\xae(Redirect)\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n\x09 */" },
#endif
		{ "DeterminesOutputType", "PawnType" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DeterminesOutputType\xef\xbf\xbd\xef\xbf\xbd C++ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd APawn* \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, BP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd PawnType\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd OutputType\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xc6\xae(Redirect)\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::NewProp_PawnType = { "PawnType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradEquipmentInstance_eventGetTypedPawn_Parms, PawnType), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradEquipmentInstance_eventGetTypedPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::NewProp_PawnType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradEquipmentInstance, nullptr, "GetTypedPawn", nullptr, nullptr, Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::GradEquipmentInstance_eventGetTypedPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::GradEquipmentInstance_eventGetTypedPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradEquipmentInstance::execGetTypedPawn)
{
	P_GET_OBJECT(UClass,Z_Param_PawnType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetTypedPawn(Z_Param_PawnType);
	P_NATIVE_END;
}
// End Class UGradEquipmentInstance Function GetTypedPawn

// Begin Class UGradEquipmentInstance Function K2_OnEquipped
static FName NAME_UGradEquipmentInstance_K2_OnEquipped = FName(TEXT("K2_OnEquipped"));
void UGradEquipmentInstance::K2_OnEquipped()
{
	ProcessEvent(FindFunctionChecked(NAME_UGradEquipmentInstance_K2_OnEquipped),NULL);
}
struct Z_Construct_UFunction_UGradEquipmentInstance_K2_OnEquipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Blueprint \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Equip/Unequip \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n\x09*/" },
#endif
		{ "DisplayName", "OnEquipped" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Equip/Unequip \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradEquipmentInstance_K2_OnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradEquipmentInstance, nullptr, "K2_OnEquipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_K2_OnEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradEquipmentInstance_K2_OnEquipped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGradEquipmentInstance_K2_OnEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradEquipmentInstance_K2_OnEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGradEquipmentInstance Function K2_OnEquipped

// Begin Class UGradEquipmentInstance Function K2_OnUnequipped
static FName NAME_UGradEquipmentInstance_K2_OnUnequipped = FName(TEXT("K2_OnUnequipped"));
void UGradEquipmentInstance::K2_OnUnequipped()
{
	ProcessEvent(FindFunctionChecked(NAME_UGradEquipmentInstance_K2_OnUnequipped),NULL);
}
struct Z_Construct_UFunction_UGradEquipmentInstance_K2_OnUnequipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "DisplayName", "OnUnequipped" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradEquipmentInstance_K2_OnUnequipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradEquipmentInstance, nullptr, "K2_OnUnequipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradEquipmentInstance_K2_OnUnequipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradEquipmentInstance_K2_OnUnequipped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGradEquipmentInstance_K2_OnUnequipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradEquipmentInstance_K2_OnUnequipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGradEquipmentInstance Function K2_OnUnequipped

// Begin Class UGradEquipmentInstance
void UGradEquipmentInstance::StaticRegisterNativesUGradEquipmentInstance()
{
	UClass* Class = UGradEquipmentInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstigator", &UGradEquipmentInstance::execGetInstigator },
		{ "GetPawn", &UGradEquipmentInstance::execGetPawn },
		{ "GetSpawnedActors", &UGradEquipmentInstance::execGetSpawnedActors },
		{ "GetTypedPawn", &UGradEquipmentInstance::execGetTypedPawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradEquipmentInstance);
UClass* Z_Construct_UClass_UGradEquipmentInstance_NoRegister()
{
	return UGradEquipmentInstance::StaticClass();
}
struct Z_Construct_UClass_UGradEquipmentInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xc5\xb9\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xcd\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UGradEquipmentInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xde\xbe\xc6\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd.\n * UGradEquipmentInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xc2\xb0\xef\xbf\xbd UGradEquipmentInstance\xef\xbf\xbd\xef\xbf\xbd. \n */" },
#endif
		{ "IncludePath", "Equipment/GradEquipmentInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xc5\xb9\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xcd\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UGradEquipmentInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xde\xbe\xc6\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xb4\xef\xbf\xbd.\nUGradEquipmentInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xc2\xb0\xef\xbf\xbd UGradEquipmentInstance\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xee\xb6\xb2 InventoryItemInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, QuickBarComponent\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xb0\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd) */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xee\xb6\xb2 InventoryItemInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, QuickBarComponent\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xb0\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GradEquipementDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb0\xef\xbf\xbd Spawn\xef\xbf\xbd\xef\xbf\xbd Actor Instance\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GradEquipementDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb0\xef\xbf\xbd Spawn\xef\xbf\xbd\xef\xbf\xbd Actor Instance\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradEquipmentInstance_GetInstigator, "GetInstigator" }, // 1449059172
		{ &Z_Construct_UFunction_UGradEquipmentInstance_GetPawn, "GetPawn" }, // 4081993957
		{ &Z_Construct_UFunction_UGradEquipmentInstance_GetSpawnedActors, "GetSpawnedActors" }, // 460556668
		{ &Z_Construct_UFunction_UGradEquipmentInstance_GetTypedPawn, "GetTypedPawn" }, // 2661363097
		{ &Z_Construct_UFunction_UGradEquipmentInstance_K2_OnEquipped, "K2_OnEquipped" }, // 3458876882
		{ &Z_Construct_UFunction_UGradEquipmentInstance_K2_OnUnequipped, "K2_OnUnequipped" }, // 2590488220
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradEquipmentInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradEquipmentInstance_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradEquipmentInstance, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradEquipmentInstance_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradEquipmentInstance_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradEquipmentInstance, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActors_MetaData), NewProp_SpawnedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradEquipmentInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradEquipmentInstance_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradEquipmentInstance_Statics::NewProp_SpawnedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradEquipmentInstance_Statics::NewProp_SpawnedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradEquipmentInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradEquipmentInstance_Statics::ClassParams = {
	&UGradEquipmentInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradEquipmentInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentInstance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradEquipmentInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradEquipmentInstance()
{
	if (!Z_Registration_Info_UClass_UGradEquipmentInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradEquipmentInstance.OuterSingleton, Z_Construct_UClass_UGradEquipmentInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradEquipmentInstance.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradEquipmentInstance>()
{
	return UGradEquipmentInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradEquipmentInstance);
UGradEquipmentInstance::~UGradEquipmentInstance() {}
// End Class UGradEquipmentInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradEquipmentInstance, UGradEquipmentInstance::StaticClass, TEXT("UGradEquipmentInstance"), &Z_Registration_Info_UClass_UGradEquipmentInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradEquipmentInstance), 1017120134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_3572666411(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
