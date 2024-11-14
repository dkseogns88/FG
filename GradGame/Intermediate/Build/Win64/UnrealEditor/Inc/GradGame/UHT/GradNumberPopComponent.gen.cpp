// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Feedback/NumberPops/GradNumberPopComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradNumberPopComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GRADGAME_API UClass* Z_Construct_UClass_UGradNumberPopComponent();
GRADGAME_API UClass* Z_Construct_UClass_UGradNumberPopComponent_NoRegister();
GRADGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGradNumberPopRequest();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UControllerComponent();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin ScriptStruct FGradNumberPopRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GradNumberPopRequest;
class UScriptStruct* FGradNumberPopRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GradNumberPopRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GradNumberPopRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGradNumberPopRequest, (UObject*)Z_Construct_UPackage__Script_GradGame(), TEXT("GradNumberPopRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GradNumberPopRequest.OuterSingleton;
}
template<> GRADGAME_API UScriptStruct* StaticStruct<FGradNumberPopRequest>()
{
	return FGradNumberPopRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "Category", "Grad|Number Pops" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The world location to create the number pop at\n" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The world location to create the number pop at" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "Category", "Grad|Number Pops" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags related to the source/cause of the number pop (for determining a style)\n" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags related to the source/cause of the number pop (for determining a style)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "Grad|Number Pops" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags related to the target of the number pop (for determining a style)\n" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags related to the target of the number pop (for determining a style)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberToDisplay_MetaData[] = {
		{ "Category", "Grad|Number Pops" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number to display\n" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number to display" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCriticalDamage_MetaData[] = {
		{ "Category", "Grad|Number Pops" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the number is 'critical' or not (@TODO: move to a tag)\n" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the number is 'critical' or not (@TODO: move to a tag)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberToDisplay;
	static void NewProp_bIsCriticalDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGradNumberPopRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradNumberPopRequest, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradNumberPopRequest, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradNumberPopRequest, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_NumberToDisplay = { "NumberToDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGradNumberPopRequest, NumberToDisplay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberToDisplay_MetaData), NewProp_NumberToDisplay_MetaData) };
void Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_bIsCriticalDamage_SetBit(void* Obj)
{
	((FGradNumberPopRequest*)Obj)->bIsCriticalDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_bIsCriticalDamage = { "bIsCriticalDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGradNumberPopRequest), &Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_bIsCriticalDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCriticalDamage_MetaData), NewProp_bIsCriticalDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_NumberToDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewProp_bIsCriticalDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
	nullptr,
	&NewStructOps,
	"GradNumberPopRequest",
	Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::PropPointers),
	sizeof(FGradNumberPopRequest),
	alignof(FGradNumberPopRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGradNumberPopRequest()
{
	if (!Z_Registration_Info_UScriptStruct_GradNumberPopRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GradNumberPopRequest.InnerSingleton, Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GradNumberPopRequest.InnerSingleton;
}
// End ScriptStruct FGradNumberPopRequest

// Begin Class UGradNumberPopComponent Function AddNumberPop
struct Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics
{
	struct GradNumberPopComponent_eventAddNumberPop_Parms
	{
		FGradNumberPopRequest NewRequest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a damage number to the damage number list for visualization */" },
#endif
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a damage number to the damage number list for visualization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::NewProp_NewRequest = { "NewRequest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GradNumberPopComponent_eventAddNumberPop_Parms, NewRequest), Z_Construct_UScriptStruct_FGradNumberPopRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRequest_MetaData), NewProp_NewRequest_MetaData) }; // 1072775566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::NewProp_NewRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGradNumberPopComponent, nullptr, "AddNumberPop", nullptr, nullptr, Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::GradNumberPopComponent_eventAddNumberPop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::GradNumberPopComponent_eventAddNumberPop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGradNumberPopComponent::execAddNumberPop)
{
	P_GET_STRUCT_REF(FGradNumberPopRequest,Z_Param_Out_NewRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNumberPop(Z_Param_Out_NewRequest);
	P_NATIVE_END;
}
// End Class UGradNumberPopComponent Function AddNumberPop

// Begin Class UGradNumberPopComponent
void UGradNumberPopComponent::StaticRegisterNativesUGradNumberPopComponent()
{
	UClass* Class = UGradNumberPopComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNumberPop", &UGradNumberPopComponent::execAddNumberPop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradNumberPopComponent);
UClass* Z_Construct_UClass_UGradNumberPopComponent_NoRegister()
{
	return UGradNumberPopComponent::StaticClass();
}
struct Z_Construct_UClass_UGradNumberPopComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Feedback/NumberPops/GradNumberPopComponent.h" },
		{ "ModuleRelativePath", "Feedback/NumberPops/GradNumberPopComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGradNumberPopComponent_AddNumberPop, "AddNumberPop" }, // 1346049829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradNumberPopComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradNumberPopComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradNumberPopComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradNumberPopComponent_Statics::ClassParams = {
	&UGradNumberPopComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradNumberPopComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradNumberPopComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradNumberPopComponent()
{
	if (!Z_Registration_Info_UClass_UGradNumberPopComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradNumberPopComponent.OuterSingleton, Z_Construct_UClass_UGradNumberPopComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradNumberPopComponent.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradNumberPopComponent>()
{
	return UGradNumberPopComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradNumberPopComponent);
UGradNumberPopComponent::~UGradNumberPopComponent() {}
// End Class UGradNumberPopComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGradNumberPopRequest::StaticStruct, Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics::NewStructOps, TEXT("GradNumberPopRequest"), &Z_Registration_Info_UScriptStruct_GradNumberPopRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGradNumberPopRequest), 1072775566U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradNumberPopComponent, UGradNumberPopComponent::StaticClass, TEXT("UGradNumberPopComponent"), &Z_Registration_Info_UClass_UGradNumberPopComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradNumberPopComponent), 431578965U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_960035325(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
