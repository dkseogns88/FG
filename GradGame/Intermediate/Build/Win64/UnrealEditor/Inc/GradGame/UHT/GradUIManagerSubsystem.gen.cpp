// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/UI/GradUIManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradUIManagerSubsystem() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UGameUIManagerSubsystem();
GRADGAME_API UClass* Z_Construct_UClass_UGradUIManagerSubsystem();
GRADGAME_API UClass* Z_Construct_UClass_UGradUIManagerSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradUIManagerSubsystem
void UGradUIManagerSubsystem::StaticRegisterNativesUGradUIManagerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradUIManagerSubsystem);
UClass* Z_Construct_UClass_UGradUIManagerSubsystem_NoRegister()
{
	return UGradUIManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UGradUIManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/GradUIManagerSubsystem.h" },
		{ "ModuleRelativePath", "UI/GradUIManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradUIManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradUIManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUIManagerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradUIManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradUIManagerSubsystem_Statics::ClassParams = {
	&UGradUIManagerSubsystem::StaticClass,
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
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradUIManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradUIManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradUIManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UGradUIManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradUIManagerSubsystem.OuterSingleton, Z_Construct_UClass_UGradUIManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradUIManagerSubsystem.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradUIManagerSubsystem>()
{
	return UGradUIManagerSubsystem::StaticClass();
}
UGradUIManagerSubsystem::UGradUIManagerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradUIManagerSubsystem);
UGradUIManagerSubsystem::~UGradUIManagerSubsystem() {}
// End Class UGradUIManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradUIManagerSubsystem, UGradUIManagerSubsystem::StaticClass, TEXT("UGradUIManagerSubsystem"), &Z_Registration_Info_UClass_UGradUIManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradUIManagerSubsystem), 3252334273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_456113573(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
