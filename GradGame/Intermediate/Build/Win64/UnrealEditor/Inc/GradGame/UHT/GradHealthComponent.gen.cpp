// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Character/GradHealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradHealthComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradHealthComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradHealthComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradHealthSet_NoRegister();
GRADGAME_API UFunction* Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Delegate FGradHealth_AttributeChanged
struct Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics
{
	struct _Script_GradGame_eventGradHealth_AttributeChanged_Parms
	{
		UGradHealthComponent* HealthComponent;
		float OldValue;
		float NewValue;
		AActor* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Health \xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xdd\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae */" },
#endif
		{ "ModuleRelativePath", "Character/GradHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health \xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xdd\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GradGame_eventGradHealth_AttributeChanged_Parms, HealthComponent), Z_Construct_UClass_UGradHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GradGame_eventGradHealth_AttributeChanged_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GradGame_eventGradHealth_AttributeChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GradGame_eventGradHealth_AttributeChanged_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GradGame, nullptr, "GradHealth_AttributeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::_Script_GradGame_eventGradHealth_AttributeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::_Script_GradGame_eventGradHealth_AttributeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGradHealth_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& GradHealth_AttributeChanged, UGradHealthComponent* HealthComponent, float OldValue, float NewValue, AActor* Instigator)
{
	struct _Script_GradGame_eventGradHealth_AttributeChanged_Parms
	{
		UGradHealthComponent* HealthComponent;
		float OldValue;
		float NewValue;
		AActor* Instigator;
	};
	_Script_GradGame_eventGradHealth_AttributeChanged_Parms Parms;
	Parms.HealthComponent=HealthComponent;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	Parms.Instigator=Instigator;
	GradHealth_AttributeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGradHealth_AttributeChanged

// Begin Class UGradHealthComponent Function FindHealthComponent
struct Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics
{
	struct GradHealthComponent_eventFindHealthComponent_Parms
	{
		const AActor* Actor;
		UGradHealthComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ACharacter/APawn)\xef\xbf\xbd\xef\xbf\xbd HealthComponent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf */" },
#endif
		{ "ModuleRelativePath", "Character/GradHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ACharacter/APawn)\xef\xbf\xbd\xef\xbf\xbd HealthComponent\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradHealthComponent_eventFindHealthComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradHealthComponent_eventFindHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UGradHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradHealthComponent, nullptr, "FindHealthComponent", nullptr, nullptr, Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::GradHealthComponent_eventFindHealthComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::GradHealthComponent_eventFindHealthComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradHealthComponent::execFindHealthComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGradHealthComponent**)Z_Param__Result=UGradHealthComponent::FindHealthComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UGradHealthComponent Function FindHealthComponent

// Begin Class UGradHealthComponent Function GetHealth
struct Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics
{
	struct GradHealthComponent_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UFUNCTION\xef\xbf\xbd\xef\xbf\xbd HealthSet\xef\xbf\xbd\xef\xbf\xbd Attribute\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BP Accessor \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Character/GradHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UFUNCTION\xef\xbf\xbd\xef\xbf\xbd HealthSet\xef\xbf\xbd\xef\xbf\xbd Attribute\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BP Accessor \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradHealthComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradHealthComponent, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::GradHealthComponent_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::GradHealthComponent_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradHealthComponent_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradHealthComponent_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradHealthComponent::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class UGradHealthComponent Function GetHealth

// Begin Class UGradHealthComponent Function GetHealthNormalized
struct Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics
{
	struct GradHealthComponent_eventGetHealthNormalized_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Health" },
		{ "ModuleRelativePath", "Character/GradHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradHealthComponent_eventGetHealthNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradHealthComponent, nullptr, "GetHealthNormalized", nullptr, nullptr, Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::GradHealthComponent_eventGetHealthNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::GradHealthComponent_eventGetHealthNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradHealthComponent::execGetHealthNormalized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthNormalized();
	P_NATIVE_END;
}
// End Class UGradHealthComponent Function GetHealthNormalized

// Begin Class UGradHealthComponent Function GetMaxHealth
struct Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics
{
	struct GradHealthComponent_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Health" },
		{ "ModuleRelativePath", "Character/GradHealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradHealthComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradHealthComponent, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::GradHealthComponent_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::GradHealthComponent_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradHealthComponent::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class UGradHealthComponent Function GetMaxHealth

// Begin Class UGradHealthComponent
void UGradHealthComponent::StaticRegisterNativesUGradHealthComponent()
{
	UClass* Class = UGradHealthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindHealthComponent", &UGradHealthComponent::execFindHealthComponent },
		{ "GetHealth", &UGradHealthComponent::execGetHealth },
		{ "GetHealthNormalized", &UGradHealthComponent::execGetHealthNormalized },
		{ "GetMaxHealth", &UGradHealthComponent::execGetMaxHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradHealthComponent);
UClass* Z_Construct_UClass_UGradHealthComponent_NoRegister()
{
	return UGradHealthComponent::StaticClass();
}
struct Z_Construct_UClass_UGradHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Character(Pawn)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xc2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Component\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blueprintable\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd:\n * - \xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Delegate\xef\xbf\xbd\xef\xbf\xbd UI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd (\xef\xbf\xbd\xda\xbc\xef\xbf\xbd\xef\xbf\xbd\xd1\xb0\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xe9\xbc\xad \xef\xbf\xbd\xcb\xbe\xc6\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/GradHealthComponent.h" },
		{ "ModuleRelativePath", "Character/GradHealthComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character(Pawn)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xef\xbf\xbd\xc2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Component\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd\n- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blueprintable\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd:\n- \xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Delegate\xef\xbf\xbd\xef\xbf\xbd UI\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd (\xef\xbf\xbd\xda\xbc\xef\xbf\xbd\xef\xbf\xbd\xd1\xb0\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xe9\xbc\xad \xef\xbf\xbd\xcb\xbe\xc6\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** HealthSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AbilitySystemComponent */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/GradHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HealthSet\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AbilitySystemComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xc4\xb3\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd HealthSet \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/GradHealthComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xb3\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd HealthSet \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** health \xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Delegate(Multicast) */" },
#endif
		{ "ModuleRelativePath", "Character/GradHealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "health \xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Delegate(Multicast)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthSet;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradHealthComponent_FindHealthComponent, "FindHealthComponent" }, // 648151107
		{ &Z_Construct_UFunction_UGradHealthComponent_GetHealth, "GetHealth" }, // 3296183522
		{ &Z_Construct_UFunction_UGradHealthComponent_GetHealthNormalized, "GetHealthNormalized" }, // 2783335046
		{ &Z_Construct_UFunction_UGradHealthComponent_GetMaxHealth, "GetMaxHealth" }, // 95024822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradHealthComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradHealthComponent, AbilitySystemComponent), Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradHealthComponent_Statics::NewProp_HealthSet = { "HealthSet", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradHealthComponent, HealthSet), Z_Construct_UClass_UGradHealthSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthSet_MetaData), NewProp_HealthSet_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGradHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 996730475
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHealthComponent_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHealthComponent_Statics::NewProp_HealthSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHealthComponent_Statics::NewProp_OnHealthChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHealthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFrameworkComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradHealthComponent_Statics::ClassParams = {
	&UGradHealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradHealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradHealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradHealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradHealthComponent()
{
	if (!Z_Registration_Info_UClass_UGradHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradHealthComponent.OuterSingleton, Z_Construct_UClass_UGradHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradHealthComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradHealthComponent>()
{
	return UGradHealthComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradHealthComponent);
UGradHealthComponent::~UGradHealthComponent() {}
// End Class UGradHealthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradHealthComponent, UGradHealthComponent::StaticClass, TEXT("UGradHealthComponent"), &Z_Registration_Info_UClass_UGradHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradHealthComponent), 2191197681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_719390508(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
