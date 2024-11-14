// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/GradTaggedActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradTaggedActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GRADGAME_API UClass* Z_Construct_UClass_AGradTaggedActor();
GRADGAME_API UClass* Z_Construct_UClass_AGradTaggedActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class AGradTaggedActor
void AGradTaggedActor::StaticRegisterNativesAGradTaggedActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGradTaggedActor);
UClass* Z_Construct_UClass_AGradTaggedActor_NoRegister()
{
	return AGradTaggedActor::StaticClass();
}
struct Z_Construct_UClass_AGradTaggedActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/GradTaggedActor.h" },
		{ "ModuleRelativePath", "AbilitySystem/GradTaggedActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradTaggedActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGradTaggedActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradTaggedActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradTaggedActor_Statics::ClassParams = {
	&AGradTaggedActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradTaggedActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradTaggedActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGradTaggedActor()
{
	if (!Z_Registration_Info_UClass_AGradTaggedActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradTaggedActor.OuterSingleton, Z_Construct_UClass_AGradTaggedActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradTaggedActor.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<AGradTaggedActor>()
{
	return AGradTaggedActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGradTaggedActor);
AGradTaggedActor::~AGradTaggedActor() {}
// End Class AGradTaggedActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_GradTaggedActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradTaggedActor, AGradTaggedActor::StaticClass, TEXT("AGradTaggedActor"), &Z_Registration_Info_UClass_AGradTaggedActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradTaggedActor), 1558175410U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_GradTaggedActor_h_255319749(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_GradTaggedActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_GradTaggedActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
