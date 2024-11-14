// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/System/GradSystemStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradSystemStatics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GRADGAME_API UClass* Z_Construct_UClass_UGradSystemStatics();
GRADGAME_API UClass* Z_Construct_UClass_UGradSystemStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradSystemStatics Function FindComponentsByClass
struct Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics
{
	struct GradSystemStatics_eventFindComponentsByClass_Parms
	{
		AActor* TargetActor;
		TSubclassOf<UActorComponent> ComponentClass;
		bool bIncludeChildActors;
		TArray<UActorComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets all the components that inherit from the given class\n" },
#endif
		{ "ComponentClass", "/Script/Engine.ActorComponent" },
		{ "CPP_Default_bIncludeChildActors", "true" },
		{ "DefaultToSelf", "TargetActor" },
		{ "DeterminesOutputType", "ComponentClass" },
		{ "ModuleRelativePath", "System/GradSystemStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all the components that inherit from the given class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static void NewProp_bIncludeChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradSystemStatics_eventFindComponentsByClass_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradSystemStatics_eventFindComponentsByClass_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_bIncludeChildActors_SetBit(void* Obj)
{
	((GradSystemStatics_eventFindComponentsByClass_Parms*)Obj)->bIncludeChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_bIncludeChildActors = { "bIncludeChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GradSystemStatics_eventFindComponentsByClass_Parms), &Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_bIncludeChildActors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradSystemStatics_eventFindComponentsByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_bIncludeChildActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradSystemStatics, nullptr, "FindComponentsByClass", nullptr, nullptr, Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::GradSystemStatics_eventFindComponentsByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::GradSystemStatics_eventFindComponentsByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradSystemStatics::execFindComponentsByClass)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_OBJECT(UClass,Z_Param_ComponentClass);
	P_GET_UBOOL(Z_Param_bIncludeChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UActorComponent*>*)Z_Param__Result=UGradSystemStatics::FindComponentsByClass(Z_Param_TargetActor,Z_Param_ComponentClass,Z_Param_bIncludeChildActors);
	P_NATIVE_END;
}
// End Class UGradSystemStatics Function FindComponentsByClass

// Begin Class UGradSystemStatics Function SetColorParameterValueOnAllMeshComponents
struct Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics
{
	struct GradSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms
	{
		AActor* TargetActor;
		FName ParameterName;
		FLinearColor ParameterValue;
		bool bIncludeChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor\n" },
#endif
		{ "CPP_Default_bIncludeChildActors", "true" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "System/GradSystemStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static void NewProp_bIncludeChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
void Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit(void* Obj)
{
	((GradSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms*)Obj)->bIncludeChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors = { "bIncludeChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GradSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms), &Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradSystemStatics, nullptr, "SetColorParameterValueOnAllMeshComponents", nullptr, nullptr, Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::GradSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::GradSystemStatics_eventSetColorParameterValueOnAllMeshComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradSystemStatics::execSetColorParameterValueOnAllMeshComponents)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FLinearColor,Z_Param_ParameterValue);
	P_GET_UBOOL(Z_Param_bIncludeChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGradSystemStatics::SetColorParameterValueOnAllMeshComponents(Z_Param_TargetActor,Z_Param_ParameterName,Z_Param_ParameterValue,Z_Param_bIncludeChildActors);
	P_NATIVE_END;
}
// End Class UGradSystemStatics Function SetColorParameterValueOnAllMeshComponents

// Begin Class UGradSystemStatics Function SetVectorParameterValueOnAllMeshComponents
struct Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics
{
	struct GradSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms
	{
		AActor* TargetActor;
		FName ParameterName;
		FVector ParameterValue;
		bool bIncludeChildActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor\n" },
#endif
		{ "CPP_Default_bIncludeChildActors", "true" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "System/GradSystemStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets ParameterName to ParameterValue on all sections of all mesh components found on the TargetActor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static void NewProp_bIncludeChildActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms, ParameterValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
void Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit(void* Obj)
{
	((GradSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms*)Obj)->bIncludeChildActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors = { "bIncludeChildActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GradSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms), &Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_ParameterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::NewProp_bIncludeChildActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradSystemStatics, nullptr, "SetVectorParameterValueOnAllMeshComponents", nullptr, nullptr, Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::GradSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::GradSystemStatics_eventSetVectorParameterValueOnAllMeshComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradSystemStatics::execSetVectorParameterValueOnAllMeshComponents)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FVector,Z_Param_ParameterValue);
	P_GET_UBOOL(Z_Param_bIncludeChildActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGradSystemStatics::SetVectorParameterValueOnAllMeshComponents(Z_Param_TargetActor,Z_Param_ParameterName,Z_Param_ParameterValue,Z_Param_bIncludeChildActors);
	P_NATIVE_END;
}
// End Class UGradSystemStatics Function SetVectorParameterValueOnAllMeshComponents

// Begin Class UGradSystemStatics
void UGradSystemStatics::StaticRegisterNativesUGradSystemStatics()
{
	UClass* Class = UGradSystemStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindComponentsByClass", &UGradSystemStatics::execFindComponentsByClass },
		{ "SetColorParameterValueOnAllMeshComponents", &UGradSystemStatics::execSetColorParameterValueOnAllMeshComponents },
		{ "SetVectorParameterValueOnAllMeshComponents", &UGradSystemStatics::execSetVectorParameterValueOnAllMeshComponents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradSystemStatics);
UClass* Z_Construct_UClass_UGradSystemStatics_NoRegister()
{
	return UGradSystemStatics::StaticClass();
}
struct Z_Construct_UClass_UGradSystemStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "System/GradSystemStatics.h" },
		{ "ModuleRelativePath", "System/GradSystemStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradSystemStatics_FindComponentsByClass, "FindComponentsByClass" }, // 589243050
		{ &Z_Construct_UFunction_UGradSystemStatics_SetColorParameterValueOnAllMeshComponents, "SetColorParameterValueOnAllMeshComponents" }, // 994950121
		{ &Z_Construct_UFunction_UGradSystemStatics_SetVectorParameterValueOnAllMeshComponents, "SetVectorParameterValueOnAllMeshComponents" }, // 3905747221
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradSystemStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradSystemStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradSystemStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradSystemStatics_Statics::ClassParams = {
	&UGradSystemStatics::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradSystemStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradSystemStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradSystemStatics()
{
	if (!Z_Registration_Info_UClass_UGradSystemStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradSystemStatics.OuterSingleton, Z_Construct_UClass_UGradSystemStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradSystemStatics.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradSystemStatics>()
{
	return UGradSystemStatics::StaticClass();
}
UGradSystemStatics::UGradSystemStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradSystemStatics);
UGradSystemStatics::~UGradSystemStatics() {}
// End Class UGradSystemStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradSystemStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradSystemStatics, UGradSystemStatics::StaticClass, TEXT("UGradSystemStatics"), &Z_Registration_Info_UClass_UGradSystemStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradSystemStatics), 4016521625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradSystemStatics_h_2049275850(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradSystemStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradSystemStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
