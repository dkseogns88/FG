// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Feedback/NumberPops/GradNumberPopComponent_NiagaraText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradNumberPopComponent_NiagaraText() {}

// Begin Cross Module References
GRADGAME_API UClass* Z_Construct_UClass_UGradDamagePopStyleNiagara_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradNumberPopComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradNumberPopComponent_NiagaraText();
GRADGAME_API UClass* Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradNumberPopComponent_NiagaraText
void UGradNumberPopComponent_NiagaraText::StaticRegisterNativesUGradNumberPopComponent_NiagaraText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradNumberPopComponent_NiagaraText);
UClass* Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_NoRegister()
{
	return UGradNumberPopComponent_NiagaraText::StaticClass();
}
struct Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Feedback/NumberPops/GradNumberPopComponent_NiagaraText.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent_NiagaraText.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Category", "Number Pop|Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Style patterns to attempt to apply to the incoming number pops */" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent_NiagaraText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Style patterns to attempt to apply to the incoming number pops" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComp_MetaData[] = {
		{ "Category", "Number Pop|Style" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Niagara Component used to display the damage\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent_NiagaraText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Niagara Component used to display the damage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Style;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradNumberPopComponent_NiagaraText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradNumberPopComponent_NiagaraText, Style), Z_Construct_UClass_UGradDamagePopStyleNiagara_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::NewProp_NiagaraComp = { "NiagaraComp", nullptr, (EPropertyFlags)0x0124080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradNumberPopComponent_NiagaraText, NiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComp_MetaData), NewProp_NiagaraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::NewProp_Style,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::NewProp_NiagaraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradNumberPopComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::ClassParams = {
	&UGradNumberPopComponent_NiagaraText::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradNumberPopComponent_NiagaraText()
{
	if (!Z_Registration_Info_UClass_UGradNumberPopComponent_NiagaraText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradNumberPopComponent_NiagaraText.OuterSingleton, Z_Construct_UClass_UGradNumberPopComponent_NiagaraText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradNumberPopComponent_NiagaraText.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradNumberPopComponent_NiagaraText>()
{
	return UGradNumberPopComponent_NiagaraText::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradNumberPopComponent_NiagaraText);
UGradNumberPopComponent_NiagaraText::~UGradNumberPopComponent_NiagaraText() {}
// End Class UGradNumberPopComponent_NiagaraText

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_NiagaraText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradNumberPopComponent_NiagaraText, UGradNumberPopComponent_NiagaraText::StaticClass, TEXT("UGradNumberPopComponent_NiagaraText"), &Z_Registration_Info_UClass_UGradNumberPopComponent_NiagaraText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradNumberPopComponent_NiagaraText), 929470328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_NiagaraText_h_2267980207(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_NiagaraText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_NiagaraText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
