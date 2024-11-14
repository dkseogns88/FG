// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Player/GradPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradPlayerController() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_ACommonPlayerController();
GRADGAME_API UClass* Z_Construct_UClass_AGradPlayerController();
GRADGAME_API UClass* Z_Construct_UClass_AGradPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class AGradPlayerController
void AGradPlayerController::StaticRegisterNativesAGradPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGradPlayerController);
UClass* Z_Construct_UClass_AGradPlayerController_NoRegister()
{
	return AGradPlayerController::StaticClass();
}
struct Z_Construct_UClass_AGradPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/GradPlayerController.h" },
		{ "ModuleRelativePath", "Player/GradPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGradPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACommonPlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradPlayerController_Statics::ClassParams = {
	&AGradPlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGradPlayerController()
{
	if (!Z_Registration_Info_UClass_AGradPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradPlayerController.OuterSingleton, Z_Construct_UClass_AGradPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradPlayerController.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<AGradPlayerController>()
{
	return AGradPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGradPlayerController);
AGradPlayerController::~AGradPlayerController() {}
// End Class AGradPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradPlayerController, AGradPlayerController::StaticClass, TEXT("AGradPlayerController"), &Z_Registration_Info_UClass_AGradPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradPlayerController), 65571489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_537888180(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
