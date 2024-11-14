// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/UI/GradHUDLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradHUDLayout() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGradActivatableWidget();
GRADGAME_API UClass* Z_Construct_UClass_UGradHUDLayout();
GRADGAME_API UClass* Z_Construct_UClass_UGradHUDLayout_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradHUDLayout
void UGradHUDLayout::StaticRegisterNativesUGradHUDLayout()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradHUDLayout);
UClass* Z_Construct_UClass_UGradHUDLayout_NoRegister()
{
	return UGradHUDLayout::StaticClass();
}
struct Z_Construct_UClass_UGradHUDLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/GradHUDLayout.h" },
		{ "ModuleRelativePath", "UI/GradHUDLayout.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradHUDLayout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradHUDLayout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHUDLayout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradHUDLayout_Statics::ClassParams = {
	&UGradHUDLayout::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHUDLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradHUDLayout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradHUDLayout()
{
	if (!Z_Registration_Info_UClass_UGradHUDLayout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradHUDLayout.OuterSingleton, Z_Construct_UClass_UGradHUDLayout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradHUDLayout.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradHUDLayout>()
{
	return UGradHUDLayout::StaticClass();
}
UGradHUDLayout::UGradHUDLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradHUDLayout);
UGradHUDLayout::~UGradHUDLayout() {}
// End Class UGradHUDLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradHUDLayout_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradHUDLayout, UGradHUDLayout::StaticClass, TEXT("UGradHUDLayout"), &Z_Registration_Info_UClass_UGradHUDLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradHUDLayout), 1283955718U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradHUDLayout_h_2715791836(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradHUDLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_GradHUDLayout_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
