// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/System/GradGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGameInstance() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameInstance();
GRADGAME_API UClass* Z_Construct_UClass_UGradGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradGameInstance
void UGradGameInstance::StaticRegisterNativesUGradGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradGameInstance);
UClass* Z_Construct_UClass_UGradGameInstance_NoRegister()
{
	return UGradGameInstance::StaticClass();
}
struct Z_Construct_UClass_UGradGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/GradGameInstance.h" },
		{ "ModuleRelativePath", "System/GradGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradGameInstance_Statics::ClassParams = {
	&UGradGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradGameInstance()
{
	if (!Z_Registration_Info_UClass_UGradGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradGameInstance.OuterSingleton, Z_Construct_UClass_UGradGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradGameInstance.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradGameInstance>()
{
	return UGradGameInstance::StaticClass();
}
UGradGameInstance::UGradGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradGameInstance);
UGradGameInstance::~UGradGameInstance() {}
// End Class UGradGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradGameInstance, UGradGameInstance::StaticClass, TEXT("UGradGameInstance"), &Z_Registration_Info_UClass_UGradGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradGameInstance), 2012107790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradGameInstance_h_2274287453(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_System_GradGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
