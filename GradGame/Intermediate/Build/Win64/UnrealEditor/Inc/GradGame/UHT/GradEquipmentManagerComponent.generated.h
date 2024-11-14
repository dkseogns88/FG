// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/GradEquipmentManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGradEquipmentInstance;
#ifdef GRADGAME_GradEquipmentManagerComponent_generated_h
#error "GradEquipmentManagerComponent.generated.h already included, missing '#pragma once' in GradEquipmentManagerComponent.h"
#endif
#define GRADGAME_GradEquipmentManagerComponent_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGradAppliedEquipmentEntry_Statics; \
	GRADGAME_API static class UScriptStruct* StaticStruct();


template<> GRADGAME_API UScriptStruct* StaticStruct<struct FGradAppliedEquipmentEntry>();

#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGradEquipmentList_Statics; \
	GRADGAME_API static class UScriptStruct* StaticStruct();


template<> GRADGAME_API UScriptStruct* StaticStruct<struct FGradEquipmentList>();

#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEquipmentInstancesOfType);


#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradEquipmentManagerComponent(); \
	friend struct Z_Construct_UClass_UGradEquipmentManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UGradEquipmentManagerComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradEquipmentManagerComponent)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradEquipmentManagerComponent(UGradEquipmentManagerComponent&&); \
	UGradEquipmentManagerComponent(const UGradEquipmentManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradEquipmentManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradEquipmentManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradEquipmentManagerComponent) \
	NO_API virtual ~UGradEquipmentManagerComponent();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_61_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_64_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradEquipmentManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradEquipmentManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
