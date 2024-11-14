// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Character/GradCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradCharacter() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_AGradCharacter();
GRADGAME_API UClass* Z_Construct_UClass_AGradCharacter_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradHealthComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnExtensionComponent_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class AGradCharacter
void AGradCharacter::StaticRegisterNativesAGradCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGradCharacter);
UClass* Z_Construct_UClass_AGradCharacter_NoRegister()
{
	return AGradCharacter::StaticClass();
}
struct Z_Construct_UClass_AGradCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/GradCharacter.h" },
		{ "ModuleRelativePath", "Character/GradCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnExtComponent_MetaData[] = {
		{ "Category", "Grad|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/GradCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Grad|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/GradCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Grad|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/GradCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Grad|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/GradCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnExtComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGradCharacter_Statics::NewProp_PawnExtComponent = { "PawnExtComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGradCharacter, PawnExtComponent), Z_Construct_UClass_UGradPawnExtensionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnExtComponent_MetaData), NewProp_PawnExtComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGradCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGradCharacter, CameraComponent), Z_Construct_UClass_UGradCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGradCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGradCharacter, AbilitySystemComponent), Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGradCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGradCharacter, HealthComponent), Z_Construct_UClass_UGradHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGradCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradCharacter_Statics::NewProp_PawnExtComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradCharacter_Statics::NewProp_HealthComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGradCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradCharacter_Statics::ClassParams = {
	&AGradCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGradCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGradCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGradCharacter()
{
	if (!Z_Registration_Info_UClass_AGradCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradCharacter.OuterSingleton, Z_Construct_UClass_AGradCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradCharacter.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<AGradCharacter>()
{
	return AGradCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGradCharacter);
AGradCharacter::~AGradCharacter() {}
// End Class AGradCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradCharacter, AGradCharacter::StaticClass, TEXT("AGradCharacter"), &Z_Registration_Info_UClass_AGradCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradCharacter), 972030424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_2642142096(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
