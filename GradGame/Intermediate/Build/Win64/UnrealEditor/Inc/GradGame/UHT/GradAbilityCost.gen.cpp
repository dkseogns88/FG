// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/Abilities/GradAbilityCost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradAbilityCost() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilityCost();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilityCost_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradAbilityCost
void UGradAbilityCost::StaticRegisterNativesUGradAbilityCost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradAbilityCost);
UClass* Z_Construct_UClass_UGradAbilityCost_NoRegister()
{
	return UGradAbilityCost::StaticClass();
}
struct Z_Construct_UClass_UGradAbilityCost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/GradAbilityCost.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradAbilityCost.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradAbilityCost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradAbilityCost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilityCost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradAbilityCost_Statics::ClassParams = {
	&UGradAbilityCost::StaticClass,
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
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilityCost_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradAbilityCost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradAbilityCost()
{
	if (!Z_Registration_Info_UClass_UGradAbilityCost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradAbilityCost.OuterSingleton, Z_Construct_UClass_UGradAbilityCost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradAbilityCost.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradAbilityCost>()
{
	return UGradAbilityCost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradAbilityCost);
UGradAbilityCost::~UGradAbilityCost() {}
// End Class UGradAbilityCost

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradAbilityCost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradAbilityCost, UGradAbilityCost::StaticClass, TEXT("UGradAbilityCost"), &Z_Registration_Info_UClass_UGradAbilityCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradAbilityCost), 4140908580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradAbilityCost_h_704175032(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradAbilityCost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradAbilityCost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
