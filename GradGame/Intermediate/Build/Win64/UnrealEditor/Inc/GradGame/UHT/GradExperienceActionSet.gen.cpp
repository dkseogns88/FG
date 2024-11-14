// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/GameModes/GradExperienceActionSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradExperienceActionSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradExperienceActionSet();
GRADGAME_API UClass* Z_Construct_UClass_UGradExperienceActionSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradExperienceActionSet
void UGradExperienceActionSet::StaticRegisterNativesUGradExperienceActionSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradExperienceActionSet);
UClass* Z_Construct_UClass_UGradExperienceActionSet_NoRegister()
{
	return UGradExperienceActionSet::StaticClass();
}
struct Z_Construct_UClass_UGradExperienceActionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameModes/GradExperienceActionSet.h" },
		{ "ModuleRelativePath", "GameModes/GradExperienceActionSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Actions to Perform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * member variables\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/GradExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "member variables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradExperienceActionSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradExperienceActionSet_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradExperienceActionSet_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradExperienceActionSet, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradExperienceActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceActionSet_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceActionSet_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceActionSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradExperienceActionSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceActionSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradExperienceActionSet_Statics::ClassParams = {
	&UGradExperienceActionSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradExperienceActionSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceActionSet_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceActionSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradExperienceActionSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradExperienceActionSet()
{
	if (!Z_Registration_Info_UClass_UGradExperienceActionSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradExperienceActionSet.OuterSingleton, Z_Construct_UClass_UGradExperienceActionSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradExperienceActionSet.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradExperienceActionSet>()
{
	return UGradExperienceActionSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradExperienceActionSet);
UGradExperienceActionSet::~UGradExperienceActionSet() {}
// End Class UGradExperienceActionSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceActionSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradExperienceActionSet, UGradExperienceActionSet::StaticClass, TEXT("UGradExperienceActionSet"), &Z_Registration_Info_UClass_UGradExperienceActionSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradExperienceActionSet), 3038517368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceActionSet_h_845800055(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceActionSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceActionSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
