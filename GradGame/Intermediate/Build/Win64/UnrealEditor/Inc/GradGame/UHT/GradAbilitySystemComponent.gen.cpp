// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/GradAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySystemComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilityTagRelationshipMapping_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradAbilitySystemComponent
void UGradAbilitySystemComponent::StaticRegisterNativesUGradAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradAbilitySystemComponent);
UClass* Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister()
{
	return UGradAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UGradAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/GradAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set, this table is used to look up tag relationships for activate and cancel\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/GradAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set, this table is used to look up tag relationships for activate and cancel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradAbilitySystemComponent, TagRelationshipMapping), Z_Construct_UClass_UGradAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradAbilitySystemComponent_Statics::NewProp_TagRelationshipMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradAbilitySystemComponent_Statics::ClassParams = {
	&UGradAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradAbilitySystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilitySystemComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UGradAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGradAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradAbilitySystemComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradAbilitySystemComponent>()
{
	return UGradAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradAbilitySystemComponent);
UGradAbilitySystemComponent::~UGradAbilitySystemComponent() {}
// End Class UGradAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradAbilitySystemComponent, UGradAbilitySystemComponent::StaticClass, TEXT("UGradAbilitySystemComponent"), &Z_Registration_Info_UClass_UGradAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradAbilitySystemComponent), 1043504871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySystemComponent_h_3877820785(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
