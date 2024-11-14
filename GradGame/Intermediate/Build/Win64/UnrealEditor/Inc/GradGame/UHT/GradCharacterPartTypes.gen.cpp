// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Cosmetics/GradCharacterPartTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradCharacterPartTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPart();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPartHandle();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradCharacterPartHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradCharacterPartHandle;
class UScriptStruct* FGradCharacterPartHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradCharacterPartHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradCharacterPartHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradCharacterPartHandle, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradCharacterPartHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GradCharacterPartHandle.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradCharacterPartHandle>()
{
	return FGradCharacterPartHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/GradCharacterPartTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartHandle_MetaData[] = {
		{ "ModuleRelativePath", "Cosmetics/GradCharacterPartTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradCharacterPartHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::NewProp_PartHandle = { "PartHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradCharacterPartHandle, PartHandle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartHandle_MetaData), NewProp_PartHandle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::NewProp_PartHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradCharacterPartHandle",
	Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::PropPointers),
	sizeof(FGradCharacterPartHandle),
	alignof(FGradCharacterPartHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPartHandle()
{
	if (!Z_Registration_Info_UScriptStruct_GradCharacterPartHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradCharacterPartHandle.InnerSingleton, Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradCharacterPartHandle.InnerSingleton;
}
// End ScriptStruct FGradCharacterPartHandle

// Begin ScriptStruct FGradCharacterPart
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradCharacterPart;
class UScriptStruct* FGradCharacterPart::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradCharacterPart.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradCharacterPart.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradCharacterPart, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradCharacterPart"));
	}
	return Z_Registration_Info_UScriptStruct_GradCharacterPart.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradCharacterPart>()
{
	return FGradCharacterPart::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradCharacterPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Cosmetics/GradCharacterPartTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartClass_MetaData[] = {
		{ "Category", "GradCharacterPart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Actor\xef\xbf\xbd\xef\xbf\xbd Class \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd -> Actor BP\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradCharacterPartTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Actor\xef\xbf\xbd\xef\xbf\xbd Class \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd -> Actor BP\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "GradCharacterPart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xc2\xb5\xef\xbf\xbd \xc6\xaf\xef\xbf\xbd\xef\xbf\xbd Bone\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xb3\xef\xbf\xbd Root\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) */" },
#endif
		{ "ModuleRelativePath", "Cosmetics/GradCharacterPartTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xc2\xb5\xef\xbf\xbd \xc6\xaf\xef\xbf\xbd\xef\xbf\xbd Bone\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb5\xc7\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd7\xb3\xef\xbf\xbd Root\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PartClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradCharacterPart>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGradCharacterPart_Statics::NewProp_PartClass = { "PartClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradCharacterPart, PartClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartClass_MetaData), NewProp_PartClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGradCharacterPart_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradCharacterPart, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradCharacterPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradCharacterPart_Statics::NewProp_PartClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradCharacterPart_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradCharacterPart_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradCharacterPart",
	Z_Construct_UScriptStruct_FGradCharacterPart_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPart_Statics::PropPointers),
	sizeof(FGradCharacterPart),
	alignof(FGradCharacterPart),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradCharacterPart_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradCharacterPart_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradCharacterPart()
{
	if (!Z_Registration_Info_UScriptStruct_GradCharacterPart.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradCharacterPart.InnerSingleton, Z_Construct_UScriptStruct_FGradCharacterPart_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradCharacterPart.InnerSingleton;
}
// End ScriptStruct FGradCharacterPart

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradCharacterPartTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradCharacterPartHandle::StaticStruct, Z_Construct_UScriptStruct_FGradCharacterPartHandle_Statics::NewStructOps, TEXT("GradCharacterPartHandle"), &Z_Registration_Info_UScriptStruct_GradCharacterPartHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradCharacterPartHandle), 2931219471U) },
		{ FGradCharacterPart::StaticStruct, Z_Construct_UScriptStruct_FGradCharacterPart_Statics::NewStructOps, TEXT("GradCharacterPart"), &Z_Registration_Info_UScriptStruct_GradCharacterPart, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradCharacterPart), 3153997023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradCharacterPartTypes_h_3289578896(TEXT("/Script/GradGame"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradCharacterPartTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Cosmetics_GradCharacterPartTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
