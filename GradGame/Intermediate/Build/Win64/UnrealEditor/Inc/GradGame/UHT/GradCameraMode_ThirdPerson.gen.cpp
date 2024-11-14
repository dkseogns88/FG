// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Camera/GradCameraMode_ThirdPerson.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradCameraMode_ThirdPerson() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraMode();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraMode_ThirdPerson();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraMode_ThirdPerson_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradCameraMode_ThirdPerson
void UGradCameraMode_ThirdPerson::StaticRegisterNativesUGradCameraMode_ThirdPerson()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradCameraMode_ThirdPerson);
UClass* Z_Construct_UClass_UGradCameraMode_ThirdPerson_NoRegister()
{
	return UGradCameraMode_ThirdPerson::StaticClass();
}
struct Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/GradCameraMode_ThirdPerson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Camera/GradCameraMode_ThirdPerson.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetCurve_MetaData[] = {
		{ "Category", "Third Person" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * member variables\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Camera/GradCameraMode_ThirdPerson.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "member variables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOffsetCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradCameraMode_ThirdPerson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve = { "TargetOffsetCurve", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCameraMode_ThirdPerson, TargetOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffsetCurve_MetaData), NewProp_TargetOffsetCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradCameraMode,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::ClassParams = {
	&UGradCameraMode_ThirdPerson::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradCameraMode_ThirdPerson()
{
	if (!Z_Registration_Info_UClass_UGradCameraMode_ThirdPerson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradCameraMode_ThirdPerson.OuterSingleton, Z_Construct_UClass_UGradCameraMode_ThirdPerson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradCameraMode_ThirdPerson.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradCameraMode_ThirdPerson>()
{
	return UGradCameraMode_ThirdPerson::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradCameraMode_ThirdPerson);
UGradCameraMode_ThirdPerson::~UGradCameraMode_ThirdPerson() {}
// End Class UGradCameraMode_ThirdPerson

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_ThirdPerson_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradCameraMode_ThirdPerson, UGradCameraMode_ThirdPerson::StaticClass, TEXT("UGradCameraMode_ThirdPerson"), &Z_Registration_Info_UClass_UGradCameraMode_ThirdPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradCameraMode_ThirdPerson), 407154575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_ThirdPerson_h_1518971959(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_ThirdPerson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_ThirdPerson_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
