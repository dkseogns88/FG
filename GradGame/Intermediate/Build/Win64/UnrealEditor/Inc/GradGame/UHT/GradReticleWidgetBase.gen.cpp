// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/UI/Weapons/GradReticleWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradReticleWidgetBase() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GRADGAME_API UClass* Z_Construct_UClass_UGradInventoryItemInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradReticleWidgetBase();
GRADGAME_API UClass* Z_Construct_UClass_UGradReticleWidgetBase_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradWeaponInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradReticleWidgetBase Function InitializeFromWeapon
struct Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics
{
	struct GradReticleWidgetBase_eventInitializeFromWeapon_Parms
	{
		UGradWeaponInstance* InWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Weapons/GradReticleWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::NewProp_InWeapon = { "InWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradReticleWidgetBase_eventInitializeFromWeapon_Parms, InWeapon), Z_Construct_UClass_UGradWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::NewProp_InWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradReticleWidgetBase, nullptr, "InitializeFromWeapon", nullptr, nullptr, Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::GradReticleWidgetBase_eventInitializeFromWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::GradReticleWidgetBase_eventInitializeFromWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradReticleWidgetBase::execInitializeFromWeapon)
{
	P_GET_OBJECT(UGradWeaponInstance,Z_Param_InWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromWeapon(Z_Param_InWeapon);
	P_NATIVE_END;
}
// End Class UGradReticleWidgetBase Function InitializeFromWeapon

// Begin Class UGradReticleWidgetBase Function OnWeaponInitialized
static FName NAME_UGradReticleWidgetBase_OnWeaponInitialized = FName(TEXT("OnWeaponInitialized"));
void UGradReticleWidgetBase::OnWeaponInitialized()
{
	ProcessEvent(FindFunctionChecked(NAME_UGradReticleWidgetBase_OnWeaponInitialized),NULL);
}
struct Z_Construct_UFunction_UGradReticleWidgetBase_OnWeaponInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Weapons/GradReticleWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradReticleWidgetBase_OnWeaponInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradReticleWidgetBase, nullptr, "OnWeaponInitialized", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradReticleWidgetBase_OnWeaponInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradReticleWidgetBase_OnWeaponInitialized_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGradReticleWidgetBase_OnWeaponInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradReticleWidgetBase_OnWeaponInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGradReticleWidgetBase Function OnWeaponInitialized

// Begin Class UGradReticleWidgetBase
void UGradReticleWidgetBase::StaticRegisterNativesUGradReticleWidgetBase()
{
	UClass* Class = UGradReticleWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeFromWeapon", &UGradReticleWidgetBase::execInitializeFromWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradReticleWidgetBase);
UClass* Z_Construct_UClass_UGradReticleWidgetBase_NoRegister()
{
	return UGradReticleWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UGradReticleWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Weapons/GradReticleWidgetBase.h" },
		{ "ModuleRelativePath", "UI/Weapons/GradReticleWidgetBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInstance_MetaData[] = {
		{ "Category", "GradReticleWidgetBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * WeaponInstance/InventoryInstance\xeb\xa5\xbc \xec\x83\x81\xed\x83\x9c \xec\xb6\x94\xec\xa0\x81\xec\x9a\xa9\xec\x9c\xbc\xeb\xa1\x9c \xec\xba\x90\xec\x8b\xb1 \xeb\xaa\xa9\xec\xa0\x81\n\x09 */" },
#endif
		{ "ModuleRelativePath", "UI/Weapons/GradReticleWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WeaponInstance/InventoryInstance\xeb\xa5\xbc \xec\x83\x81\xed\x83\x9c \xec\xb6\x94\xec\xa0\x81\xec\x9a\xa9\xec\x9c\xbc\xeb\xa1\x9c \xec\xba\x90\xec\x8b\xb1 \xeb\xaa\xa9\xec\xa0\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryInstance_MetaData[] = {
		{ "Category", "GradReticleWidgetBase" },
		{ "ModuleRelativePath", "UI/Weapons/GradReticleWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradReticleWidgetBase_InitializeFromWeapon, "InitializeFromWeapon" }, // 2085629197
		{ &Z_Construct_UFunction_UGradReticleWidgetBase_OnWeaponInitialized, "OnWeaponInitialized" }, // 2077622410
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradReticleWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradReticleWidgetBase_Statics::NewProp_WeaponInstance = { "WeaponInstance", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradReticleWidgetBase, WeaponInstance), Z_Construct_UClass_UGradWeaponInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInstance_MetaData), NewProp_WeaponInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradReticleWidgetBase_Statics::NewProp_InventoryInstance = { "InventoryInstance", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradReticleWidgetBase, InventoryInstance), Z_Construct_UClass_UGradInventoryItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryInstance_MetaData), NewProp_InventoryInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradReticleWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradReticleWidgetBase_Statics::NewProp_WeaponInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradReticleWidgetBase_Statics::NewProp_InventoryInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradReticleWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradReticleWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradReticleWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradReticleWidgetBase_Statics::ClassParams = {
	&UGradReticleWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradReticleWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradReticleWidgetBase_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradReticleWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradReticleWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradReticleWidgetBase()
{
	if (!Z_Registration_Info_UClass_UGradReticleWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradReticleWidgetBase.OuterSingleton, Z_Construct_UClass_UGradReticleWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradReticleWidgetBase.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradReticleWidgetBase>()
{
	return UGradReticleWidgetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradReticleWidgetBase);
UGradReticleWidgetBase::~UGradReticleWidgetBase() {}
// End Class UGradReticleWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradReticleWidgetBase, UGradReticleWidgetBase::StaticClass, TEXT("UGradReticleWidgetBase"), &Z_Registration_Info_UClass_UGradReticleWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradReticleWidgetBase), 2828830229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_235738000(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
