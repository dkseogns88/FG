// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Character/GradPawnExtensionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradPawnExtensionComponent() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnData_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnExtensionComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnExtensionComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradPawnExtensionComponent
void UGradPawnExtensionComponent::StaticRegisterNativesUGradPawnExtensionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradPawnExtensionComponent);
UClass* Z_Construct_UClass_UGradPawnExtensionComponent_NoRegister()
{
	return UGradPawnExtensionComponent::StaticClass();
}
struct Z_Construct_UClass_UGradPawnExtensionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n * - \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xb8\xa6 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/GradPawnExtensionComponent.h" },
		{ "ModuleRelativePath", "Character/GradPawnExtensionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n- \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xb8\xa6 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "Category", "Grad|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pawn\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Character/GradPawnExtensionComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AbilitySystemComponent \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/GradPawnExtensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AbilitySystemComponent \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradPawnExtensionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradPawnExtensionComponent_Statics::NewProp_PawnData = { "PawnData", nullptr, (EPropertyFlags)0x0114000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnExtensionComponent, PawnData), Z_Construct_UClass_UGradPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnExtensionComponent, AbilitySystemComponent), Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradPawnExtensionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnExtensionComponent_Statics::NewProp_PawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnExtensionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradPawnExtensionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnExtensionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGradPawnExtensionComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UGradPawnExtensionComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradPawnExtensionComponent_Statics::ClassParams = {
	&UGradPawnExtensionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradPawnExtensionComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnExtensionComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnExtensionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradPawnExtensionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradPawnExtensionComponent()
{
	if (!Z_Registration_Info_UClass_UGradPawnExtensionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradPawnExtensionComponent.OuterSingleton, Z_Construct_UClass_UGradPawnExtensionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradPawnExtensionComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradPawnExtensionComponent>()
{
	return UGradPawnExtensionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradPawnExtensionComponent);
UGradPawnExtensionComponent::~UGradPawnExtensionComponent() {}
// End Class UGradPawnExtensionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradPawnExtensionComponent, UGradPawnExtensionComponent::StaticClass, TEXT("UGradPawnExtensionComponent"), &Z_Registration_Info_UClass_UGradPawnExtensionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradPawnExtensionComponent), 4191769209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_2785858101(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
