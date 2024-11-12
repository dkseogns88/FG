// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/CommonUIExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIExtensions() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonUIExtensions();
COMMONGAME_API UClass* Z_Construct_UClass_UCommonUIExtensions_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References

// Begin Class UCommonUIExtensions
void UCommonUIExtensions::StaticRegisterNativesUCommonUIExtensions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUIExtensions);
UClass* Z_Construct_UClass_UCommonUIExtensions_NoRegister()
{
	return UCommonUIExtensions::StaticClass();
}
struct Z_Construct_UClass_UCommonUIExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CommonUIExtensions.h" },
		{ "ModuleRelativePath", "Public/CommonUIExtensions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCommonUIExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIExtensions_Statics::ClassParams = {
	&UCommonUIExtensions::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UCommonUIExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCommonUIExtensions()
{
	if (!Z_Registration_Info_UClass_UCommonUIExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUIExtensions.OuterSingleton, Z_Construct_UClass_UCommonUIExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCommonUIExtensions.OuterSingleton;
}
template<> COMMONGAME_API UClass* StaticClass<UCommonUIExtensions>()
{
	return UCommonUIExtensions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIExtensions);
UCommonUIExtensions::~UCommonUIExtensions() {}
// End Class UCommonUIExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonUIExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUIExtensions, UCommonUIExtensions::StaticClass, TEXT("UCommonUIExtensions"), &Z_Registration_Info_UClass_UCommonUIExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUIExtensions), 1349104788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonUIExtensions_h_1570226293(TEXT("/Script/CommonGame"),
	Z_CompiledInDeferFile_FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonUIExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonUIExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
