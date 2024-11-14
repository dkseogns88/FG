// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/GradGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradGameState_generated_h
#error "GradGameState.generated.h already included, missing '#pragma once' in GradGameState.h"
#endif
#define GRADGAME_GradGameState_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGradGameState(); \
	friend struct Z_Construct_UClass_AGradGameState_Statics; \
public: \
	DECLARE_CLASS(AGradGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(AGradGameState)


#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGradGameState(AGradGameState&&); \
	AGradGameState(const AGradGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGradGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGradGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGradGameState) \
	NO_API virtual ~AGradGameState();


#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_14_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_17_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class AGradGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
