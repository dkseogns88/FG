// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Network/GradNetCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradNetCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GRADGAME_API UClass* Z_Construct_UClass_AGradNetCharacter();
GRADGAME_API UClass* Z_Construct_UClass_AGradNetCharacter_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister();
GRADGAME_API UEnum* Z_Construct_UEnum_GradGame_EGradAbilityDashDirection();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class AGradNetCharacter Function K2_NetOnEquipped
static FName NAME_AGradNetCharacter_K2_NetOnEquipped = FName(TEXT("K2_NetOnEquipped"));
void AGradNetCharacter::K2_NetOnEquipped()
{
	ProcessEvent(FindFunctionChecked(NAME_AGradNetCharacter_K2_NetOnEquipped),NULL);
}
struct Z_Construct_UFunction_AGradNetCharacter_K2_NetOnEquipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "DisplayName", "NetOnEquipped" },
		{ "ModuleRelativePath", "Network/GradNetCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGradNetCharacter_K2_NetOnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGradNetCharacter, nullptr, "K2_NetOnEquipped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGradNetCharacter_K2_NetOnEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGradNetCharacter_K2_NetOnEquipped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGradNetCharacter_K2_NetOnEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGradNetCharacter_K2_NetOnEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AGradNetCharacter Function K2_NetOnEquipped

// Begin Class AGradNetCharacter
void AGradNetCharacter::StaticRegisterNativesAGradNetCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGradNetCharacter);
UClass* Z_Construct_UClass_AGradNetCharacter_NoRegister()
{
	return AGradNetCharacter::StaticClass();
}
struct Z_Construct_UClass_AGradNetCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Network/GradNetCharacter.h" },
		{ "ModuleRelativePath", "Network/GradNetCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Grad|NetCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Network/GradNetCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDirection_MetaData[] = {
		{ "Category", "GradNetCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dash\n" },
#endif
		{ "ModuleRelativePath", "Network/GradNetCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dash" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[] = {
		{ "Category", "GradNetCharacter" },
		{ "ModuleRelativePath", "Network/GradNetCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DashDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DashDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGradNetCharacter_K2_NetOnEquipped, "K2_NetOnEquipped" }, // 2968497848
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradNetCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGradNetCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGradNetCharacter, AbilitySystemComponent), Z_Construct_UClass_UGradAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGradNetCharacter_Statics::NewProp_DashDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGradNetCharacter_Statics::NewProp_DashDirection = { "DashDirection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGradNetCharacter, DashDirection), Z_Construct_UEnum_GradGame_EGradAbilityDashDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashDirection_MetaData), NewProp_DashDirection_MetaData) }; // 2541308124
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGradNetCharacter_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGradNetCharacter, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirection_MetaData), NewProp_MoveDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGradNetCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradNetCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradNetCharacter_Statics::NewProp_DashDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradNetCharacter_Statics::NewProp_DashDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradNetCharacter_Statics::NewProp_MoveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradNetCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGradNetCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradNetCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradNetCharacter_Statics::ClassParams = {
	&AGradNetCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGradNetCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGradNetCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradNetCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradNetCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGradNetCharacter()
{
	if (!Z_Registration_Info_UClass_AGradNetCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradNetCharacter.OuterSingleton, Z_Construct_UClass_AGradNetCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradNetCharacter.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<AGradNetCharacter>()
{
	return AGradNetCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGradNetCharacter);
AGradNetCharacter::~AGradNetCharacter() {}
// End Class AGradNetCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_GradNetCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradNetCharacter, AGradNetCharacter::StaticClass, TEXT("AGradNetCharacter"), &Z_Registration_Info_UClass_AGradNetCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradNetCharacter), 368757360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_GradNetCharacter_h_2111385675(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_GradNetCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_GradNetCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
