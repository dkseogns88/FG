// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Player/GradPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GRADGAME_API UClass* Z_Construct_UClass_AGradPlayerState();
GRADGAME_API UClass* Z_Construct_UClass_AGradPlayerState_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class AGradPlayerState
void AGradPlayerState::StaticRegisterNativesAGradPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGradPlayerState);
UClass* Z_Construct_UClass_AGradPlayerState_NoRegister()
{
	return AGradPlayerState::StaticClass();
}
struct Z_Construct_UClass_AGradPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/GradPlayerState.h" },
		{ "ModuleRelativePath", "Player/GradPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe2\xbc\xad PawnData\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbe\xc6\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Player/GradPlayerState.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe2\xbc\xad PawnData\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbe\xc6\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGradPlayerState_Statics::NewProp_PawnData = { "PawnData", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGradPlayerState, PawnData), Z_Construct_UClass_UGradPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGradPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradPlayerState_Statics::NewProp_PawnData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGradPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradPlayerState_Statics::ClassParams = {
	&AGradPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGradPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGradPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGradPlayerState()
{
	if (!Z_Registration_Info_UClass_AGradPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradPlayerState.OuterSingleton, Z_Construct_UClass_AGradPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradPlayerState.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<AGradPlayerState>()
{
	return AGradPlayerState::StaticClass();
}
AGradPlayerState::AGradPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGradPlayerState);
AGradPlayerState::~AGradPlayerState() {}
// End Class AGradPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Player_GradPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradPlayerState, AGradPlayerState::StaticClass, TEXT("AGradPlayerState"), &Z_Registration_Info_UClass_AGradPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradPlayerState), 438794975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Player_GradPlayerState_h_2207301071(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Player_GradPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Player_GradPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
