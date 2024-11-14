// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Weapons/GradRangedWeaponInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradRangedWeaponInstance() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGradRangedWeaponInstance();
GRADGAME_API UClass* Z_Construct_UClass_UGradRangedWeaponInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradWeaponInstance();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradRangedWeaponInstance
void UGradRangedWeaponInstance::StaticRegisterNativesUGradRangedWeaponInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradRangedWeaponInstance);
UClass* Z_Construct_UClass_UGradRangedWeaponInstance_NoRegister()
{
	return UGradRangedWeaponInstance::StaticClass();
}
struct Z_Construct_UClass_UGradRangedWeaponInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapons/GradRangedWeaponInstance.h" },
		{ "ModuleRelativePath", "Weapons/GradRangedWeaponInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamageRange_MetaData[] = {
		{ "Category", "WeaponConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc8\xbf \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd */" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Weapons/GradRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xbf \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletTraceWeaponRadius_MetaData[] = {
		{ "Category", "WeaponConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc5\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Sphere Trace Sweep) */" },
#endif
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Weapons/GradRangedWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Sphere Trace Sweep)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamageRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletTraceWeaponRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradRangedWeaponInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGradRangedWeaponInstance_Statics::NewProp_MaxDamageRange = { "MaxDamageRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradRangedWeaponInstance, MaxDamageRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDamageRange_MetaData), NewProp_MaxDamageRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGradRangedWeaponInstance_Statics::NewProp_BulletTraceWeaponRadius = { "BulletTraceWeaponRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradRangedWeaponInstance, BulletTraceWeaponRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletTraceWeaponRadius_MetaData), NewProp_BulletTraceWeaponRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradRangedWeaponInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradRangedWeaponInstance_Statics::NewProp_MaxDamageRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradRangedWeaponInstance_Statics::NewProp_BulletTraceWeaponRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradRangedWeaponInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradRangedWeaponInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradWeaponInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradRangedWeaponInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradRangedWeaponInstance_Statics::ClassParams = {
	&UGradRangedWeaponInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradRangedWeaponInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradRangedWeaponInstance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradRangedWeaponInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradRangedWeaponInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradRangedWeaponInstance()
{
	if (!Z_Registration_Info_UClass_UGradRangedWeaponInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradRangedWeaponInstance.OuterSingleton, Z_Construct_UClass_UGradRangedWeaponInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradRangedWeaponInstance.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradRangedWeaponInstance>()
{
	return UGradRangedWeaponInstance::StaticClass();
}
UGradRangedWeaponInstance::UGradRangedWeaponInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradRangedWeaponInstance);
UGradRangedWeaponInstance::~UGradRangedWeaponInstance() {}
// End Class UGradRangedWeaponInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradRangedWeaponInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradRangedWeaponInstance, UGradRangedWeaponInstance::StaticClass, TEXT("UGradRangedWeaponInstance"), &Z_Registration_Info_UClass_UGradRangedWeaponInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradRangedWeaponInstance), 1685806628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradRangedWeaponInstance_h_4100368835(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradRangedWeaponInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradRangedWeaponInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
