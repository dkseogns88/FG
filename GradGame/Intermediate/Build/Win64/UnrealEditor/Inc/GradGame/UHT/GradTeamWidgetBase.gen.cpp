// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/UI/Teams/GradTeamWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradTeamWidgetBase() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GRADGAME_API UClass* Z_Construct_UClass_UGradTeamWidgetBase();
GRADGAME_API UClass* Z_Construct_UClass_UGradTeamWidgetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradTeamWidgetBase
void UGradTeamWidgetBase::StaticRegisterNativesUGradTeamWidgetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradTeamWidgetBase);
UClass* Z_Construct_UClass_UGradTeamWidgetBase_NoRegister()
{
	return UGradTeamWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UGradTeamWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Teams/GradTeamWidgetBase.h" },
		{ "ModuleRelativePath", "UI/Teams/GradTeamWidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradTeamWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradTeamWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradTeamWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradTeamWidgetBase_Statics::ClassParams = {
	&UGradTeamWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradTeamWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradTeamWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradTeamWidgetBase()
{
	if (!Z_Registration_Info_UClass_UGradTeamWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradTeamWidgetBase.OuterSingleton, Z_Construct_UClass_UGradTeamWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradTeamWidgetBase.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradTeamWidgetBase>()
{
	return UGradTeamWidgetBase::StaticClass();
}
UGradTeamWidgetBase::UGradTeamWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradTeamWidgetBase);
UGradTeamWidgetBase::~UGradTeamWidgetBase() {}
// End Class UGradTeamWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradTeamWidgetBase, UGradTeamWidgetBase::StaticClass, TEXT("UGradTeamWidgetBase"), &Z_Registration_Info_UClass_UGradTeamWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradTeamWidgetBase), 2517463759U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamWidgetBase_h_3565454171(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
