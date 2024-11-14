// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/GameModes/GradExperienceManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradExperienceManagerComponent() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGradExperienceDefinition_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradExperienceManagerComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradExperienceManagerComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradExperienceManagerComponent
void UGradExperienceManagerComponent::StaticRegisterNativesUGradExperienceManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradExperienceManagerComponent);
UClass* Z_Construct_UClass_UGradExperienceManagerComponent_NoRegister()
{
	return UGradExperienceManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UGradExperienceManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GradExperienceManagerComponent\n * - \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xb4\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd component\xef\xbf\xbd\xef\xbf\xbd game state\xef\xbf\xbd\xef\xbf\xbd owner\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xbc\xad, experience\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd component\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd\n * - \xef\xbf\xbd\xd3\xb8\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xcf\xb6\xef\xbf\xbd, manager\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, experience \xef\xbf\xbd\xce\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameModes/GradExperienceManagerComponent.h" },
		{ "ModuleRelativePath", "GameModes/GradExperienceManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GradExperienceManagerComponent\n- \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xb4\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd component\xef\xbf\xbd\xef\xbf\xbd game state\xef\xbf\xbd\xef\xbf\xbd owner\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xbc\xad, experience\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd component\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd\n- \xef\xbf\xbd\xd3\xb8\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xcf\xb6\xef\xbf\xbd, manager\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, experience \xef\xbf\xbd\xce\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExperience_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// - \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb7\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "GameModes/GradExperienceManagerComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "- \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb7\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradExperienceManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradExperienceManagerComponent_Statics::NewProp_CurrentExperience = { "CurrentExperience", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradExperienceManagerComponent, CurrentExperience), Z_Construct_UClass_UGradExperienceDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentExperience_MetaData), NewProp_CurrentExperience_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradExperienceManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradExperienceManagerComponent_Statics::NewProp_CurrentExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradExperienceManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradExperienceManagerComponent_Statics::ClassParams = {
	&UGradExperienceManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradExperienceManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradExperienceManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradExperienceManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradExperienceManagerComponent()
{
	if (!Z_Registration_Info_UClass_UGradExperienceManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradExperienceManagerComponent.OuterSingleton, Z_Construct_UClass_UGradExperienceManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradExperienceManagerComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradExperienceManagerComponent>()
{
	return UGradExperienceManagerComponent::StaticClass();
}
UGradExperienceManagerComponent::UGradExperienceManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradExperienceManagerComponent);
UGradExperienceManagerComponent::~UGradExperienceManagerComponent() {}
// End Class UGradExperienceManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradExperienceManagerComponent, UGradExperienceManagerComponent::StaticClass, TEXT("UGradExperienceManagerComponent"), &Z_Registration_Info_UClass_UGradExperienceManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradExperienceManagerComponent), 1719096292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceManagerComponent_h_1942286403(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_GameModes_GradExperienceManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
