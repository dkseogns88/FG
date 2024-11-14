// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Input/GradMappableConfigPair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradMappableConfigPair() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradMappableConfigPair();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradMappableConfigPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradMappableConfigPair;
class UScriptStruct* FGradMappableConfigPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradMappableConfigPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradMappableConfigPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradMappableConfigPair, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradMappableConfigPair"));
	}
	return Z_Registration_Info_UScriptStruct_GradMappableConfigPair.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradMappableConfigPair>()
{
	return FGradMappableConfigPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Input/GradMappableConfigPair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "GradMappableConfigPair" },
		{ "ModuleRelativePath", "Input/GradMappableConfigPair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldActivateAutomatically_MetaData[] = {
		{ "Category", "GradMappableConfigPair" },
		{ "ModuleRelativePath", "Input/GradMappableConfigPair.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Config;
	static void NewProp_bShouldActivateAutomatically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldActivateAutomatically;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradMappableConfigPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradMappableConfigPair, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
void Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_SetBit(void* Obj)
{
	((FGradMappableConfigPair*)Obj)->bShouldActivateAutomatically = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically = { "bShouldActivateAutomatically", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGradMappableConfigPair), &Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldActivateAutomatically_MetaData), NewProp_bShouldActivateAutomatically_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradMappableConfigPair",
	Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::PropPointers),
	sizeof(FGradMappableConfigPair),
	alignof(FGradMappableConfigPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradMappableConfigPair()
{
	if (!Z_Registration_Info_UScriptStruct_GradMappableConfigPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradMappableConfigPair.InnerSingleton, Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradMappableConfigPair.InnerSingleton;
}
// End ScriptStruct FGradMappableConfigPair

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Input_GradMappableConfigPair_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradMappableConfigPair::StaticStruct, Z_Construct_UScriptStruct_FGradMappableConfigPair_Statics::NewStructOps, TEXT("GradMappableConfigPair"), &Z_Registration_Info_UScriptStruct_GradMappableConfigPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradMappableConfigPair), 2730142954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Input_GradMappableConfigPair_h_368676066(TEXT("/Script/GradGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Input_GradMappableConfigPair_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Input_GradMappableConfigPair_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
