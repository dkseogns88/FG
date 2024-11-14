// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Camera/GradCameraMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradCameraMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraMode();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraMode_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraModeStack();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraModeStack_NoRegister();
GRADGAME_API UEnum* Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Enum EGradCameraModeBlendFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGradCameraModeBlendFunction;
static UEnum* EGradCameraModeBlendFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGradCameraModeBlendFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGradCameraModeBlendFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("EGradCameraModeBlendFunction"));
	}
	return Z_Registration_Info_UEnum_EGradCameraModeBlendFunction.OuterSingleton;
}
template<> GRADGAME_API UEnum* StaticEnum<EGradCameraModeBlendFunction>()
{
	return EGradCameraModeBlendFunction_StaticEnum();
}
struct Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * [0,1]\xef\xbf\xbd\xef\xbf\xbd BlendFunction\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "COUNT.Name", "EGradCameraModeBlendFunction::COUNT" },
		{ "EaseIn.Comment", "/**\n\x09 * EaseIn/Out\xef\xbf\xbd\xef\xbf\xbd exponent \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xef\xbf\xbd:\n\x09 */" },
		{ "EaseIn.Name", "EGradCameraModeBlendFunction::EaseIn" },
		{ "EaseIn.ToolTip", "EaseIn/Out\xef\xbf\xbd\xef\xbf\xbd exponent \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xb4\xef\xbf\xbd:" },
		{ "EaseInOut.Name", "EGradCameraModeBlendFunction::EaseInOut" },
		{ "EaseOut.Name", "EGradCameraModeBlendFunction::EaseOut" },
		{ "Linear.Name", "EGradCameraModeBlendFunction::Linear" },
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[0,1]\xef\xbf\xbd\xef\xbf\xbd BlendFunction\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGradCameraModeBlendFunction::Linear", (int64)EGradCameraModeBlendFunction::Linear },
		{ "EGradCameraModeBlendFunction::EaseIn", (int64)EGradCameraModeBlendFunction::EaseIn },
		{ "EGradCameraModeBlendFunction::EaseOut", (int64)EGradCameraModeBlendFunction::EaseOut },
		{ "EGradCameraModeBlendFunction::EaseInOut", (int64)EGradCameraModeBlendFunction::EaseInOut },
		{ "EGradCameraModeBlendFunction::COUNT", (int64)EGradCameraModeBlendFunction::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	"EGradCameraModeBlendFunction",
	"EGradCameraModeBlendFunction",
	Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction()
{
	if (!Z_Registration_Info_UEnum_EGradCameraModeBlendFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGradCameraModeBlendFunction.InnerSingleton, Z_Construct_UEnum_GradGame_EGradCameraModeBlendFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGradCameraModeBlendFunction.InnerSingleton;
}
// End Enum EGradCameraModeBlendFunction

// Begin Class UGradCameraMode
void UGradCameraMode::StaticRegisterNativesUGradCameraMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradCameraMode);
UClass* Z_Construct_UClass_UGradCameraMode_NoRegister()
{
	return UGradCameraMode::StaticClass();
}
struct Z_Construct_UClass_UGradCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Blending \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "IncludePath", "Camera/GradCameraMode.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Blending \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "View" },
		{ "Clampmax", "170.0" },
		{ "ClampMin", "5.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Mode\xef\xbf\xbd\xef\xbf\xbd FOV */" },
#endif
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Mode\xef\xbf\xbd\xef\xbf\xbd FOV" },
#endif
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMin_MetaData[] = {
		{ "Category", "View" },
		{ "Clampmax", "89.9" },
		{ "ClampMin", "-89.9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** View\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pitch [Min, Max] */" },
#endif
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pitch [Min, Max]" },
#endif
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMax_MetaData[] = {
		{ "Category", "View" },
		{ "Clampmax", "89.9" },
		{ "ClampMin", "-89.9" },
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xf3\xb8\xb6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blend\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xf3\xb8\xb6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Blend\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xb9\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendExponent_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* EaseIn/Out\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Exponent\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EaseIn/Out\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Exponent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradCameraMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGradCameraMode_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCameraMode, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGradCameraMode_Statics::NewProp_ViewPitchMin = { "ViewPitchMin", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCameraMode, ViewPitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMin_MetaData), NewProp_ViewPitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGradCameraMode_Statics::NewProp_ViewPitchMax = { "ViewPitchMax", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCameraMode, ViewPitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMax_MetaData), NewProp_ViewPitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGradCameraMode_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCameraMode, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGradCameraMode_Statics::NewProp_BlendExponent = { "BlendExponent", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCameraMode, BlendExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendExponent_MetaData), NewProp_BlendExponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraMode_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraMode_Statics::NewProp_ViewPitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraMode_Statics::NewProp_ViewPitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraMode_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraMode_Statics::NewProp_BlendExponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradCameraMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradCameraMode_Statics::ClassParams = {
	&UGradCameraMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradCameraMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraMode_Statics::PropPointers),
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradCameraMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradCameraMode()
{
	if (!Z_Registration_Info_UClass_UGradCameraMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradCameraMode.OuterSingleton, Z_Construct_UClass_UGradCameraMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradCameraMode.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradCameraMode>()
{
	return UGradCameraMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradCameraMode);
UGradCameraMode::~UGradCameraMode() {}
// End Class UGradCameraMode

// Begin Class UGradCameraModeStack
void UGradCameraModeStack::StaticRegisterNativesUGradCameraModeStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradCameraModeStack);
UClass* Z_Construct_UClass_UGradCameraModeStack_NoRegister()
{
	return UGradCameraModeStack::StaticClass();
}
struct Z_Construct_UClass_UGradCameraModeStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Blending\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc */" },
#endif
		{ "IncludePath", "Camera/GradCameraMode.h" },
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Blending\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeInstances_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CameraMode\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd CameraMode\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Matrix Blend \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa5 */" },
#endif
		{ "ModuleRelativePath", "Camera/GradCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Matrix Blend \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradCameraModeStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradCameraModeStack_Statics::NewProp_CameraModeInstances_Inner = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradCameraModeStack_Statics::NewProp_CameraModeInstances = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCameraModeStack, CameraModeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeInstances_MetaData), NewProp_CameraModeInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradCameraModeStack_Statics::NewProp_CameraModeStack_Inner = { "CameraModeStack", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradCameraModeStack_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradCameraModeStack, CameraModeStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeStack_MetaData), NewProp_CameraModeStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradCameraModeStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraModeStack_Statics::NewProp_CameraModeInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraModeStack_Statics::NewProp_CameraModeInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraModeStack_Statics::NewProp_CameraModeStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradCameraModeStack_Statics::NewProp_CameraModeStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraModeStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradCameraModeStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraModeStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradCameraModeStack_Statics::ClassParams = {
	&UGradCameraModeStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradCameraModeStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraModeStack_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradCameraModeStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradCameraModeStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradCameraModeStack()
{
	if (!Z_Registration_Info_UClass_UGradCameraModeStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradCameraModeStack.OuterSingleton, Z_Construct_UClass_UGradCameraModeStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradCameraModeStack.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradCameraModeStack>()
{
	return UGradCameraModeStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradCameraModeStack);
UGradCameraModeStack::~UGradCameraModeStack() {}
// End Class UGradCameraModeStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGradCameraModeBlendFunction_StaticEnum, TEXT("EGradCameraModeBlendFunction"), &Z_Registration_Info_UEnum_EGradCameraModeBlendFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2109870237U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradCameraMode, UGradCameraMode::StaticClass, TEXT("UGradCameraMode"), &Z_Registration_Info_UClass_UGradCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradCameraMode), 1431505338U) },
		{ Z_Construct_UClass_UGradCameraModeStack, UGradCameraModeStack::StaticClass, TEXT("UGradCameraModeStack"), &Z_Registration_Info_UClass_UGradCameraModeStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradCameraModeStack), 1748307874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_2043591112(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
