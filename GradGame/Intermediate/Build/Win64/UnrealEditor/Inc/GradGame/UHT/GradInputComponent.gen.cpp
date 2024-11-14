// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Input/GradInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradInputComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradInputComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradInputComponent
void UGradInputComponent::StaticRegisterNativesUGradInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradInputComponent);
UClass* Z_Construct_UClass_UGradInputComponent_NoRegister()
{
	return UGradInputComponent::StaticClass();
}
struct Z_Construct_UClass_UGradInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/GradInputComponent.h" },
		{ "ModuleRelativePath", "Input/GradInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradInputComponent_Statics::ClassParams = {
	&UGradInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradInputComponent()
{
	if (!Z_Registration_Info_UClass_UGradInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradInputComponent.OuterSingleton, Z_Construct_UClass_UGradInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradInputComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradInputComponent>()
{
	return UGradInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradInputComponent);
UGradInputComponent::~UGradInputComponent() {}
// End Class UGradInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradInputComponent, UGradInputComponent::StaticClass, TEXT("UGradInputComponent"), &Z_Registration_Info_UClass_UGradInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradInputComponent), 4012352283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputComponent_h_1235856609(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Input_GradInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
