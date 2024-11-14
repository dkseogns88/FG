// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/UI/GradActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradActivatableWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
GRADGAME_API UClass* Z_Construct_UClass_UGradActivatableWidget();
GRADGAME_API UClass* Z_Construct_UClass_UGradActivatableWidget_NoRegister();
GRADGAME_API UEnum* Z_Construct_UEnum_GradGame_EGradWidgetInputMode();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Enum EGradWidgetInputMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGradWidgetInputMode;
static UEnum* EGradWidgetInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGradWidgetInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGradWidgetInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GradGame_EGradWidgetInputMode, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("EGradWidgetInputMode"));
	}
	return Z_Registration_Info_UEnum_EGradWidgetInputMode.OuterSingleton;
}
template<> GRADGAME_API UEnum* StaticEnum<EGradWidgetInputMode>()
{
	return EGradWidgetInputMode_StaticEnum();
}
struct Z_Construct_UEnum_GradGame_EGradWidgetInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Input \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "Default.Name", "EGradWidgetInputMode::Default" },
		{ "Game.Name", "EGradWidgetInputMode::Game" },
		{ "GameAndMenu.Name", "EGradWidgetInputMode::GameAndMenu" },
		{ "Menu.Name", "EGradWidgetInputMode::Menu" },
		{ "ModuleRelativePath", "UI/GradActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGradWidgetInputMode::Default", (int64)EGradWidgetInputMode::Default },
		{ "EGradWidgetInputMode::GameAndMenu", (int64)EGradWidgetInputMode::GameAndMenu },
		{ "EGradWidgetInputMode::Game", (int64)EGradWidgetInputMode::Game },
		{ "EGradWidgetInputMode::Menu", (int64)EGradWidgetInputMode::Menu },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GradGame_EGradWidgetInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	"EGradWidgetInputMode",
	"EGradWidgetInputMode",
	Z_Construct_UEnum_GradGame_EGradWidgetInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradWidgetInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradWidgetInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GradGame_EGradWidgetInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GradGame_EGradWidgetInputMode()
{
	if (!Z_Registration_Info_UEnum_EGradWidgetInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGradWidgetInputMode.InnerSingleton, Z_Construct_UEnum_GradGame_EGradWidgetInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGradWidgetInputMode.InnerSingleton;
}
// End Enum EGradWidgetInputMode

// Begin Class UGradActivatableWidget
void UGradActivatableWidget::StaticRegisterNativesUGradActivatableWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradActivatableWidget);
UClass* Z_Construct_UClass_UGradActivatableWidget_NoRegister()
{
	return UGradActivatableWidget::StaticClass();
}
struct Z_Construct_UClass_UGradActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd.\n * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc6\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd:\n * 1. Widget Layout\xef\xbf\xbd\xef\xbf\xbd Widget Instance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xeb\xb5\xb5\xef\xbf\xbd\xef\xbf\xbd CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd Layout \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd:\n *    - \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd Activate/Deactivate\n *    - WidgetTree\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xd7\xb4\xef\xbf\xbd(== Activate/Deactivate)\n * 2. Input(Mouse or Keyboard etc...) \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "UI/GradActivatableWidget.h" },
		{ "ModuleRelativePath", "UI/GradActivatableWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd.\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc6\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd:\n1. Widget Layout\xef\xbf\xbd\xef\xbf\xbd Widget Instance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xeb\xb5\xb5\xef\xbf\xbd\xef\xbf\xbd CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd Layout \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd:\n   - \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd Activate/Deactivate\n   - WidgetTree\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xd7\xb4\xef\xbf\xbd(== Activate/Deactivate)\n2. Input(Mouse or Keyboard etc...) \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "UI/GradActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMouseCaptureMode_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "UI/GradActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameMouseCaptureMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameMouseCaptureMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGradActivatableWidget_Statics::NewProp_InputConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGradActivatableWidget_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradActivatableWidget, InputConfig), Z_Construct_UEnum_GradGame_EGradWidgetInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) }; // 523812019
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGradActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGradActivatableWidget_Statics::NewProp_GameMouseCaptureMode = { "GameMouseCaptureMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradActivatableWidget, GameMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMouseCaptureMode_MetaData), NewProp_GameMouseCaptureMode_MetaData) }; // 2576598572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradActivatableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradActivatableWidget_Statics::NewProp_InputConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradActivatableWidget_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradActivatableWidget_Statics::NewProp_GameMouseCaptureMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradActivatableWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradActivatableWidget_Statics::ClassParams = {
	&UGradActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradActivatableWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradActivatableWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradActivatableWidget()
{
	if (!Z_Registration_Info_UClass_UGradActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradActivatableWidget.OuterSingleton, Z_Construct_UClass_UGradActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradActivatableWidget.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradActivatableWidget>()
{
	return UGradActivatableWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradActivatableWidget);
UGradActivatableWidget::~UGradActivatableWidget() {}
// End Class UGradActivatableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradActivatableWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGradWidgetInputMode_StaticEnum, TEXT("EGradWidgetInputMode"), &Z_Registration_Info_UEnum_EGradWidgetInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 523812019U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradActivatableWidget, UGradActivatableWidget::StaticClass, TEXT("UGradActivatableWidget"), &Z_Registration_Info_UClass_UGradActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradActivatableWidget), 2998451849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradActivatableWidget_h_957764595(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradActivatableWidget_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradActivatableWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradActivatableWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
