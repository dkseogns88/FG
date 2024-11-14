// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Executions/GradDamageExecution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradDamageExecution_generated_h
#error "GradDamageExecution.generated.h already included, missing '#pragma once' in GradDamageExecution.h"
#endif
#define GRADGAME_GradDamageExecution_generated_h

#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradDamageExecution(); \
	friend struct Z_Construct_UClass_UGradDamageExecution_Statics; \
public: \
	DECLARE_CLASS(UGradDamageExecution, UGameplayEffectExecutionCalculation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradDamageExecution)


#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradDamageExecution(UGradDamageExecution&&); \
	UGradDamageExecution(const UGradDamageExecution&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradDamageExecution); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradDamageExecution); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGradDamageExecution) \
	NO_API virtual ~UGradDamageExecution();


#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_17_PROLOG
#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_20_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradDamageExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_AbilitySystem_Executions_GradDamageExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
