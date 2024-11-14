// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Cosmetics/GradPawnComponent_CharacterParts.h"
#include "GradGame/Cosmetics/GradCharacterPartTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradPawnComponent_CharacterParts() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnComponent_CharacterParts();
GRADGAME_API UClass* Z_Construct_UClass_UGradPawnComponent_CharacterParts_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPart();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPartEntry();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradCharacterPartEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradCharacterPartEntry;
class UScriptStruct* FGradCharacterPartEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradCharacterPartEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradCharacterPartEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradCharacterPartEntry, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradCharacterPartEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GradCharacterPartEntry.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradCharacterPartEntry>()
{
	return FGradCharacterPartEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_CharacterParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Part_MetaData[] = {
		{ "Category", "GradCharacterPartEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character Part\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd == MetaData) */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_CharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Part\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd == MetaData)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Part;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradCharacterPartEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::NewProp_Part = { "Part", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradCharacterPartEntry, Part), Z_Construct_UScriptStruct_FGradCharacterPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Part_MetaData), NewProp_Part_MetaData) }; // 3153997023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::NewProp_Part,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradCharacterPartEntry",
	Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::PropPointers),
	sizeof(FGradCharacterPartEntry),
	alignof(FGradCharacterPartEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPartEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GradCharacterPartEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradCharacterPartEntry.InnerSingleton, Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradCharacterPartEntry.InnerSingleton;
}
// End ScriptStruct FGradCharacterPartEntry

// Begin Class UGradPawnComponent_CharacterParts Function AddCharacterPart
struct Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics
{
	struct GradPawnComponent_CharacterParts_eventAddCharacterPart_Parms
	{
		FGradCharacterPart NewPart;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cosmetics" },
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_CharacterParts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPart;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::NewProp_NewPart = { "NewPart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradPawnComponent_CharacterParts_eventAddCharacterPart_Parms, NewPart), Z_Construct_UScriptStruct_FGradCharacterPart, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPart_MetaData), NewProp_NewPart_MetaData) }; // 3153997023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::NewProp_NewPart,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradPawnComponent_CharacterParts, nullptr, "AddCharacterPart", nullptr, nullptr, Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::GradPawnComponent_CharacterParts_eventAddCharacterPart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::GradPawnComponent_CharacterParts_eventAddCharacterPart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradPawnComponent_CharacterParts::execAddCharacterPart)
{
	P_GET_STRUCT_REF(FGradCharacterPart,Z_Param_Out_NewPart);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCharacterPart(Z_Param_Out_NewPart);
	P_NATIVE_END;
}
// End Class UGradPawnComponent_CharacterParts Function AddCharacterPart

// Begin Class UGradPawnComponent_CharacterParts Function OnPossessedPawnChanged
struct Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics
{
	struct GradPawnComponent_CharacterParts_eventOnPossessedPawnChanged_Parms
	{
		APawn* OldPawn;
		APawn* NewPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UFUNCTION\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AddDynamic\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xc2\xb4\xef\xbf\xbd! */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_CharacterParts.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AddDynamic\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xc2\xb4\xef\xbf\xbd!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradPawnComponent_CharacterParts_eventOnPossessedPawnChanged_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradPawnComponent_CharacterParts_eventOnPossessedPawnChanged_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::NewProp_OldPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradPawnComponent_CharacterParts, nullptr, "OnPossessedPawnChanged", nullptr, nullptr, Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::GradPawnComponent_CharacterParts_eventOnPossessedPawnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::GradPawnComponent_CharacterParts_eventOnPossessedPawnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradPawnComponent_CharacterParts::execOnPossessedPawnChanged)
{
	P_GET_OBJECT(APawn,Z_Param_OldPawn);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPossessedPawnChanged(Z_Param_OldPawn,Z_Param_NewPawn);
	P_NATIVE_END;
}
// End Class UGradPawnComponent_CharacterParts Function OnPossessedPawnChanged

// Begin Class UGradPawnComponent_CharacterParts
void UGradPawnComponent_CharacterParts::StaticRegisterNativesUGradPawnComponent_CharacterParts()
{
	UClass* Class = UGradPawnComponent_CharacterParts::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCharacterPart", &UGradPawnComponent_CharacterParts::execAddCharacterPart },
		{ "OnPossessedPawnChanged", &UGradPawnComponent_CharacterParts::execOnPossessedPawnChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradPawnComponent_CharacterParts);
UClass* Z_Construct_UClass_UGradPawnComponent_CharacterParts_NoRegister()
{
	return UGradPawnComponent_CharacterParts::StaticClass();
}
struct Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Cosmetics/GradPawnComponent_CharacterParts.h" },
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_CharacterParts.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterParts_MetaData[] = {
		{ "Category", "Cosmetics" },
		{ "ModuleRelativePath", "Cosmetics/GradPawnComponent_CharacterParts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterParts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterParts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradPawnComponent_CharacterParts_AddCharacterPart, "AddCharacterPart" }, // 4029923155
		{ &Z_Construct_UFunction_UGradPawnComponent_CharacterParts_OnPossessedPawnChanged, "OnPossessedPawnChanged" }, // 2078537753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradPawnComponent_CharacterParts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::NewProp_CharacterParts_Inner = { "CharacterParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradCharacterPartEntry, METADATA_PARAMS(0, nullptr) }; // 1341566017
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::NewProp_CharacterParts = { "CharacterParts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradPawnComponent_CharacterParts, CharacterParts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterParts_MetaData), NewProp_CharacterParts_MetaData) }; // 1341566017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::NewProp_CharacterParts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::NewProp_CharacterParts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::ClassParams = {
	&UGradPawnComponent_CharacterParts::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradPawnComponent_CharacterParts()
{
	if (!Z_Registration_Info_UClass_UGradPawnComponent_CharacterParts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradPawnComponent_CharacterParts.OuterSingleton, Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradPawnComponent_CharacterParts.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradPawnComponent_CharacterParts>()
{
	return UGradPawnComponent_CharacterParts::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradPawnComponent_CharacterParts);
UGradPawnComponent_CharacterParts::~UGradPawnComponent_CharacterParts() {}
// End Class UGradPawnComponent_CharacterParts

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradCharacterPartEntry::StaticStruct, Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics::NewStructOps, TEXT("GradCharacterPartEntry"), &Z_Registration_Info_UScriptStruct_GradCharacterPartEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradCharacterPartEntry), 1341566017U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradPawnComponent_CharacterParts, UGradPawnComponent_CharacterParts::StaticClass, TEXT("UGradPawnComponent_CharacterParts"), &Z_Registration_Info_UClass_UGradPawnComponent_CharacterParts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradPawnComponent_CharacterParts), 2056893076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_2546300133(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
