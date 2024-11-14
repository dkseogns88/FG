// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/GradGameplayAbilityTargetData_SingleTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameplayAbilityTargetData_SingleTarget() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradGameplayAbilityTargetData_SingleTargetHit
static_assert(std::is_polymorphic<FGradGameplayAbilityTargetData_SingleTargetHit>() == std::is_polymorphic<FGameplayAbilityTargetData_SingleTargetHit>(), "USTRUCT FGradGameplayAbilityTargetData_SingleTargetHit cannot be polymorphic unless super FGameplayAbilityTargetData_SingleTargetHit is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradGameplayAbilityTargetData_SingleTargetHit;
class UScriptStruct* FGradGameplayAbilityTargetData_SingleTargetHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradGameplayAbilityTargetData_SingleTargetHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradGameplayAbilityTargetData_SingleTargetHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradGameplayAbilityTargetData_SingleTargetHit"));
	}
	return Z_Registration_Info_UScriptStruct_GradGameplayAbilityTargetData_SingleTargetHit.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradGameplayAbilityTargetData_SingleTargetHit>()
{
	return FGradGameplayAbilityTargetData_SingleTargetHit::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/GradGameplayAbilityTargetData_SingleTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xc5\xba\xef\xbf\xbd\xef\xbf\xbd ID (\xc4\xab\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/GradGameplayAbilityTargetData_SingleTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xba\xef\xbf\xbd\xef\xbf\xbd ID (\xc4\xab\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradGameplayAbilityTargetData_SingleTargetHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradGameplayAbilityTargetData_SingleTargetHit, CartridgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartridgeID_MetaData), NewProp_CartridgeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::NewProp_CartridgeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	Z_Construct_UScriptStruct_FGameplayAbilityTargetData_SingleTargetHit,
	&NewStructOps,
	"GradGameplayAbilityTargetData_SingleTargetHit",
	Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::PropPointers),
	sizeof(FGradGameplayAbilityTargetData_SingleTargetHit),
	alignof(FGradGameplayAbilityTargetData_SingleTargetHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit()
{
	if (!Z_Registration_Info_UScriptStruct_GradGameplayAbilityTargetData_SingleTargetHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradGameplayAbilityTargetData_SingleTargetHit.InnerSingleton, Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradGameplayAbilityTargetData_SingleTargetHit.InnerSingleton;
}
// End ScriptStruct FGradGameplayAbilityTargetData_SingleTargetHit

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_GradGameplayAbilityTargetData_SingleTarget_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradGameplayAbilityTargetData_SingleTargetHit::StaticStruct, Z_Construct_UScriptStruct_FGradGameplayAbilityTargetData_SingleTargetHit_Statics::NewStructOps, TEXT("GradGameplayAbilityTargetData_SingleTargetHit"), &Z_Registration_Info_UScriptStruct_GradGameplayAbilityTargetData_SingleTargetHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradGameplayAbilityTargetData_SingleTargetHit), 2624790755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_GradGameplayAbilityTargetData_SingleTarget_h_1790136313(TEXT("/Script/GradGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_GradGameplayAbilityTargetData_SingleTarget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_GradGameplayAbilityTargetData_SingleTarget_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
