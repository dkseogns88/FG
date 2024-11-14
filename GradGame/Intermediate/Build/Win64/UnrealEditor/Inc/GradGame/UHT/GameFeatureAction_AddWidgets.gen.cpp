// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/GameFeatures/GameFeatureAction_AddWidgets.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddWidgets() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GRADGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets();
GRADGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradHUDElementEntry();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradHUDLayoutRequest();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradHUDLayoutRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradHUDLayoutRequest;
class UScriptStruct* FGradHUDLayoutRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradHUDLayoutRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradHUDLayoutRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradHUDLayoutRequest, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradHUDLayoutRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GradHUDLayoutRequest.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradHUDLayoutRequest>()
{
	return FGradHUDLayoutRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** HUD\xef\xbf\xbd\xef\xbf\xbd Layout \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb */" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD\xef\xbf\xbd\xef\xbf\xbd Layout \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutClass_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UI\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xc6\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xc6\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CommonActivatableWidget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerID_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd5\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb4\xef\xbf\xbd PrimaryGameLayout\xef\xbf\xbd\xef\xbf\xbd LayerID\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd5\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb4\xef\xbf\xbd PrimaryGameLayout\xef\xbf\xbd\xef\xbf\xbd LayerID\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LayoutClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradHUDLayoutRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::NewProp_LayoutClass = { "LayoutClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradHUDLayoutRequest, LayoutClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutClass_MetaData), NewProp_LayoutClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::NewProp_LayerID = { "LayerID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradHUDLayoutRequest, LayerID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerID_MetaData), NewProp_LayerID_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::NewProp_LayoutClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::NewProp_LayerID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradHUDLayoutRequest",
	Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::PropPointers),
	sizeof(FGradHUDLayoutRequest),
	alignof(FGradHUDLayoutRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradHUDLayoutRequest()
{
	if (!Z_Registration_Info_UScriptStruct_GradHUDLayoutRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradHUDLayoutRequest.InnerSingleton, Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradHUDLayoutRequest.InnerSingleton;
}
// End ScriptStruct FGradHUDLayoutRequest

// Begin ScriptStruct FGradHUDElementEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradHUDElementEntry;
class UScriptStruct* FGradHUDElementEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradHUDElementEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradHUDElementEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradHUDElementEntry, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradHUDElementEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GradHUDElementEntry.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradHUDElementEntry>()
{
	return FGradHUDElementEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GradHUDLayout \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd Widget Class */" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GradHUDLayout \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd Widget Class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotID_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** SlotID\xef\xbf\xbd\xef\xbf\xbd GradHUDLayoutRequest\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb8\xef\xbf\xbd LayoutClass\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xef\xbf\xbd Slot(GameplayTag)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SlotID\xef\xbf\xbd\xef\xbf\xbd GradHUDLayoutRequest\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb8\xef\xbf\xbd LayoutClass\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xef\xbf\xbd Slot(GameplayTag)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradHUDElementEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradHUDElementEntry, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradHUDElementEntry, SlotID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotID_MetaData), NewProp_SlotID_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::NewProp_SlotID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradHUDElementEntry",
	Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::PropPointers),
	sizeof(FGradHUDElementEntry),
	alignof(FGradHUDElementEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradHUDElementEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GradHUDElementEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradHUDElementEntry.InnerSingleton, Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradHUDElementEntry.InnerSingleton;
}
// End ScriptStruct FGradHUDElementEntry

// Begin Class UGameFeatureAction_AddWidgets
void UGameFeatureAction_AddWidgets::StaticRegisterNativesUGameFeatureAction_AddWidgets()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddWidgets);
UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister()
{
	return UGameFeatureAction_AddWidgets::StaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * GFA_AddWidget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Layout\xef\xbf\xbd\xef\xbf\xbd Layout \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb8\xef\xbf\xbd Widget \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd Widgets\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xef\xbf\xbd\n\x09 */" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GFA_AddWidget\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd Layout\xef\xbf\xbd\xef\xbf\xbd Layout \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb8\xef\xbf\xbd Widget \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd Widgets\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widgets_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layout_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Widgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Widgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddWidgets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_Inner = { "Layout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradHUDLayoutRequest, METADATA_PARAMS(0, nullptr) }; // 1357840182
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddWidgets, Layout), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 1357840182
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_Inner = { "Widgets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradHUDElementEntry, METADATA_PARAMS(0, nullptr) }; // 1793727501
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets = { "Widgets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddWidgets, Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widgets_MetaData), NewProp_Widgets_MetaData) }; // 1793727501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::ClassParams = {
	&UGameFeatureAction_AddWidgets::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGameFeatureAction_AddWidgets>()
{
	return UGameFeatureAction_AddWidgets::StaticClass();
}
UGameFeatureAction_AddWidgets::UGameFeatureAction_AddWidgets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddWidgets);
UGameFeatureAction_AddWidgets::~UGameFeatureAction_AddWidgets() {}
// End Class UGameFeatureAction_AddWidgets

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddWidgets_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradHUDLayoutRequest::StaticStruct, Z_Construct_UScriptStruct_FGradHUDLayoutRequest_Statics::NewStructOps, TEXT("GradHUDLayoutRequest"), &Z_Registration_Info_UScriptStruct_GradHUDLayoutRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradHUDLayoutRequest), 1357840182U) },
		{ FGradHUDElementEntry::StaticStruct, Z_Construct_UScriptStruct_FGradHUDElementEntry_Statics::NewStructOps, TEXT("GradHUDElementEntry"), &Z_Registration_Info_UScriptStruct_GradHUDElementEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradHUDElementEntry), 1793727501U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddWidgets, UGameFeatureAction_AddWidgets::StaticClass, TEXT("UGameFeatureAction_AddWidgets"), &Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddWidgets), 2974764579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddWidgets_h_484374195(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddWidgets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddWidgets_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddWidgets_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameFeatures_GameFeatureAction_AddWidgets_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
