// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Camera/GradCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradCameraComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraComponent_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraModeStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradCameraComponent
void UGradCameraComponent::StaticRegisterNativesUGradCameraComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradCameraComponent);
UClass* Z_Construct_UClass_UGradCameraComponent_NoRegister()
{
	return UGradCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UGradCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/GradCameraComponent.h" },
		{ "ModuleRelativePath", "Camera/GradCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd blending \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd stack */" },
#endif
		{ "ModuleRelativePath", "Camera/GradCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd blending \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd stack" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradCameraComponent_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCameraComponent, CameraModeStack), Z_Construct_UClass_UGradCameraModeStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeStack_MetaData), NewProp_CameraModeStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraComponent_Statics::NewProp_CameraModeStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradCameraComponent_Statics::ClassParams = {
	&UGradCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradCameraComponent()
{
	if (!Z_Registration_Info_UClass_UGradCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradCameraComponent.OuterSingleton, Z_Construct_UClass_UGradCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradCameraComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradCameraComponent>()
{
	return UGradCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradCameraComponent);
UGradCameraComponent::~UGradCameraComponent() {}
// End Class UGradCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradCameraComponent, UGradCameraComponent::StaticClass, TEXT("UGradCameraComponent"), &Z_Registration_Info_UClass_UGradCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradCameraComponent), 426746550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_294899809(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
