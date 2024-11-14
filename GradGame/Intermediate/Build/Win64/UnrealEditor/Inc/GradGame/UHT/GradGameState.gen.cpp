// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/GameModes/GradGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
GRADGAME_API UClass* Z_Construct_UClass_AGradGameState();
GRADGAME_API UClass* Z_Construct_UClass_AGradGameState_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradExperienceManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class AGradGameState
void AGradGameState::StaticRegisterNativesAGradGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGradGameState);
UClass* Z_Construct_UClass_AGradGameState_NoRegister()
{
	return AGradGameState::StaticClass();
}
struct Z_Construct_UClass_AGradGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/GradGameState.h" },
		{ "ModuleRelativePath", "GameModes/GradGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/GradGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExperienceManagerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGradGameState_Statics::NewProp_ExperienceManagerComponent = { "ExperienceManagerComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGradGameState, ExperienceManagerComponent), Z_Construct_UClass_UGradExperienceManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceManagerComponent_MetaData), NewProp_ExperienceManagerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGradGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGradGameState_Statics::NewProp_ExperienceManagerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGradGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradGameState_Statics::ClassParams = {
	&AGradGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGradGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGradGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGradGameState()
{
	if (!Z_Registration_Info_UClass_AGradGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradGameState.OuterSingleton, Z_Construct_UClass_AGradGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradGameState.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<AGradGameState>()
{
	return AGradGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGradGameState);
AGradGameState::~AGradGameState() {}
// End Class AGradGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradGameState, AGradGameState::StaticClass, TEXT("AGradGameState"), &Z_Registration_Info_UClass_AGradGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradGameState), 32480604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_992125920(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
