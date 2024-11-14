// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/AbilitySystem/Attributes/GradAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GRADGAME_API UClass* Z_Construct_UClass_UGradAttributeSet();
GRADGAME_API UClass* Z_Construct_UClass_UGradAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradAttributeSet
void UGradAttributeSet::StaticRegisterNativesUGradAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradAttributeSet);
UClass* Z_Construct_UClass_UGradAttributeSet_NoRegister()
{
	return UGradAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UGradAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n  * GradAttributeSet\n  * - \n  \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Grad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Attribute Set Class\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd\n  */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/GradAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/GradAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GradAttributeSet\n-\n  \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Grad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Attribute Set Class\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradAttributeSet_Statics::ClassParams = {
	&UGradAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradAttributeSet()
{
	if (!Z_Registration_Info_UClass_UGradAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradAttributeSet.OuterSingleton, Z_Construct_UClass_UGradAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradAttributeSet.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradAttributeSet>()
{
	return UGradAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradAttributeSet);
UGradAttributeSet::~UGradAttributeSet() {}
// End Class UGradAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Attributes_GradAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradAttributeSet, UGradAttributeSet::StaticClass, TEXT("UGradAttributeSet"), &Z_Registration_Info_UClass_UGradAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradAttributeSet), 4045756032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Attributes_GradAttributeSet_h_851921365(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Attributes_GradAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_AbilitySystem_Attributes_GradAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
