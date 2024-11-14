// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/GameModes/GradUserFacingExperience.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradUserFacingExperience() {}

// Begin Cross Module References
COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GRADGAME_API UClass* Z_Construct_UClass_UGradUserFacingExperience();
GRADGAME_API UClass* Z_Construct_UClass_UGradUserFacingExperience_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradUserFacingExperience Function CreateHostingRequest
struct Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics
{
	struct GradUserFacingExperience_eventCreateHostingRequest_Parms
	{
		UCommonSession_HostSessionRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Map \xef\xbf\xbd\xce\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd Experience \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, MapID\xef\xbf\xbd\xef\xbf\xbd ExperienceID\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd, HostSessionRequest \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09*/" },
#endif
		{ "ModuleRelativePath", "GameModes/GradUserFacingExperience.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map \xef\xbf\xbd\xce\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd Experience \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, MapID\xef\xbf\xbd\xef\xbf\xbd ExperienceID\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd, HostSessionRequest \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradUserFacingExperience_eventCreateHostingRequest_Parms, ReturnValue), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradUserFacingExperience, nullptr, "CreateHostingRequest", nullptr, nullptr, Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::GradUserFacingExperience_eventCreateHostingRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::GradUserFacingExperience_eventCreateHostingRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradUserFacingExperience::execCreateHostingRequest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCommonSession_HostSessionRequest**)Z_Param__Result=P_THIS->CreateHostingRequest();
	P_NATIVE_END;
}
// End Class UGradUserFacingExperience Function CreateHostingRequest

// Begin Class UGradUserFacingExperience
void UGradUserFacingExperience::StaticRegisterNativesUGradUserFacingExperience()
{
	UClass* Class = UGradUserFacingExperience::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateHostingRequest", &UGradUserFacingExperience::execCreateHostingRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradUserFacingExperience);
UClass* Z_Construct_UClass_UGradUserFacingExperience_NoRegister()
{
	return UGradUserFacingExperience::StaticClass();
}
struct Z_Construct_UClass_UGradUserFacingExperience_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameModes/GradUserFacingExperience.h" },
		{ "ModuleRelativePath", "GameModes/GradUserFacingExperience.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "AllowedTypes", "Map" },
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** the specific map to load */" },
#endif
		{ "ModuleRelativePath", "GameModes/GradUserFacingExperience.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the specific map to load" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceID_MetaData[] = {
		{ "AllowedTypes", "GradExperienceDefinition" },
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** the gameplay expierence to load */" },
#endif
		{ "ModuleRelativePath", "GameModes/GradUserFacingExperience.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the gameplay expierence to load" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradUserFacingExperience_CreateHostingRequest, "CreateHostingRequest" }, // 3872840863
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradUserFacingExperience>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradUserFacingExperience_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradUserFacingExperience, MapID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradUserFacingExperience_Statics::NewProp_ExperienceID = { "ExperienceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradUserFacingExperience, ExperienceID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceID_MetaData), NewProp_ExperienceID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradUserFacingExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradUserFacingExperience_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradUserFacingExperience_Statics::NewProp_ExperienceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradUserFacingExperience_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradUserFacingExperience_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradUserFacingExperience_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradUserFacingExperience_Statics::ClassParams = {
	&UGradUserFacingExperience::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradUserFacingExperience_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradUserFacingExperience_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradUserFacingExperience_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradUserFacingExperience_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradUserFacingExperience()
{
	if (!Z_Registration_Info_UClass_UGradUserFacingExperience.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradUserFacingExperience.OuterSingleton, Z_Construct_UClass_UGradUserFacingExperience_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradUserFacingExperience.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradUserFacingExperience>()
{
	return UGradUserFacingExperience::StaticClass();
}
UGradUserFacingExperience::UGradUserFacingExperience(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradUserFacingExperience);
UGradUserFacingExperience::~UGradUserFacingExperience() {}
// End Class UGradUserFacingExperience

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradUserFacingExperience, UGradUserFacingExperience::StaticClass, TEXT("UGradUserFacingExperience"), &Z_Registration_Info_UClass_UGradUserFacingExperience, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradUserFacingExperience), 148518235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_3955351298(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
