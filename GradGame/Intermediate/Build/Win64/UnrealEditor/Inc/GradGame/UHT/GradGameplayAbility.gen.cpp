// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/Abilities/GradGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameplayAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GRADGAME_API UClass* Z_Construct_UClass_AGradCharacter_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_AGradNetCharacter_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_AGradPlayerController_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilityCost_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraMode_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradHeroComponent_NoRegister();
GRADGAME_API UEnum* Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup();
GRADGAME_API UEnum* Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy();
GRADGAME_API UEnum* Z_Construct_UEnum_GradGame_EGradAbilityDashDirection();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Enum EGradAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGradAbilityActivationPolicy;
static UEnum* EGradAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGradAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGradAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("EGradAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EGradAbilityActivationPolicy.OuterSingleton;
}
template<> GRADGAME_API UEnum* StaticEnum<EGradAbilityActivationPolicy>()
{
	return EGradAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
		{ "OnInputTriggered.Comment", "/** Input\xef\xbf\xbd\xef\xbf\xbd Trigger \xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Presssed/Released) */" },
		{ "OnInputTriggered.Name", "EGradAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Input\xef\xbf\xbd\xef\xbf\xbd Trigger \xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Presssed/Released)" },
		{ "OnSpawn.Comment", "/** avatar\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xd9\xb7\xef\xbf\xbd \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd */" },
		{ "OnSpawn.Name", "EGradAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "avatar\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xd9\xb7\xef\xbf\xbd \xef\xbf\xbd\xd2\xb4\xef\xbf\xbd" },
		{ "WhileInputActive.Comment", "/** Input\xef\xbf\xbd\xef\xbf\xbd Held\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
		{ "WhileInputActive.Name", "EGradAbilityActivationPolicy::WhileInputActive" },
		{ "WhileInputActive.ToolTip", "Input\xef\xbf\xbd\xef\xbf\xbd Held\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGradAbilityActivationPolicy::OnInputTriggered", (int64)EGradAbilityActivationPolicy::OnInputTriggered },
		{ "EGradAbilityActivationPolicy::WhileInputActive", (int64)EGradAbilityActivationPolicy::WhileInputActive },
		{ "EGradAbilityActivationPolicy::OnSpawn", (int64)EGradAbilityActivationPolicy::OnSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	"EGradAbilityActivationPolicy",
	"EGradAbilityActivationPolicy",
	Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EGradAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGradAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGradAbilityActivationPolicy.InnerSingleton;
}
// End Enum EGradAbilityActivationPolicy

// Begin Enum EGradAbilityActivationGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGradAbilityActivationGroup;
static UEnum* EGradAbilityActivationGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGradAbilityActivationGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGradAbilityActivationGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("EGradAbilityActivationGroup"));
	}
	return Z_Registration_Info_UEnum_EGradAbilityActivationGroup.OuterSingleton;
}
template<> GRADGAME_API UEnum* StaticEnum<EGradAbilityActivationGroup>()
{
	return EGradAbilityActivationGroup_StaticEnum();
}
struct Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EGradAbilityActivationGroup\n *\n *\x09""Defines how an ability activates in relation to other abilities.\n */" },
#endif
		{ "Exclusive_Blocking.Comment", "// Ability blocks all other exclusive abilities from activating.\n" },
		{ "Exclusive_Blocking.Name", "EGradAbilityActivationGroup::Exclusive_Blocking" },
		{ "Exclusive_Blocking.ToolTip", "Ability blocks all other exclusive abilities from activating." },
		{ "Exclusive_Replaceable.Comment", "// Ability is canceled and replaced by other exclusive abilities.\n" },
		{ "Exclusive_Replaceable.Name", "EGradAbilityActivationGroup::Exclusive_Replaceable" },
		{ "Exclusive_Replaceable.ToolTip", "Ability is canceled and replaced by other exclusive abilities." },
		{ "Independent.Comment", "// Ability runs independently of all other abilities.\n" },
		{ "Independent.Name", "EGradAbilityActivationGroup::Independent" },
		{ "Independent.ToolTip", "Ability runs independently of all other abilities." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGradAbilityActivationGroup::MAX" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EGradAbilityActivationGroup\n\n    Defines how an ability activates in relation to other abilities." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGradAbilityActivationGroup::Independent", (int64)EGradAbilityActivationGroup::Independent },
		{ "EGradAbilityActivationGroup::Exclusive_Replaceable", (int64)EGradAbilityActivationGroup::Exclusive_Replaceable },
		{ "EGradAbilityActivationGroup::Exclusive_Blocking", (int64)EGradAbilityActivationGroup::Exclusive_Blocking },
		{ "EGradAbilityActivationGroup::MAX", (int64)EGradAbilityActivationGroup::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	"EGradAbilityActivationGroup",
	"EGradAbilityActivationGroup",
	Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup()
{
	if (!Z_Registration_Info_UEnum_EGradAbilityActivationGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGradAbilityActivationGroup.InnerSingleton, Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGradAbilityActivationGroup.InnerSingleton;
}
// End Enum EGradAbilityActivationGroup

// Begin Enum EGradAbilityDashDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGradAbilityDashDirection;
static UEnum* EGradAbilityDashDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGradAbilityDashDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGradAbilityDashDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GradGame_EGradAbilityDashDirection, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("EGradAbilityDashDirection"));
	}
	return Z_Registration_Info_UEnum_EGradAbilityDashDirection.OuterSingleton;
}
template<> GRADGAME_API UEnum* StaticEnum<EGradAbilityDashDirection>()
{
	return EGradAbilityDashDirection_StaticEnum();
}
struct Z_Construct_UEnum_GradGame_EGradAbilityDashDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.Name", "EGradAbilityDashDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Forward.Name", "EGradAbilityDashDirection::Forward" },
		{ "Left.Name", "EGradAbilityDashDirection::Left" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
		{ "None.Name", "EGradAbilityDashDirection::None" },
		{ "Right.Name", "EGradAbilityDashDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGradAbilityDashDirection::Forward", (int64)EGradAbilityDashDirection::Forward },
		{ "EGradAbilityDashDirection::Backward", (int64)EGradAbilityDashDirection::Backward },
		{ "EGradAbilityDashDirection::Left", (int64)EGradAbilityDashDirection::Left },
		{ "EGradAbilityDashDirection::Right", (int64)EGradAbilityDashDirection::Right },
		{ "EGradAbilityDashDirection::None", (int64)EGradAbilityDashDirection::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GradGame_EGradAbilityDashDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	"EGradAbilityDashDirection",
	"EGradAbilityDashDirection",
	Z_Construct_UEnum_GradGame_EGradAbilityDashDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradAbilityDashDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradAbilityDashDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GradGame_EGradAbilityDashDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GradGame_EGradAbilityDashDirection()
{
	if (!Z_Registration_Info_UEnum_EGradAbilityDashDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGradAbilityDashDirection.InnerSingleton, Z_Construct_UEnum_GradGame_EGradAbilityDashDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGradAbilityDashDirection.InnerSingleton;
}
// End Enum EGradAbilityDashDirection

// Begin Class UGradGameplayAbility Function ClearCameraMode
struct Z_Construct_UFunction_UGradGameplayAbility_ClearCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears the ability's camera mode.  Automatically called if needed when the ability ends.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the ability's camera mode.  Automatically called if needed when the ability ends." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_ClearCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility, nullptr, "ClearCameraMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_ClearCameraMode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGradGameplayAbility_ClearCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_ClearCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility::execClearCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCameraMode();
	P_NATIVE_END;
}
// End Class UGradGameplayAbility Function ClearCameraMode

// Begin Class UGradGameplayAbility Function GetGradCharacterFromActorInfo
struct Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics
{
	struct GradGameplayAbility_eventGetGradCharacterFromActorInfo_Parms
	{
		AGradCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_eventGetGradCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AGradCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility, nullptr, "GetGradCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::GradGameplayAbility_eventGetGradCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::GradGameplayAbility_eventGetGradCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility::execGetGradCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGradCharacter**)Z_Param__Result=P_THIS->GetGradCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UGradGameplayAbility Function GetGradCharacterFromActorInfo

// Begin Class UGradGameplayAbility Function GetGradNetCharacterFromActorInfo
struct Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics
{
	struct GradGameplayAbility_eventGetGradNetCharacterFromActorInfo_Parms
	{
		AGradNetCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_eventGetGradNetCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AGradNetCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility, nullptr, "GetGradNetCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::GradGameplayAbility_eventGetGradNetCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::GradGameplayAbility_eventGetGradNetCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility::execGetGradNetCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGradNetCharacter**)Z_Param__Result=P_THIS->GetGradNetCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UGradGameplayAbility Function GetGradNetCharacterFromActorInfo

// Begin Class UGradGameplayAbility Function GetGradPlayerControllerFromActorInfo
struct Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics
{
	struct GradGameplayAbility_eventGetGradPlayerControllerFromActorInfo_Parms
	{
		AGradPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_eventGetGradPlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AGradPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility, nullptr, "GetGradPlayerControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::GradGameplayAbility_eventGetGradPlayerControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::GradGameplayAbility_eventGetGradPlayerControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility::execGetGradPlayerControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGradPlayerController**)Z_Param__Result=P_THIS->GetGradPlayerControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UGradGameplayAbility Function GetGradPlayerControllerFromActorInfo

// Begin Class UGradGameplayAbility Function GetHeroComponentFromActorInfo
struct Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics
{
	struct GradGameplayAbility_eventGetHeroComponentFromActorInfo_Parms
	{
		UGradHeroComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_eventGetHeroComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UGradHeroComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility, nullptr, "GetHeroComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::GradGameplayAbility_eventGetHeroComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::GradGameplayAbility_eventGetHeroComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility::execGetHeroComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGradHeroComponent**)Z_Param__Result=P_THIS->GetHeroComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UGradGameplayAbility Function GetHeroComponentFromActorInfo

// Begin Class UGradGameplayAbility Function K2_OnAbilityAdded
static FName NAME_UGradGameplayAbility_K2_OnAbilityAdded = FName(TEXT("K2_OnAbilityAdded"));
void UGradGameplayAbility::K2_OnAbilityAdded()
{
	ProcessEvent(FindFunctionChecked(NAME_UGradGameplayAbility_K2_OnAbilityAdded),NULL);
}
struct Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is granted to the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityAdded" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is granted to the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility, nullptr, "K2_OnAbilityAdded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGradGameplayAbility Function K2_OnAbilityAdded

// Begin Class UGradGameplayAbility Function K2_OnAbilityRemoved
static FName NAME_UGradGameplayAbility_K2_OnAbilityRemoved = FName(TEXT("K2_OnAbilityRemoved"));
void UGradGameplayAbility::K2_OnAbilityRemoved()
{
	ProcessEvent(FindFunctionChecked(NAME_UGradGameplayAbility_K2_OnAbilityRemoved),NULL);
}
struct Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is removed from the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityRemoved" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is removed from the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility, nullptr, "K2_OnAbilityRemoved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGradGameplayAbility Function K2_OnAbilityRemoved

// Begin Class UGradGameplayAbility Function SendDash
struct Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics
{
	struct GradGameplayAbility_eventSendDash_Parms
	{
		EGradAbilityDashDirection DashDirection;
		FVector MoveDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DashDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DashDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::NewProp_DashDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::NewProp_DashDirection = { "DashDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_eventSendDash_Parms, DashDirection), Z_Construct_UEnum_GradGame_EGradAbilityDashDirection, METADATA_PARAMS(0, nullptr) }; // 2541308124
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_eventSendDash_Parms, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::NewProp_DashDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::NewProp_DashDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::NewProp_MoveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility, nullptr, "SendDash", nullptr, nullptr, Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::GradGameplayAbility_eventSendDash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::GradGameplayAbility_eventSendDash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradGameplayAbility_SendDash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_SendDash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility::execSendDash)
{
	P_GET_ENUM(EGradAbilityDashDirection,Z_Param_DashDirection);
	P_GET_STRUCT(FVector,Z_Param_MoveDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendDash(EGradAbilityDashDirection(Z_Param_DashDirection),Z_Param_MoveDirection);
	P_NATIVE_END;
}
// End Class UGradGameplayAbility Function SendDash

// Begin Class UGradGameplayAbility Function SetCameraMode
struct Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics
{
	struct GradGameplayAbility_eventSetCameraMode_Parms
	{
		TSubclassOf<UGradCameraMode> CameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the ability's camera mode.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the ability's camera mode." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_eventSetCameraMode_Parms, CameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::NewProp_CameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility, nullptr, "SetCameraMode", nullptr, nullptr, Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::GradGameplayAbility_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::GradGameplayAbility_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility::execSetCameraMode)
{
	P_GET_OBJECT(UClass,Z_Param_CameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(Z_Param_CameraMode);
	P_NATIVE_END;
}
// End Class UGradGameplayAbility Function SetCameraMode

// Begin Class UGradGameplayAbility
void UGradGameplayAbility::StaticRegisterNativesUGradGameplayAbility()
{
	UClass* Class = UGradGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearCameraMode", &UGradGameplayAbility::execClearCameraMode },
		{ "GetGradCharacterFromActorInfo", &UGradGameplayAbility::execGetGradCharacterFromActorInfo },
		{ "GetGradNetCharacterFromActorInfo", &UGradGameplayAbility::execGetGradNetCharacterFromActorInfo },
		{ "GetGradPlayerControllerFromActorInfo", &UGradGameplayAbility::execGetGradPlayerControllerFromActorInfo },
		{ "GetHeroComponentFromActorInfo", &UGradGameplayAbility::execGetHeroComponentFromActorInfo },
		{ "SendDash", &UGradGameplayAbility::execSendDash },
		{ "SetCameraMode", &UGradGameplayAbility::execSetCameraMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradGameplayAbility);
UClass* Z_Construct_UClass_UGradGameplayAbility_NoRegister()
{
	return UGradGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UGradGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "Grad|AbilityActivation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GA\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xa5 */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd GA\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroup_MetaData[] = {
		{ "Category", "Grad|Ability Activation" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_Inner_MetaData[] = {
		{ "Category", "Grad|Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ability costs to apply GradGameplayAbility separately */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ability costs to apply GradGameplayAbility separately" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_MetaData[] = {
		{ "Category", "Grad|Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ability costs to apply GradGameplayAbility separately */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ability costs to apply GradGameplayAbility separately" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalCosts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradGameplayAbility_ClearCameraMode, "ClearCameraMode" }, // 522582397
		{ &Z_Construct_UFunction_UGradGameplayAbility_GetGradCharacterFromActorInfo, "GetGradCharacterFromActorInfo" }, // 2206340721
		{ &Z_Construct_UFunction_UGradGameplayAbility_GetGradNetCharacterFromActorInfo, "GetGradNetCharacterFromActorInfo" }, // 2071509737
		{ &Z_Construct_UFunction_UGradGameplayAbility_GetGradPlayerControllerFromActorInfo, "GetGradPlayerControllerFromActorInfo" }, // 4207552776
		{ &Z_Construct_UFunction_UGradGameplayAbility_GetHeroComponentFromActorInfo, "GetHeroComponentFromActorInfo" }, // 3898005030
		{ &Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityAdded, "K2_OnAbilityAdded" }, // 2775242187
		{ &Z_Construct_UFunction_UGradGameplayAbility_K2_OnAbilityRemoved, "K2_OnAbilityRemoved" }, // 2577050
		{ &Z_Construct_UFunction_UGradGameplayAbility_SendDash, "SendDash" }, // 347549243
		{ &Z_Construct_UFunction_UGradGameplayAbility_SetCameraMode, "SetCameraMode" }, // 2424338218
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradGameplayAbility, ActivationPolicy), Z_Construct_UEnum_GradGame_EGradAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 3444110444
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_ActivationGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_ActivationGroup = { "ActivationGroup", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradGameplayAbility, ActivationGroup), Z_Construct_UEnum_GradGame_EGradAbilityActivationGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationGroup_MetaData), NewProp_ActivationGroup_MetaData) }; // 60901263
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradAbilityCost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_Inner_MetaData), NewProp_AdditionalCosts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0114008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_MetaData), NewProp_AdditionalCosts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_ActivationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_ActivationGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_ActivationGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradGameplayAbility_Statics::NewProp_AdditionalCosts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradGameplayAbility_Statics::ClassParams = {
	&UGradGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UGradGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradGameplayAbility.OuterSingleton, Z_Construct_UClass_UGradGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradGameplayAbility.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradGameplayAbility>()
{
	return UGradGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradGameplayAbility);
UGradGameplayAbility::~UGradGameplayAbility() {}
// End Class UGradGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGradAbilityActivationPolicy_StaticEnum, TEXT("EGradAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EGradAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444110444U) },
		{ EGradAbilityActivationGroup_StaticEnum, TEXT("EGradAbilityActivationGroup"), &Z_Registration_Info_UEnum_EGradAbilityActivationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 60901263U) },
		{ EGradAbilityDashDirection_StaticEnum, TEXT("EGradAbilityDashDirection"), &Z_Registration_Info_UEnum_EGradAbilityDashDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2541308124U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradGameplayAbility, UGradGameplayAbility::StaticClass, TEXT("UGradGameplayAbility"), &Z_Registration_Info_UClass_UGradGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradGameplayAbility), 3283920197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_3750987485(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
