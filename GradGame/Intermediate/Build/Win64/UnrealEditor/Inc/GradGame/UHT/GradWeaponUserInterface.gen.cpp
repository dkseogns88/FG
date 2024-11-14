// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/UI/Weapons/GradWeaponUserInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradWeaponUserInterface() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
GRADGAME_API UClass* Z_Construct_UClass_UGradWeaponInstance_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradWeaponUserInterface();
GRADGAME_API UClass* Z_Construct_UClass_UGradWeaponUserInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradWeaponUserInterface Function OnWeaponChanged
struct GradWeaponUserInterface_eventOnWeaponChanged_Parms
{
	UGradWeaponInstance* OldWeapon;
	UGradWeaponInstance* NewWeapon;
};
static FName NAME_UGradWeaponUserInterface_OnWeaponChanged = FName(TEXT("OnWeaponChanged"));
void UGradWeaponUserInterface::OnWeaponChanged(UGradWeaponInstance* OldWeapon, UGradWeaponInstance* NewWeapon)
{
	GradWeaponUserInterface_eventOnWeaponChanged_Parms Parms;
	Parms.OldWeapon=OldWeapon;
	Parms.NewWeapon=NewWeapon;
	ProcessEvent(FindFunctionChecked(NAME_UGradWeaponUserInterface_OnWeaponChanged),&Parms);
}
struct Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Weapon \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BP Event */" },
#endif
		{ "ModuleRelativePath", "UI/Weapons/GradWeaponUserInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapon \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BP Event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::NewProp_OldWeapon = { "OldWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradWeaponUserInterface_eventOnWeaponChanged_Parms, OldWeapon), Z_Construct_UClass_UGradWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradWeaponUserInterface_eventOnWeaponChanged_Parms, NewWeapon), Z_Construct_UClass_UGradWeaponInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::NewProp_OldWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::NewProp_NewWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradWeaponUserInterface, nullptr, "OnWeaponChanged", nullptr, nullptr, Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::PropPointers), sizeof(GradWeaponUserInterface_eventOnWeaponChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(GradWeaponUserInterface_eventOnWeaponChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGradWeaponUserInterface Function OnWeaponChanged

// Begin Class UGradWeaponUserInterface
void UGradWeaponUserInterface::StaticRegisterNativesUGradWeaponUserInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradWeaponUserInterface);
UClass* Z_Construct_UClass_UGradWeaponUserInterface_NoRegister()
{
	return UGradWeaponUserInterface::StaticClass();
}
struct Z_Construct_UClass_UGradWeaponUserInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Weapons/GradWeaponUserInterface.h" },
		{ "ModuleRelativePath", "UI/Weapons/GradWeaponUserInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd WeaponInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd (NativeTick\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd) */" },
#endif
		{ "ModuleRelativePath", "UI/Weapons/GradWeaponUserInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd WeaponInstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd (NativeTick\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradWeaponUserInterface_OnWeaponChanged, "OnWeaponChanged" }, // 516004967
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradWeaponUserInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradWeaponUserInterface_Statics::NewProp_CurrentInstance = { "CurrentInstance", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradWeaponUserInterface, CurrentInstance), Z_Construct_UClass_UGradWeaponInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInstance_MetaData), NewProp_CurrentInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradWeaponUserInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradWeaponUserInterface_Statics::NewProp_CurrentInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradWeaponUserInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradWeaponUserInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradWeaponUserInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradWeaponUserInterface_Statics::ClassParams = {
	&UGradWeaponUserInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradWeaponUserInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradWeaponUserInterface_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradWeaponUserInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradWeaponUserInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradWeaponUserInterface()
{
	if (!Z_Registration_Info_UClass_UGradWeaponUserInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradWeaponUserInterface.OuterSingleton, Z_Construct_UClass_UGradWeaponUserInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradWeaponUserInterface.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradWeaponUserInterface>()
{
	return UGradWeaponUserInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradWeaponUserInterface);
UGradWeaponUserInterface::~UGradWeaponUserInterface() {}
// End Class UGradWeaponUserInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_Weapons_GradWeaponUserInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradWeaponUserInterface, UGradWeaponUserInterface::StaticClass, TEXT("UGradWeaponUserInterface"), &Z_Registration_Info_UClass_UGradWeaponUserInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradWeaponUserInterface), 3314106649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_Weapons_GradWeaponUserInterface_h_336353263(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_Weapons_GradWeaponUserInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_UI_Weapons_GradWeaponUserInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
