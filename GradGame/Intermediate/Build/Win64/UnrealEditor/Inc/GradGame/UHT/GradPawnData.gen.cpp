// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Character/GradPawnData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradPawnData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySet_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilityTagRelationshipMapping_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradCameraMode_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradInputConfig_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnData();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradPawnData
void UGradPawnData::StaticRegisterNativesUGradPawnData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradPawnData);
UClass* Z_Construct_UClass_UGradPawnData_NoRegister()
{
	return UGradPawnData::StaticClass();
}
struct Z_Construct_UClass_UGradPawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Character/GradPawnData.h" },
		{ "ModuleRelativePath", "Character/GradPawnData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
		{ "Category", "Grad|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn\xef\xbf\xbd\xef\xbf\xbd Class */" },
#endif
		{ "ModuleRelativePath", "Character/GradPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn\xef\xbf\xbd\xef\xbf\xbd Class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraMode_MetaData[] = {
		{ "Category", "Grad|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Mode */" },
#endif
		{ "ModuleRelativePath", "Character/GradPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Grad|InputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** input configuration used by player controlled pawns to create input mappings and bind input actions */" },
#endif
		{ "ModuleRelativePath", "Character/GradPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "input configuration used by player controlled pawns to create input mappings and bind input actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetPawnClass_MetaData[] = {
		{ "Category", "Grad|NetPawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn\xef\xbf\xbd\xef\xbf\xbd NetClass */" },
#endif
		{ "ModuleRelativePath", "Character/GradPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn\xef\xbf\xbd\xef\xbf\xbd NetClass" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySets_MetaData[] = {
		{ "Category", "Grad|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd Pawn\xef\xbf\xbd\xef\xbf\xbd Ability System\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AbilitySet */" },
#endif
		{ "ModuleRelativePath", "Character/GradPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd Pawn\xef\xbf\xbd\xef\xbf\xbd Ability System\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AbilitySet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Category", "Grad|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What mapping of ability tags to use for actions taking by this pawn\n" },
#endif
		{ "ModuleRelativePath", "Character/GradPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What mapping of ability tags to use for actions taking by this pawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NetPawnClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradPawnData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGradPawnData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnData, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnClass_MetaData), NewProp_PawnClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGradPawnData_Statics::NewProp_DefaultCameraMode = { "DefaultCameraMode", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnData, DefaultCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraMode_MetaData), NewProp_DefaultCameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradPawnData_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnData, InputConfig), Z_Construct_UClass_UGradInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGradPawnData_Statics::NewProp_NetPawnClass = { "NetPawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnData, NetPawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetPawnClass_MetaData), NewProp_NetPawnClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradPawnData_Statics::NewProp_AbilitySets_Inner = { "AbilitySets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradPawnData_Statics::NewProp_AbilitySets = { "AbilitySets", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnData, AbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySets_MetaData), NewProp_AbilitySets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradPawnData_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnData, TagRelationshipMapping), Z_Construct_UClass_UGradAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradPawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnData_Statics::NewProp_PawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnData_Statics::NewProp_DefaultCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnData_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnData_Statics::NewProp_NetPawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnData_Statics::NewProp_AbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnData_Statics::NewProp_AbilitySets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnData_Statics::NewProp_TagRelationshipMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradPawnData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradPawnData_Statics::ClassParams = {
	&UGradPawnData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradPawnData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradPawnData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradPawnData()
{
	if (!Z_Registration_Info_UClass_UGradPawnData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradPawnData.OuterSingleton, Z_Construct_UClass_UGradPawnData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradPawnData.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradPawnData>()
{
	return UGradPawnData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradPawnData);
UGradPawnData::~UGradPawnData() {}
// End Class UGradPawnData

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradPawnData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradPawnData, UGradPawnData::StaticClass, TEXT("UGradPawnData"), &Z_Registration_Info_UClass_UGradPawnData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradPawnData), 216460148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradPawnData_h_1337132781(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradPawnData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradPawnData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
