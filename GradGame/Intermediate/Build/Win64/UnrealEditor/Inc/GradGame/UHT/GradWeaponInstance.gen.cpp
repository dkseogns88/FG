// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Weapons/GradWeaponInstance.h"
#include "GradGame/Cosmetics/GradCosmeticAnimationTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradWeaponInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentInstance();
GRADGAME_API UClass* Z_Construct_UClass_UGradWeaponInstance();
GRADGAME_API UClass* Z_Construct_UClass_UGradWeaponInstance_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradWeaponInstance Function PickBestAnimLayer
struct Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics
{
	struct GradWeaponInstance_eventPickBestAnimLayer_Parms
	{
		bool bEquipped;
		FGameplayTagContainer CosmeticTags;
		TSubclassOf<UAnimInstance> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Weapon\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AnimLayer\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf */" },
#endif
		{ "ModuleRelativePath", "Weapons/GradWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AnimLayer\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CosmeticTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEquipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipped;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CosmeticTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped_SetBit(void* Obj)
{
	((GradWeaponInstance_eventPickBestAnimLayer_Parms*)Obj)->bEquipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped = { "bEquipped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GradWeaponInstance_eventPickBestAnimLayer_Parms), &Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::NewProp_CosmeticTags = { "CosmeticTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradWeaponInstance_eventPickBestAnimLayer_Parms, CosmeticTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CosmeticTags_MetaData), NewProp_CosmeticTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradWeaponInstance_eventPickBestAnimLayer_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::NewProp_bEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::NewProp_CosmeticTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradWeaponInstance, nullptr, "PickBestAnimLayer", nullptr, nullptr, Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::GradWeaponInstance_eventPickBestAnimLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::GradWeaponInstance_eventPickBestAnimLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradWeaponInstance::execPickBestAnimLayer)
{
	P_GET_UBOOL(Z_Param_bEquipped);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_CosmeticTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UAnimInstance>*)Z_Param__Result=P_THIS->PickBestAnimLayer(Z_Param_bEquipped,Z_Param_Out_CosmeticTags);
	P_NATIVE_END;
}
// End Class UGradWeaponInstance Function PickBestAnimLayer

// Begin Class UGradWeaponInstance
void UGradWeaponInstance::StaticRegisterNativesUGradWeaponInstance()
{
	UClass* Class = UGradWeaponInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PickBestAnimLayer", &UGradWeaponInstance::execPickBestAnimLayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradWeaponInstance);
UClass* Z_Construct_UClass_UGradWeaponInstance_NoRegister()
{
	return UGradWeaponInstance::StaticClass();
}
struct Z_Construct_UClass_UGradWeaponInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapons/GradWeaponInstance.h" },
		{ "ModuleRelativePath", "Weapons/GradWeaponInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedAnimSet_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Weapon\xef\xbf\xbd\xef\xbf\xbd Equip/Unequip\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Animation Set \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Weapons/GradWeaponInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon\xef\xbf\xbd\xef\xbf\xbd Equip/Unequip\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Animation Set \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnequippedAnimSet_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Weapons/GradWeaponInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquippedAnimSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnequippedAnimSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradWeaponInstance_PickBestAnimLayer, "PickBestAnimLayer" }, // 3654724653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradWeaponInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradWeaponInstance_Statics::NewProp_EquippedAnimSet = { "EquippedAnimSet", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradWeaponInstance, EquippedAnimSet), Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedAnimSet_MetaData), NewProp_EquippedAnimSet_MetaData) }; // 538081497
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradWeaponInstance_Statics::NewProp_UnequippedAnimSet = { "UnequippedAnimSet", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradWeaponInstance, UnequippedAnimSet), Z_Construct_UScriptStruct_FGradAnimLayerSelectionSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnequippedAnimSet_MetaData), NewProp_UnequippedAnimSet_MetaData) }; // 538081497
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradWeaponInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradWeaponInstance_Statics::NewProp_EquippedAnimSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradWeaponInstance_Statics::NewProp_UnequippedAnimSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradWeaponInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradWeaponInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGradEquipmentInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradWeaponInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradWeaponInstance_Statics::ClassParams = {
	&UGradWeaponInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradWeaponInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradWeaponInstance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradWeaponInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradWeaponInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradWeaponInstance()
{
	if (!Z_Registration_Info_UClass_UGradWeaponInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradWeaponInstance.OuterSingleton, Z_Construct_UClass_UGradWeaponInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradWeaponInstance.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradWeaponInstance>()
{
	return UGradWeaponInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradWeaponInstance);
UGradWeaponInstance::~UGradWeaponInstance() {}
// End Class UGradWeaponInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradWeaponInstance, UGradWeaponInstance::StaticClass, TEXT("UGradWeaponInstance"), &Z_Registration_Info_UClass_UGradWeaponInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradWeaponInstance), 602522813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_4266039226(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
