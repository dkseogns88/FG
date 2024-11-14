// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Input/GradInputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradInputConfig() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GRADGAME_API UClass* Z_Construct_UClass_UGradInputConfig();
GRADGAME_API UClass* Z_Construct_UClass_UGradInputConfig_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradInputAction();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradInputAction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradInputAction;
class UScriptStruct* FGradInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradInputAction, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_GradInputAction.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradInputAction>()
{
	return FGradInputAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradInputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GradInputAction\xef\xbf\xbd\xef\xbf\xbd GameplayTag\xef\xbf\xbd\xef\xbf\xbd InputAction\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Input/GradInputConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GradInputAction\xef\xbf\xbd\xef\xbf\xbd GameplayTag\xef\xbf\xbd\xef\xbf\xbd InputAction\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "GradInputAction" },
		{ "ModuleRelativePath", "Input/GradInputConfig.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "GradInputAction" },
		{ "ModuleRelativePath", "Input/GradInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradInputAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGradInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradInputAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradInputAction_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradInputAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradInputAction",
	Z_Construct_UScriptStruct_FGradInputAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradInputAction_Statics::PropPointers),
	sizeof(FGradInputAction),
	alignof(FGradInputAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradInputAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradInputAction()
{
	if (!Z_Registration_Info_UScriptStruct_GradInputAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradInputAction.InnerSingleton, Z_Construct_UScriptStruct_FGradInputAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradInputAction.InnerSingleton;
}
// End ScriptStruct FGradInputAction

// Begin Class UGradInputConfig
void UGradInputConfig::StaticRegisterNativesUGradInputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradInputConfig);
UClass* Z_Construct_UClass_UGradInputConfig_NoRegister()
{
	return UGradInputConfig::StaticClass();
}
struct Z_Construct_UClass_UGradInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Input/GradInputConfig.h" },
		{ "ModuleRelativePath", "Input/GradInputConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "GradInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * member variables\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Input/GradInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "member variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "GradInputConfig" },
		{ "ModuleRelativePath", "Input/GradInputConfig.h" },
		{ "TitleProperty", "InputAction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradInputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradInputAction, METADATA_PARAMS(0, nullptr) }; // 3258919264
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradInputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 3258919264
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradInputAction, METADATA_PARAMS(0, nullptr) }; // 3258919264
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 3258919264
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInputConfig_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradInputConfig_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradInputConfig_Statics::ClassParams = {
	&UGradInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradInputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradInputConfig()
{
	if (!Z_Registration_Info_UClass_UGradInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradInputConfig.OuterSingleton, Z_Construct_UClass_UGradInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradInputConfig.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradInputConfig>()
{
	return UGradInputConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradInputConfig);
UGradInputConfig::~UGradInputConfig() {}
// End Class UGradInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradInputAction::StaticStruct, Z_Construct_UScriptStruct_FGradInputAction_Statics::NewStructOps, TEXT("GradInputAction"), &Z_Registration_Info_UScriptStruct_GradInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradInputAction), 3258919264U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradInputConfig, UGradInputConfig::StaticClass, TEXT("UGradInputConfig"), &Z_Registration_Info_UClass_UGradInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradInputConfig), 137626868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputConfig_h_2204867149(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
