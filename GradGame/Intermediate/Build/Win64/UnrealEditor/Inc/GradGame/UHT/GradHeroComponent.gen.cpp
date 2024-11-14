// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Character/GradHeroComponent.h"
#include "GradGame/Input/GradMappableConfigPair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradHeroComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraMode_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradHeroComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradHeroComponent_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradMappableConfigPair();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradHeroComponent Function FindHeroComponent
struct Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics
{
	struct GradHeroComponent_eventFindHeroComponent_Parms
	{
		const AActor* Actor;
		UGradHeroComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grad|Hero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the hero component if one exists on the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Character/GradHeroComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the hero component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradHeroComponent_eventFindHeroComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradHeroComponent_eventFindHeroComponent_Parms, ReturnValue), Z_Construct_UClass_UGradHeroComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradHeroComponent, nullptr, "FindHeroComponent", nullptr, nullptr, Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::GradHeroComponent_eventFindHeroComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::GradHeroComponent_eventFindHeroComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradHeroComponent::execFindHeroComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGradHeroComponent**)Z_Param__Result=UGradHeroComponent::FindHeroComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UGradHeroComponent Function FindHeroComponent

// Begin Class UGradHeroComponent
void UGradHeroComponent::StaticRegisterNativesUGradHeroComponent()
{
	UClass* Class = UGradHeroComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindHeroComponent", &UGradHeroComponent::execFindHeroComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradHeroComponent);
UClass* Z_Construct_UClass_UGradHeroComponent_NoRegister()
{
	return UGradHeroComponent::StaticClass();
}
struct Z_Construct_UClass_UGradHeroComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * component that sets up input and camera handling for player controlled pawns (or bots that simulate players)\n * - this depends on a PawnExtensionComponent to coordinate initialization\n *\n * \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd, \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/GradHeroComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Character/GradHeroComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "component that sets up input and camera handling for player controlled pawns (or bots that simulate players)\n- this depends on a PawnExtensionComponent to coordinate initialization\n\n\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd, \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputConfigs_MetaData[] = {
		{ "Category", "GradHeroComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* member variables\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Character/GradHeroComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "member variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCameraMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera mode set by an ability. */" },
#endif
		{ "ModuleRelativePath", "Character/GradHeroComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode set by an ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputConfigs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradHeroComponent_FindHeroComponent, "FindHeroComponent" }, // 2254454339
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradHeroComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradHeroComponent_Statics::NewProp_DefaultInputConfigs_Inner = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradMappableConfigPair, METADATA_PARAMS(0, nullptr) }; // 2730142954
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradHeroComponent_Statics::NewProp_DefaultInputConfigs = { "DefaultInputConfigs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradHeroComponent, DefaultInputConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputConfigs_MetaData), NewProp_DefaultInputConfigs_MetaData) }; // 2730142954
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGradHeroComponent_Statics::NewProp_AbilityCameraMode = { "AbilityCameraMode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradHeroComponent, AbilityCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCameraMode_MetaData), NewProp_AbilityCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradHeroComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHeroComponent_Statics::NewProp_DefaultInputConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHeroComponent_Statics::NewProp_DefaultInputConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradHeroComponent_Statics::NewProp_AbilityCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHeroComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradHeroComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHeroComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGradHeroComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UGradHeroComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradHeroComponent_Statics::ClassParams = {
	&UGradHeroComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradHeroComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradHeroComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradHeroComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradHeroComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradHeroComponent()
{
	if (!Z_Registration_Info_UClass_UGradHeroComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradHeroComponent.OuterSingleton, Z_Construct_UClass_UGradHeroComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradHeroComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradHeroComponent>()
{
	return UGradHeroComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradHeroComponent);
UGradHeroComponent::~UGradHeroComponent() {}
// End Class UGradHeroComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHeroComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradHeroComponent, UGradHeroComponent::StaticClass, TEXT("UGradHeroComponent"), &Z_Registration_Info_UClass_UGradHeroComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradHeroComponent), 2291724382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHeroComponent_h_856333029(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHeroComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHeroComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
