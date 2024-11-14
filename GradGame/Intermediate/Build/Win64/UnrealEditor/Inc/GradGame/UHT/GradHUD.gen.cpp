// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/UI/GradHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
GRADGAME_API UClass* Z_Construct_UClass_AGradHUD();
GRADGAME_API UClass* Z_Construct_UClass_AGradHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class AGradHUD
void AGradHUD::StaticRegisterNativesAGradHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGradHUD);
UClass* Z_Construct_UClass_AGradHUD_NoRegister()
{
	return AGradHUD::StaticClass();
}
struct Z_Construct_UClass_AGradHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/GradHUD.h" },
		{ "ModuleRelativePath", "UI/GradHUD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGradHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGradHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGradHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGradHUD_Statics::ClassParams = {
	&AGradHUD::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGradHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AGradHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGradHUD()
{
	if (!Z_Registration_Info_UClass_AGradHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGradHUD.OuterSingleton, Z_Construct_UClass_AGradHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGradHUD.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<AGradHUD>()
{
	return AGradHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGradHUD);
AGradHUD::~AGradHUD() {}
// End Class AGradHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGradHUD, AGradHUD::StaticClass, TEXT("AGradHUD"), &Z_Registration_Info_UClass_AGradHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGradHUD), 348932358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_2369258339(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
