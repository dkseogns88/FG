// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/GradGameplayAbility_FromEquipment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGradEquipmentInstance;
class UGradInventoryItemInstance;
#ifdef GRADGAME_GradGameplayAbility_FromEquipment_generated_h
#error "GradGameplayAbility_FromEquipment.generated.h already included, missing '#pragma once' in GradGameplayAbility_FromEquipment.h"
#endif
#define GRADGAME_GradGameplayAbility_FromEquipment_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestReload); \
	DECLARE_FUNCTION(execGetAssociatedItem); \
	DECLARE_FUNCTION(execGetAssociatedEquipment);


#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradGameplayAbility_FromEquipment(); \
	friend struct Z_Construct_UClass_UGradGameplayAbility_FromEquipment_Statics; \
public: \
	DECLARE_CLASS(UGradGameplayAbility_FromEquipment, UGradGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradGameplayAbility_FromEquipment)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGradGameplayAbility_FromEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradGameplayAbility_FromEquipment(UGradGameplayAbility_FromEquipment&&); \
	UGradGameplayAbility_FromEquipment(const UGradGameplayAbility_FromEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradGameplayAbility_FromEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradGameplayAbility_FromEquipment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradGameplayAbility_FromEquipment) \
	NO_API virtual ~UGradGameplayAbility_FromEquipment();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_14_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_17_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradGameplayAbility_FromEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradGameplayAbility_FromEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
