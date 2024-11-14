// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/Executions/GradDamageExecution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradDamageExecution() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
GRADGAME_API UClass* Z_Construct_UClass_UGradDamageExecution();
GRADGAME_API UClass* Z_Construct_UClass_UGradDamageExecution_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradDamageExecution
void UGradDamageExecution::StaticRegisterNativesUGradDamageExecution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradDamageExecution);
UClass* Z_Construct_UClass_UGradDamageExecution_NoRegister()
{
	return UGradDamageExecution::StaticClass();
}
struct Z_Construct_UClass_UGradDamageExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGradDamageExecution\n *\n *\x09""Execution used by gameplay effects to apply damage to the health attributes.\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Executions/GradDamageExecution.h" },
		{ "ModuleRelativePath", "AbilitySystem/Executions/GradDamageExecution.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGradDamageExecution\n\n    Execution used by gameplay effects to apply damage to the health attributes." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradDamageExecution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradDamageExecution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradDamageExecution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradDamageExecution_Statics::ClassParams = {
	&UGradDamageExecution::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradDamageExecution_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradDamageExecution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradDamageExecution()
{
	if (!Z_Registration_Info_UClass_UGradDamageExecution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradDamageExecution.OuterSingleton, Z_Construct_UClass_UGradDamageExecution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradDamageExecution.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradDamageExecution>()
{
	return UGradDamageExecution::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradDamageExecution);
UGradDamageExecution::~UGradDamageExecution() {}
// End Class UGradDamageExecution

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradDamageExecution, UGradDamageExecution::StaticClass, TEXT("UGradDamageExecution"), &Z_Registration_Info_UClass_UGradDamageExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradDamageExecution), 2507098256U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_3719162795(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
