// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/UI/Teams/GradTeamInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradTeamInterface() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GRADGAME_API UClass* Z_Construct_UClass_UGradTeamInterface();
GRADGAME_API UClass* Z_Construct_UClass_UGradTeamInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradTeamInterface Function OnTeamChanged
struct GradTeamInterface_eventOnTeamChanged_Parms
{
	TArray<int32> PlayerIDs;
	int32 TeamMembers;
};
static FName NAME_UGradTeamInterface_OnTeamChanged = FName(TEXT("OnTeamChanged"));
void UGradTeamInterface::OnTeamChanged(TArray<int32> const& PlayerIDs, int32 TeamMembers)
{
	GradTeamInterface_eventOnTeamChanged_Parms Parms;
	Parms.PlayerIDs=PlayerIDs;
	Parms.TeamMembers=TeamMembers;
	ProcessEvent(FindFunctionChecked(NAME_UGradTeamInterface_OnTeamChanged),&Parms);
}
struct Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Teams/GradTeamInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamMembers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::NewProp_PlayerIDs_Inner = { "PlayerIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::NewProp_PlayerIDs = { "PlayerIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradTeamInterface_eventOnTeamChanged_Parms, PlayerIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIDs_MetaData), NewProp_PlayerIDs_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::NewProp_TeamMembers = { "TeamMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradTeamInterface_eventOnTeamChanged_Parms, TeamMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::NewProp_PlayerIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::NewProp_PlayerIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::NewProp_TeamMembers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradTeamInterface, nullptr, "OnTeamChanged", nullptr, nullptr, Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::PropPointers), sizeof(GradTeamInterface_eventOnTeamChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(GradTeamInterface_eventOnTeamChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGradTeamInterface Function OnTeamChanged

// Begin Class UGradTeamInterface
void UGradTeamInterface::StaticRegisterNativesUGradTeamInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradTeamInterface);
UClass* Z_Construct_UClass_UGradTeamInterface_NoRegister()
{
	return UGradTeamInterface::StaticClass();
}
struct Z_Construct_UClass_UGradTeamInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Teams/GradTeamInterface.h" },
		{ "ModuleRelativePath", "UI/Teams/GradTeamInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradTeamInterface_OnTeamChanged, "OnTeamChanged" }, // 1885658100
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradTeamInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradTeamInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradTeamInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradTeamInterface_Statics::ClassParams = {
	&UGradTeamInterface::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradTeamInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradTeamInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradTeamInterface()
{
	if (!Z_Registration_Info_UClass_UGradTeamInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradTeamInterface.OuterSingleton, Z_Construct_UClass_UGradTeamInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradTeamInterface.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradTeamInterface>()
{
	return UGradTeamInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradTeamInterface);
UGradTeamInterface::~UGradTeamInterface() {}
// End Class UGradTeamInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradTeamInterface, UGradTeamInterface::StaticClass, TEXT("UGradTeamInterface"), &Z_Registration_Info_UClass_UGradTeamInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradTeamInterface), 2681654362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_4183531644(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
