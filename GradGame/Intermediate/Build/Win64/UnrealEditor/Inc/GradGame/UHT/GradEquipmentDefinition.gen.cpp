// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Equipment/GradEquipmentDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradEquipmentDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradAbilitySet_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentDefinition();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentDefinition_NoRegister();
GRADGAME_API UClass* Z_Construct_UClass_UGradEquipmentInstance_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradEquipmentActorToSpawn
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradEquipmentActorToSpawn;
class UScriptStruct* FGradEquipmentActorToSpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradEquipmentActorToSpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradEquipmentActorToSpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradEquipmentActorToSpawn"));
	}
	return Z_Registration_Info_UScriptStruct_GradEquipmentActorToSpawn.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradEquipmentActorToSpawn>()
{
	return FGradEquipmentActorToSpawn::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/GradEquipmentDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Actor \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (== Actor\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Asset\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd) */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Actor \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (== Actor\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xd3\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Asset\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Bone Socket\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Bone Socket\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachTransform_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Socket\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Transformation\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd: (Rotation, Position, Scale) */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Transformation\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd: (Rotation, Position, Scale)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttachTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradEquipmentActorToSpawn>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradEquipmentActorToSpawn, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToSpawn_MetaData), NewProp_ActorToSpawn_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradEquipmentActorToSpawn, AttachSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocket_MetaData), NewProp_AttachSocket_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::NewProp_AttachTransform = { "AttachTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradEquipmentActorToSpawn, AttachTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachTransform_MetaData), NewProp_AttachTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::NewProp_ActorToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::NewProp_AttachSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::NewProp_AttachTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradEquipmentActorToSpawn",
	Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::PropPointers),
	sizeof(FGradEquipmentActorToSpawn),
	alignof(FGradEquipmentActorToSpawn),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn()
{
	if (!Z_Registration_Info_UScriptStruct_GradEquipmentActorToSpawn.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradEquipmentActorToSpawn.InnerSingleton, Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradEquipmentActorToSpawn.InnerSingleton;
}
// End ScriptStruct FGradEquipmentActorToSpawn

// Begin Class UGradEquipmentDefinition
void UGradEquipmentDefinition::StaticRegisterNativesUGradEquipmentDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradEquipmentDefinition);
UClass* Z_Construct_UClass_UGradEquipmentDefinition_NoRegister()
{
	return UGradEquipmentDefinition::StaticClass();
}
struct Z_Construct_UClass_UGradEquipmentDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GradEquipementDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "Equipment/GradEquipmentDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Equipment/GradEquipmentDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GradEquipementDefinition\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd, \xef\xbf\xbd\xee\xb6\xb2 \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Spawn\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd, \xef\xbf\xbd\xee\xb6\xb2 \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Spawn\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToSpawn_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** - \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xee\xbc\xad Array \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb4\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "- \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xee\xbc\xad Array \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySetsToGrant_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Ability Set */" },
#endif
		{ "ModuleRelativePath", "Equipment/GradEquipmentDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Ability Set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstanceType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorsToSpawn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySetsToGrant_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySetsToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradEquipmentDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradEquipmentDefinition, InstanceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UGradEquipmentInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceType_MetaData), NewProp_InstanceType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_ActorsToSpawn_Inner = { "ActorsToSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn, METADATA_PARAMS(0, nullptr) }; // 4258504132
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_ActorsToSpawn = { "ActorsToSpawn", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradEquipmentDefinition, ActorsToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToSpawn_MetaData), NewProp_ActorsToSpawn_MetaData) }; // 4258504132
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant_Inner = { "AbilitySetsToGrant", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGradAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant = { "AbilitySetsToGrant", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGradEquipmentDefinition, AbilitySetsToGrant), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySetsToGrant_MetaData), NewProp_AbilitySetsToGrant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGradEquipmentDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_InstanceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_ActorsToSpawn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_ActorsToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGradEquipmentDefinition_Statics::NewProp_AbilitySetsToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGradEquipmentDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradEquipmentDefinition_Statics::ClassParams = {
	&UGradEquipmentDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGradEquipmentDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradEquipmentDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradEquipmentDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradEquipmentDefinition()
{
	if (!Z_Registration_Info_UClass_UGradEquipmentDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradEquipmentDefinition.OuterSingleton, Z_Construct_UClass_UGradEquipmentDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradEquipmentDefinition.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradEquipmentDefinition>()
{
	return UGradEquipmentDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradEquipmentDefinition);
UGradEquipmentDefinition::~UGradEquipmentDefinition() {}
// End Class UGradEquipmentDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentDefinition_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradEquipmentActorToSpawn::StaticStruct, Z_Construct_UScriptStruct_FGradEquipmentActorToSpawn_Statics::NewStructOps, TEXT("GradEquipmentActorToSpawn"), &Z_Registration_Info_UScriptStruct_GradEquipmentActorToSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradEquipmentActorToSpawn), 4258504132U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradEquipmentDefinition, UGradEquipmentDefinition::StaticClass, TEXT("UGradEquipmentDefinition"), &Z_Registration_Info_UClass_UGradEquipmentDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradEquipmentDefinition), 773881125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentDefinition_h_1148139984(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentDefinition_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentDefinition_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
