// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Weapons/GradGameplayAbility_RangedWeapon.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameplayAbility_RangedWeapon() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility_FromEquipment();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility_RangedWeapon();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_NoRegister();
GRADGAME_API UEnum* Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Enum EGradAbilityTargetingSource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGradAbilityTargetingSource;
static UEnum* EGradAbilityTargetingSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGradAbilityTargetingSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGradAbilityTargetingSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("EGradAbilityTargetingSource"));
	}
	return Z_Registration_Info_UEnum_EGradAbilityTargetingSource.OuterSingleton;
}
template<> GRADGAME_API UEnum* StaticEnum<EGradAbilityTargetingSource>()
{
	return EGradAbilityTargetingSource_StaticEnum();
}
struct Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CameraTowardsFocus.Comment", "/** Camera \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
		{ "CameraTowardsFocus.Name", "EGradAbilityTargetingSource::CameraTowardsFocus" },
		{ "CameraTowardsFocus.ToolTip", "Camera \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Taget\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xc7\xb5\xef\xbf\xbd (Grad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xd9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) */" },
#endif
		{ "ModuleRelativePath", "Weapons/GradGameplayAbility_RangedWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Taget\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xc7\xb5\xef\xbf\xbd (Grad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xd9\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGradAbilityTargetingSource::CameraTowardsFocus", (int64)EGradAbilityTargetingSource::CameraTowardsFocus },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	"EGradAbilityTargetingSource",
	"EGradAbilityTargetingSource",
	Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource()
{
	if (!Z_Registration_Info_UEnum_EGradAbilityTargetingSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGradAbilityTargetingSource.InnerSingleton, Z_Construct_UEnum_GradGame_EGradAbilityTargetingSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGradAbilityTargetingSource.InnerSingleton;
}
// End Enum EGradAbilityTargetingSource

// Begin Class UGradGameplayAbility_RangedWeapon Function OnRangeWeaponTargetDataReady
struct GradGameplayAbility_RangedWeapon_eventOnRangeWeaponTargetDataReady_Parms
{
	FGameplayAbilityTargetDataHandle TargetData;
};
static FName NAME_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady = FName(TEXT("OnRangeWeaponTargetDataReady"));
void UGradGameplayAbility_RangedWeapon::OnRangeWeaponTargetDataReady(FGameplayAbilityTargetDataHandle const& TargetData)
{
	GradGameplayAbility_RangedWeapon_eventOnRangeWeaponTargetDataReady_Parms Parms;
	Parms.TargetData=TargetData;
	ProcessEvent(FindFunctionChecked(NAME_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady),&Parms);
}
struct Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when target data is ready */" },
#endif
		{ "ModuleRelativePath", "Weapons/GradGameplayAbility_RangedWeapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when target data is ready" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradGameplayAbility_RangedWeapon_eventOnRangeWeaponTargetDataReady_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::NewProp_TargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility_RangedWeapon, nullptr, "OnRangeWeaponTargetDataReady", nullptr, nullptr, Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::PropPointers), sizeof(GradGameplayAbility_RangedWeapon_eventOnRangeWeaponTargetDataReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(GradGameplayAbility_RangedWeapon_eventOnRangeWeaponTargetDataReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGradGameplayAbility_RangedWeapon Function OnRangeWeaponTargetDataReady

// Begin Class UGradGameplayAbility_RangedWeapon Function StartRangedWeaponTargeting
struct Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/GradGameplayAbility_RangedWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradGameplayAbility_RangedWeapon, nullptr, "StartRangedWeaponTargeting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_StartRangedWeaponTargeting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_StartRangedWeaponTargeting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradGameplayAbility_RangedWeapon::execStartRangedWeaponTargeting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRangedWeaponTargeting();
	P_NATIVE_END;
}
// End Class UGradGameplayAbility_RangedWeapon Function StartRangedWeaponTargeting

// Begin Class UGradGameplayAbility_RangedWeapon
void UGradGameplayAbility_RangedWeapon::StaticRegisterNativesUGradGameplayAbility_RangedWeapon()
{
	UClass* Class = UGradGameplayAbility_RangedWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartRangedWeaponTargeting", &UGradGameplayAbility_RangedWeapon::execStartRangedWeaponTargeting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradGameplayAbility_RangedWeapon);
UClass* Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_NoRegister()
{
	return UGradGameplayAbility_RangedWeapon::StaticClass();
}
struct Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/GradGameplayAbility_RangedWeapon.h" },
		{ "ModuleRelativePath", "Weapons/GradGameplayAbility_RangedWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_OnRangeWeaponTargetDataReady, "OnRangeWeaponTargetDataReady" }, // 568046104
		{ &Z_Construct_UFunction_UGradGameplayAbility_RangedWeapon_StartRangedWeaponTargeting, "StartRangedWeaponTargeting" }, // 2208933312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradGameplayAbility_RangedWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradGameplayAbility_FromEquipment,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_Statics::ClassParams = {
	&UGradGameplayAbility_RangedWeapon::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradGameplayAbility_RangedWeapon()
{
	if (!Z_Registration_Info_UClass_UGradGameplayAbility_RangedWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradGameplayAbility_RangedWeapon.OuterSingleton, Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradGameplayAbility_RangedWeapon.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradGameplayAbility_RangedWeapon>()
{
	return UGradGameplayAbility_RangedWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradGameplayAbility_RangedWeapon);
UGradGameplayAbility_RangedWeapon::~UGradGameplayAbility_RangedWeapon() {}
// End Class UGradGameplayAbility_RangedWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGradAbilityTargetingSource_StaticEnum, TEXT("EGradAbilityTargetingSource"), &Z_Registration_Info_UEnum_EGradAbilityTargetingSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1835044637U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradGameplayAbility_RangedWeapon, UGradGameplayAbility_RangedWeapon::StaticClass, TEXT("UGradGameplayAbility_RangedWeapon"), &Z_Registration_Info_UClass_UGradGameplayAbility_RangedWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradGameplayAbility_RangedWeapon), 2590230415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_136984712(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
