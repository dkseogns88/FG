// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/GameModes/GradGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GRADGAME_API UClass* Z_Construct_UClass_AGradGameModeBase();
GRADGAME_API UClass* Z_Construct_UClass_AGradGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class AGradGameModeBase
void AGradGameModeBase::StaticRegisterNativesAGradGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGradGameModeBase);
UClass* Z_Construct_UClass_AGradGameModeBase_NoRegister()
{
	return AGradGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AGradGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/GradGameModeBase.h" },
		{ "ModuleRelativePath", "GameModes/GradGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGradGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradGameModeBase_Statics::ClassParams = {
	&AGradGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGradGameModeBase()
{
	if (!Z_Registration_Info_UClass_AGradGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradGameModeBase.OuterSingleton, Z_Construct_UClass_AGradGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradGameModeBase.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<AGradGameModeBase>()
{
	return AGradGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGradGameModeBase);
AGradGameModeBase::~AGradGameModeBase() {}
// End Class AGradGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradGameModeBase, AGradGameModeBase::StaticClass, TEXT("AGradGameModeBase"), &Z_Registration_Info_UClass_AGradGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradGameModeBase), 2826473434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradGameModeBase_h_175273642(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
