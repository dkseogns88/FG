// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIExtension/Public/UIExtensionSystem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIExtensionSystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionHandleFunctions();
UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionHandleFunctions_NoRegister();
UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions();
UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions_NoRegister();
UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionSubsystem();
UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionSubsystem_NoRegister();
UIEXTENSION_API UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionAction();
UIEXTENSION_API UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch();
UIEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionHandle();
UIEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionPointHandle();
UIEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionRequest();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIExtension();
// End Cross Module References

// Begin Enum EUIExtensionPointMatch
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIExtensionPointMatch;
static UEnum* EUIExtensionPointMatch_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUIExtensionPointMatch.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUIExtensionPointMatch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("EUIExtensionPointMatch"));
	}
	return Z_Registration_Info_UEnum_EUIExtensionPointMatch.OuterSingleton;
}
template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionPointMatch>()
{
	return EUIExtensionPointMatch_StaticEnum();
}
struct Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ExtensionPoint GameplayTag \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ExactMatch.Comment", "/** A.B\xef\xbf\xbd\xef\xbf\xbd A.B.C\xef\xbf\xbd\xef\xbf\xbd ***\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*** \xef\xbf\xbd\xca\xb4\xc2\xb4\xef\xbf\xbd */" },
		{ "ExactMatch.Name", "EUIExtensionPointMatch::ExactMatch" },
		{ "ExactMatch.ToolTip", "A.B\xef\xbf\xbd\xef\xbf\xbd A.B.C\xef\xbf\xbd\xef\xbf\xbd ***\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*** \xef\xbf\xbd\xca\xb4\xc2\xb4\xef\xbf\xbd" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
		{ "PartialMatch.Comment", "/** A.B\xef\xbf\xbd\xef\xbf\xbd A.B.C\xef\xbf\xbd\xef\xbf\xbd ***\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*** \xef\xbf\xbd\xd1\xb4\xef\xbf\xbd */" },
		{ "PartialMatch.Name", "EUIExtensionPointMatch::PartialMatch" },
		{ "PartialMatch.ToolTip", "A.B\xef\xbf\xbd\xef\xbf\xbd A.B.C\xef\xbf\xbd\xef\xbf\xbd ***\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd*** \xef\xbf\xbd\xd1\xb4\xef\xbf\xbd" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ExtensionPoint GameplayTag \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUIExtensionPointMatch::ExactMatch", (int64)EUIExtensionPointMatch::ExactMatch },
		{ "EUIExtensionPointMatch::PartialMatch", (int64)EUIExtensionPointMatch::PartialMatch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIExtension,
	nullptr,
	"EUIExtensionPointMatch",
	"EUIExtensionPointMatch",
	Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch()
{
	if (!Z_Registration_Info_UEnum_EUIExtensionPointMatch.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIExtensionPointMatch.InnerSingleton, Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUIExtensionPointMatch.InnerSingleton;
}
// End Enum EUIExtensionPointMatch

// Begin Enum EUIExtensionAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIExtensionAction;
static UEnum* EUIExtensionAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUIExtensionAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUIExtensionAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIExtension_EUIExtensionAction, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("EUIExtensionAction"));
	}
	return Z_Registration_Info_UEnum_EUIExtensionAction.OuterSingleton;
}
template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionAction>()
{
	return EUIExtensionAction_StaticEnum();
}
struct Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Added.Name", "EUIExtensionAction::Added" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
		{ "Removed.Name", "EUIExtensionAction::Removed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUIExtensionAction::Added", (int64)EUIExtensionAction::Added },
		{ "EUIExtensionAction::Removed", (int64)EUIExtensionAction::Removed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UIExtension,
	nullptr,
	"EUIExtensionAction",
	"EUIExtensionAction",
	Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionAction()
{
	if (!Z_Registration_Info_UEnum_EUIExtensionAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIExtensionAction.InnerSingleton, Z_Construct_UEnum_UIExtension_EUIExtensionAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUIExtensionAction.InnerSingleton;
}
// End Enum EUIExtensionAction

// Begin ScriptStruct FUIExtensionHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIExtensionHandle;
class UScriptStruct* FUIExtensionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIExtensionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIExtensionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIExtensionHandle, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("UIExtensionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_UIExtensionHandle.OuterSingleton;
}
template<> UIEXTENSION_API UScriptStruct* StaticStruct<FUIExtensionHandle>()
{
	return FUIExtensionHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIExtensionHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIExtensionHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
	nullptr,
	&NewStructOps,
	"UIExtensionHandle",
	nullptr,
	0,
	sizeof(FUIExtensionHandle),
	alignof(FUIExtensionHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionHandle()
{
	if (!Z_Registration_Info_UScriptStruct_UIExtensionHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIExtensionHandle.InnerSingleton, Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIExtensionHandle.InnerSingleton;
}
// End ScriptStruct FUIExtensionHandle

// Begin ScriptStruct FUIExtensionRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIExtensionRequest;
class UScriptStruct* FUIExtensionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIExtensionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIExtensionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIExtensionRequest, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("UIExtensionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_UIExtensionRequest.OuterSingleton;
}
template<> UIEXTENSION_API UScriptStruct* StaticStruct<FUIExtensionRequest>()
{
	return FUIExtensionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIExtensionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionHandle_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UIExtensionPoint\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Extension */" },
#endif
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UIExtensionPoint\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Extension" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionPointTag_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extension\xef\xbf\xbd\xef\xbf\xbd Slot GameplayTag */" },
#endif
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extension\xef\xbf\xbd\xef\xbf\xbd Slot GameplayTag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** WidgetClass\xef\xbf\xbd\xef\xbf\xbd FUIExtension\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WidgetClass\xef\xbf\xbd\xef\xbf\xbd FUIExtension\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FUIExtension\xef\xbf\xbd\xef\xbf\xbd ContextObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (UCommonLocalPlayer, UModularPlayerState, ... == UIExtension\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Instigator) */" },
#endif
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FUIExtension\xef\xbf\xbd\xef\xbf\xbd ContextObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xde\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (UCommonLocalPlayer, UModularPlayerState, ... == UIExtension\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Instigator)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "UIExtensionRequest" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIExtensionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionHandle = { "ExtensionHandle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, ExtensionHandle), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionHandle_MetaData), NewProp_ExtensionHandle_MetaData) }; // 1926367713
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionPointTag_MetaData), NewProp_ExtensionPointTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIExtensionRequest, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ExtensionPointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
	nullptr,
	&NewStructOps,
	"UIExtensionRequest",
	Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::PropPointers),
	sizeof(FUIExtensionRequest),
	alignof(FUIExtensionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_UIExtensionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIExtensionRequest.InnerSingleton, Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIExtensionRequest.InnerSingleton;
}
// End ScriptStruct FUIExtensionRequest

// Begin ScriptStruct FUIExtensionPointHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIExtensionPointHandle;
class UScriptStruct* FUIExtensionPointHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIExtensionPointHandle, (UObject*)Z_Construct_UPackage__Script_UIExtension(), TEXT("UIExtensionPointHandle"));
	}
	return Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.OuterSingleton;
}
template<> UIEXTENSION_API UScriptStruct* StaticStruct<FUIExtensionPointHandle>()
{
	return FUIExtensionPointHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIExtensionPointHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
	nullptr,
	&NewStructOps,
	"UIExtensionPointHandle",
	nullptr,
	0,
	sizeof(FUIExtensionPointHandle),
	alignof(FUIExtensionPointHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionPointHandle()
{
	if (!Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.InnerSingleton, Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIExtensionPointHandle.InnerSingleton;
}
// End ScriptStruct FUIExtensionPointHandle

// Begin Class UUIExtensionSubsystem Function K2_RegisterExtensionAsWidgetForContext
struct Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics
{
	struct UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms
	{
		FGameplayTag ExtensionPointTag;
		TSubclassOf<UUserWidget> WidgetClass;
		UObject* ContextObject;
		int32 Priority;
		FUIExtensionHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Registers the widget (as data) for a specific player.  This means the extension points will receive a UIExtensionForPlayer data object\n * that they can look at to determine if it's for whatever they consider their player.\n */" },
#endif
		{ "CPP_Default_Priority", "-1" },
		{ "DisplayName", "Register Extension (Widget For Context)" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers the widget (as data) for a specific player.  This means the extension points will receive a UIExtensionForPlayer data object\nthat they can look at to determine if it's for whatever they consider their player." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, Priority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 1926367713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ExtensionPointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionSubsystem, nullptr, "K2_RegisterExtensionAsWidgetForContext", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::UIExtensionSubsystem_eventK2_RegisterExtensionAsWidgetForContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIExtensionSubsystem::execK2_RegisterExtensionAsWidgetForContext)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_ExtensionPointTag);
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUIExtensionHandle*)Z_Param__Result=P_THIS->K2_RegisterExtensionAsWidgetForContext(Z_Param_ExtensionPointTag,Z_Param_WidgetClass,Z_Param_ContextObject,Z_Param_Priority);
	P_NATIVE_END;
}
// End Class UUIExtensionSubsystem Function K2_RegisterExtensionAsWidgetForContext

// Begin Class UUIExtensionSubsystem
void UUIExtensionSubsystem::StaticRegisterNativesUUIExtensionSubsystem()
{
	UClass* Class = UUIExtensionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_RegisterExtensionAsWidgetForContext", &UUIExtensionSubsystem::execK2_RegisterExtensionAsWidgetForContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIExtensionSubsystem);
UClass* Z_Construct_UClass_UUIExtensionSubsystem_NoRegister()
{
	return UUIExtensionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UUIExtensionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UIExtensionSystem.h" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIExtensionSubsystem_K2_RegisterExtensionAsWidgetForContext, "K2_RegisterExtensionAsWidgetForContext" }, // 2190867970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIExtensionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIExtensionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIExtensionSubsystem_Statics::ClassParams = {
	&UUIExtensionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIExtensionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIExtensionSubsystem()
{
	if (!Z_Registration_Info_UClass_UUIExtensionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIExtensionSubsystem.OuterSingleton, Z_Construct_UClass_UUIExtensionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIExtensionSubsystem.OuterSingleton;
}
template<> UIEXTENSION_API UClass* StaticClass<UUIExtensionSubsystem>()
{
	return UUIExtensionSubsystem::StaticClass();
}
UUIExtensionSubsystem::UUIExtensionSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIExtensionSubsystem);
UUIExtensionSubsystem::~UUIExtensionSubsystem() {}
// End Class UUIExtensionSubsystem

// Begin Class UUIExtensionHandleFunctions Function IsValid
struct Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics
{
	struct UIExtensionHandleFunctions_eventIsValid_Parms
	{
		FUIExtensionHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionHandleFunctions_eventIsValid_Parms, Handle), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 1926367713
void Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIExtensionHandleFunctions_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIExtensionHandleFunctions_eventIsValid_Parms), &Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionHandleFunctions, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::UIExtensionHandleFunctions_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::UIExtensionHandleFunctions_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIExtensionHandleFunctions::execIsValid)
{
	P_GET_STRUCT_REF(FUIExtensionHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUIExtensionHandleFunctions::IsValid(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class UUIExtensionHandleFunctions Function IsValid

// Begin Class UUIExtensionHandleFunctions Function Unregister
struct Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics
{
	struct UIExtensionHandleFunctions_eventUnregister_Parms
	{
		FUIExtensionHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionHandleFunctions_eventUnregister_Parms, Handle), Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 1926367713
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionHandleFunctions, nullptr, "Unregister", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::UIExtensionHandleFunctions_eventUnregister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::UIExtensionHandleFunctions_eventUnregister_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIExtensionHandleFunctions::execUnregister)
{
	P_GET_STRUCT_REF(FUIExtensionHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUIExtensionHandleFunctions::Unregister(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class UUIExtensionHandleFunctions Function Unregister

// Begin Class UUIExtensionHandleFunctions
void UUIExtensionHandleFunctions::StaticRegisterNativesUUIExtensionHandleFunctions()
{
	UClass* Class = UUIExtensionHandleFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsValid", &UUIExtensionHandleFunctions::execIsValid },
		{ "Unregister", &UUIExtensionHandleFunctions::execUnregister },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIExtensionHandleFunctions);
UClass* Z_Construct_UClass_UUIExtensionHandleFunctions_NoRegister()
{
	return UUIExtensionHandleFunctions::StaticClass();
}
struct Z_Construct_UClass_UUIExtensionHandleFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UIExtensionSystem.h" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIExtensionHandleFunctions_IsValid, "IsValid" }, // 1341743743
		{ &Z_Construct_UFunction_UUIExtensionHandleFunctions_Unregister, "Unregister" }, // 289150690
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIExtensionHandleFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::ClassParams = {
	&UUIExtensionHandleFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIExtensionHandleFunctions()
{
	if (!Z_Registration_Info_UClass_UUIExtensionHandleFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIExtensionHandleFunctions.OuterSingleton, Z_Construct_UClass_UUIExtensionHandleFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIExtensionHandleFunctions.OuterSingleton;
}
template<> UIEXTENSION_API UClass* StaticClass<UUIExtensionHandleFunctions>()
{
	return UUIExtensionHandleFunctions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIExtensionHandleFunctions);
UUIExtensionHandleFunctions::~UUIExtensionHandleFunctions() {}
// End Class UUIExtensionHandleFunctions

// Begin Class UUIExtensionPointHandleFunctions Function IsValid
struct Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics
{
	struct UIExtensionPointHandleFunctions_eventIsValid_Parms
	{
		FUIExtensionPointHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionPointHandleFunctions_eventIsValid_Parms, Handle), Z_Construct_UScriptStruct_FUIExtensionPointHandle, METADATA_PARAMS(0, nullptr) }; // 2722366529
void Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UIExtensionPointHandleFunctions_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIExtensionPointHandleFunctions_eventIsValid_Parms), &Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionPointHandleFunctions, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::UIExtensionPointHandleFunctions_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::UIExtensionPointHandleFunctions_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIExtensionPointHandleFunctions::execIsValid)
{
	P_GET_STRUCT_REF(FUIExtensionPointHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUIExtensionPointHandleFunctions::IsValid(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class UUIExtensionPointHandleFunctions Function IsValid

// Begin Class UUIExtensionPointHandleFunctions Function Unregister
struct Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics
{
	struct UIExtensionPointHandleFunctions_eventUnregister_Parms
	{
		FUIExtensionPointHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionPointHandleFunctions_eventUnregister_Parms, Handle), Z_Construct_UScriptStruct_FUIExtensionPointHandle, METADATA_PARAMS(0, nullptr) }; // 2722366529
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIExtensionPointHandleFunctions, nullptr, "Unregister", nullptr, nullptr, Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::UIExtensionPointHandleFunctions_eventUnregister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::UIExtensionPointHandleFunctions_eventUnregister_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUIExtensionPointHandleFunctions::execUnregister)
{
	P_GET_STRUCT_REF(FUIExtensionPointHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUIExtensionPointHandleFunctions::Unregister(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class UUIExtensionPointHandleFunctions Function Unregister

// Begin Class UUIExtensionPointHandleFunctions
void UUIExtensionPointHandleFunctions::StaticRegisterNativesUUIExtensionPointHandleFunctions()
{
	UClass* Class = UUIExtensionPointHandleFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsValid", &UUIExtensionPointHandleFunctions::execIsValid },
		{ "Unregister", &UUIExtensionPointHandleFunctions::execUnregister },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIExtensionPointHandleFunctions);
UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions_NoRegister()
{
	return UUIExtensionPointHandleFunctions::StaticClass();
}
struct Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UIExtensionSystem.h" },
		{ "ModuleRelativePath", "Public/UIExtensionSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIExtensionPointHandleFunctions_IsValid, "IsValid" }, // 3335445079
		{ &Z_Construct_UFunction_UUIExtensionPointHandleFunctions_Unregister, "Unregister" }, // 4100562625
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIExtensionPointHandleFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::ClassParams = {
	&UUIExtensionPointHandleFunctions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions()
{
	if (!Z_Registration_Info_UClass_UUIExtensionPointHandleFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIExtensionPointHandleFunctions.OuterSingleton, Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIExtensionPointHandleFunctions.OuterSingleton;
}
template<> UIEXTENSION_API UClass* StaticClass<UUIExtensionPointHandleFunctions>()
{
	return UUIExtensionPointHandleFunctions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIExtensionPointHandleFunctions);
UUIExtensionPointHandleFunctions::~UUIExtensionPointHandleFunctions() {}
// End Class UUIExtensionPointHandleFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUIExtensionPointMatch_StaticEnum, TEXT("EUIExtensionPointMatch"), &Z_Registration_Info_UEnum_EUIExtensionPointMatch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1937886694U) },
		{ EUIExtensionAction_StaticEnum, TEXT("EUIExtensionAction"), &Z_Registration_Info_UEnum_EUIExtensionAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3493214747U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUIExtensionHandle::StaticStruct, Z_Construct_UScriptStruct_FUIExtensionHandle_Statics::NewStructOps, TEXT("UIExtensionHandle"), &Z_Registration_Info_UScriptStruct_UIExtensionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIExtensionHandle), 1926367713U) },
		{ FUIExtensionRequest::StaticStruct, Z_Construct_UScriptStruct_FUIExtensionRequest_Statics::NewStructOps, TEXT("UIExtensionRequest"), &Z_Registration_Info_UScriptStruct_UIExtensionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIExtensionRequest), 1196454542U) },
		{ FUIExtensionPointHandle::StaticStruct, Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics::NewStructOps, TEXT("UIExtensionPointHandle"), &Z_Registration_Info_UScriptStruct_UIExtensionPointHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIExtensionPointHandle), 2722366529U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIExtensionSubsystem, UUIExtensionSubsystem::StaticClass, TEXT("UUIExtensionSubsystem"), &Z_Registration_Info_UClass_UUIExtensionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIExtensionSubsystem), 2227351743U) },
		{ Z_Construct_UClass_UUIExtensionHandleFunctions, UUIExtensionHandleFunctions::StaticClass, TEXT("UUIExtensionHandleFunctions"), &Z_Registration_Info_UClass_UUIExtensionHandleFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIExtensionHandleFunctions), 4229492804U) },
		{ Z_Construct_UClass_UUIExtensionPointHandleFunctions, UUIExtensionPointHandleFunctions::StaticClass, TEXT("UUIExtensionPointHandleFunctions"), &Z_Registration_Info_UClass_UUIExtensionPointHandleFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIExtensionPointHandleFunctions), 3386953115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_2461871594(TEXT("/Script/UIExtension"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FG_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_FG_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
