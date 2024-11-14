// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/Abilities/GradGameplayAbility_Death.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameplayAbility_Death() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility_Death();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameplayAbility_Death_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradGameplayAbility_Death
void UGradGameplayAbility_Death::StaticRegisterNativesUGradGameplayAbility_Death()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradGameplayAbility_Death);
UClass* Z_Construct_UClass_UGradGameplayAbility_Death_NoRegister()
{
	return UGradGameplayAbility_Death::StaticClass();
}
struct Z_Construct_UClass_UGradGameplayAbility_Death_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UGradGameplayAbility_Death\n *\n *\x09Gameplay ability used for handling death.\n *\x09""Ability is activated automatically via the \"GameplayEvent.Death\" ability trigger tag.\n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/GradGameplayAbility_Death.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility_Death.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UGradGameplayAbility_Death\n\n    Gameplay ability used for handling death.\n    Ability is activated automatically via the \"GameplayEvent.Death\" ability trigger tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartDeath_MetaData[] = {
		{ "Category", "Grad|Death" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If enabled, the ability will automatically call StartDeath.  FinishDeath is always called when the ability ends if the death was started.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Abilities/GradGameplayAbility_Death.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, the ability will automatically call StartDeath.  FinishDeath is always called when the ability ends if the death was started." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutoStartDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradGameplayAbility_Death>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGradGameplayAbility_Death_Statics::NewProp_bAutoStartDeath_SetBit(void* Obj)
{
	((UGradGameplayAbility_Death*)Obj)->bAutoStartDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGradGameplayAbility_Death_Statics::NewProp_bAutoStartDeath = { "bAutoStartDeath", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGradGameplayAbility_Death), &Z_Construct_UClass_UGradGameplayAbility_Death_Statics::NewProp_bAutoStartDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStartDeath_MetaData), NewProp_bAutoStartDeath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradGameplayAbility_Death_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradGameplayAbility_Death_Statics::NewProp_bAutoStartDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_Death_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradGameplayAbility_Death_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_Death_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradGameplayAbility_Death_Statics::ClassParams = {
	&UGradGameplayAbility_Death::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradGameplayAbility_Death_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_Death_Statics::PropPointers),
	0,
	0x008000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameplayAbility_Death_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradGameplayAbility_Death_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradGameplayAbility_Death()
{
	if (!Z_Registration_Info_UClass_UGradGameplayAbility_Death.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradGameplayAbility_Death.OuterSingleton, Z_Construct_UClass_UGradGameplayAbility_Death_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradGameplayAbility_Death.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradGameplayAbility_Death>()
{
	return UGradGameplayAbility_Death::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradGameplayAbility_Death);
UGradGameplayAbility_Death::~UGradGameplayAbility_Death() {}
// End Class UGradGameplayAbility_Death

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_Death_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradGameplayAbility_Death, UGradGameplayAbility_Death::StaticClass, TEXT("UGradGameplayAbility_Death"), &Z_Registration_Info_UClass_UGradGameplayAbility_Death, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradGameplayAbility_Death), 3062876098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_Death_h_1687931328(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_Death_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_Death_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
