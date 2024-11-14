// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Animation/GradAnimInstance.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
GRADGAME_API UClass* Z_Construct_UClass_UGradAnimInstance();
GRADGAME_API UClass* Z_Construct_UClass_UGradAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradAnimInstance
void UGradAnimInstance::StaticRegisterNativesUGradAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradAnimInstance);
UClass* Z_Construct_UClass_UGradAnimInstance_NoRegister()
{
	return UGradAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UGradAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/GradAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/GradAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[] = {
		{ "Category", "Character State Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Grad\xef\xbf\xbd\xef\xbf\xbd AnimBP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb9\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Animation/GradAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Grad\xef\xbf\xbd\xef\xbf\xbd AnimBP\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb9\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GameplayTag\xef\xbf\xbd\xef\xbf\xbd AnimInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Animation/GradAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameplayTag\xef\xbf\xbd\xef\xbf\xbd AnimInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGradAnimInstance_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradAnimInstance, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDistance_MetaData), NewProp_GroundDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagPropertyMap_MetaData), NewProp_GameplayTagPropertyMap_MetaData) }; // 2674068477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradAnimInstance_Statics::NewProp_GroundDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradAnimInstance_Statics::ClassParams = {
	&UGradAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradAnimInstance()
{
	if (!Z_Registration_Info_UClass_UGradAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradAnimInstance.OuterSingleton, Z_Construct_UClass_UGradAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradAnimInstance.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradAnimInstance>()
{
	return UGradAnimInstance::StaticClass();
}
UGradAnimInstance::UGradAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradAnimInstance);
UGradAnimInstance::~UGradAnimInstance() {}
// End Class UGradAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradAnimInstance, UGradAnimInstance::StaticClass, TEXT("UGradAnimInstance"), &Z_Registration_Info_UClass_UGradAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradAnimInstance), 4274793870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_463817649(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
