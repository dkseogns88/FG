// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/CommonUIExtensions.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIExtensions() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonUIExtensions();
COMMONGAME_API UClass* Z_Construct_UClass_UCommonUIExtensions_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References

// Begin Class UCommonUIExtensions Function PushContentToLayer_ForPlayer
struct Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics
{
	struct CommonUIExtensions_eventPushContentToLayer_ForPlayer_Parms
	{
		const ULocalPlayer* LocalPlayer;
		FGameplayTag LayerName;
		TSubclassOf<UCommonActivatableWidget> WidgetClass;
		UCommonActivatableWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global UI Extensions" },
		{ "ModuleRelativePath", "Public/CommonUIExtensions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::NewProp_LocalPlayer = { "LocalPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUIExtensions_eventPushContentToLayer_ForPlayer_Parms, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPlayer_MetaData), NewProp_LocalPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUIExtensions_eventPushContentToLayer_ForPlayer_Parms, LayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUIExtensions_eventPushContentToLayer_ForPlayer_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUIExtensions_eventPushContentToLayer_ForPlayer_Parms, ReturnValue), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::NewProp_LocalPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUIExtensions, nullptr, "PushContentToLayer_ForPlayer", nullptr, nullptr, Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::CommonUIExtensions_eventPushContentToLayer_ForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::CommonUIExtensions_eventPushContentToLayer_ForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonUIExtensions::execPushContentToLayer_ForPlayer)
{
	P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer);
	P_GET_STRUCT(FGameplayTag,Z_Param_LayerName);
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCommonActivatableWidget**)Z_Param__Result=UCommonUIExtensions::PushContentToLayer_ForPlayer(Z_Param_LocalPlayer,Z_Param_LayerName,Z_Param_WidgetClass);
	P_NATIVE_END;
}
// End Class UCommonUIExtensions Function PushContentToLayer_ForPlayer

// Begin Class UCommonUIExtensions Function ResumeInputForPlayer
struct Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics
{
	struct CommonUIExtensions_eventResumeInputForPlayer_Parms
	{
		APlayerController* PlayerController;
		FName SuspendToken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global UI Extensions" },
		{ "ModuleRelativePath", "Public/CommonUIExtensions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SuspendToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUIExtensions_eventResumeInputForPlayer_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::NewProp_SuspendToken = { "SuspendToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUIExtensions_eventResumeInputForPlayer_Parms, SuspendToken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::NewProp_SuspendToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUIExtensions, nullptr, "ResumeInputForPlayer", nullptr, nullptr, Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::CommonUIExtensions_eventResumeInputForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::CommonUIExtensions_eventResumeInputForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonUIExtensions::execResumeInputForPlayer)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FNameProperty,Z_Param_SuspendToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCommonUIExtensions::ResumeInputForPlayer(Z_Param_PlayerController,Z_Param_SuspendToken);
	P_NATIVE_END;
}
// End Class UCommonUIExtensions Function ResumeInputForPlayer

// Begin Class UCommonUIExtensions Function SuspendInputForPlayer
struct Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics
{
	struct CommonUIExtensions_eventSuspendInputForPlayer_Parms
	{
		APlayerController* PlayerController;
		FName SuspendReason;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global UI Extensions" },
		{ "ModuleRelativePath", "Public/CommonUIExtensions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SuspendReason;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUIExtensions_eventSuspendInputForPlayer_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::NewProp_SuspendReason = { "SuspendReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUIExtensions_eventSuspendInputForPlayer_Parms, SuspendReason), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CommonUIExtensions_eventSuspendInputForPlayer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::NewProp_SuspendReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUIExtensions, nullptr, "SuspendInputForPlayer", nullptr, nullptr, Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::CommonUIExtensions_eventSuspendInputForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::CommonUIExtensions_eventSuspendInputForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCommonUIExtensions::execSuspendInputForPlayer)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FNameProperty,Z_Param_SuspendReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UCommonUIExtensions::SuspendInputForPlayer(Z_Param_PlayerController,Z_Param_SuspendReason);
	P_NATIVE_END;
}
// End Class UCommonUIExtensions Function SuspendInputForPlayer

// Begin Class UCommonUIExtensions
void UCommonUIExtensions::StaticRegisterNativesUCommonUIExtensions()
{
	UClass* Class = UCommonUIExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PushContentToLayer_ForPlayer", &UCommonUIExtensions::execPushContentToLayer_ForPlayer },
		{ "ResumeInputForPlayer", &UCommonUIExtensions::execResumeInputForPlayer },
		{ "SuspendInputForPlayer", &UCommonUIExtensions::execSuspendInputForPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUIExtensions);
UClass* Z_Construct_UClass_UCommonUIExtensions_NoRegister()
{
	return UCommonUIExtensions::StaticClass();
}
struct Z_Construct_UClass_UCommonUIExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonUIExtensions.h" },
		{ "ModuleRelativePath", "Public/CommonUIExtensions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUIExtensions_PushContentToLayer_ForPlayer, "PushContentToLayer_ForPlayer" }, // 691291047
		{ &Z_Construct_UFunction_UCommonUIExtensions_ResumeInputForPlayer, "ResumeInputForPlayer" }, // 3624695371
		{ &Z_Construct_UFunction_UCommonUIExtensions_SuspendInputForPlayer, "SuspendInputForPlayer" }, // 1895683987
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCommonUIExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIExtensions_Statics::ClassParams = {
	&UCommonUIExtensions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonUIExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommonUIExtensions()
{
	if (!Z_Registration_Info_UClass_UCommonUIExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUIExtensions.OuterSingleton, Z_Construct_UClass_UCommonUIExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommonUIExtensions.OuterSingleton;
}
template<> COMMONGAME_API UClass* StaticClass<UCommonUIExtensions>()
{
	return UCommonUIExtensions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIExtensions);
UCommonUIExtensions::~UCommonUIExtensions() {}
// End Class UCommonUIExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_SeongGyu_Desktop_LyraStarter_Middle_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonUIExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUIExtensions, UCommonUIExtensions::StaticClass, TEXT("UCommonUIExtensions"), &Z_Registration_Info_UClass_UCommonUIExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUIExtensions), 910167844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_SeongGyu_Desktop_LyraStarter_Middle_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonUIExtensions_h_3343218050(TEXT("/Script/CommonGame"),
	Z_CompiledInDeferFile_FID_Users_SeongGyu_Desktop_LyraStarter_Middle_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonUIExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_SeongGyu_Desktop_LyraStarter_Middle_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonUIExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
