// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/GradPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradPlayerState_generated_h
#error "GradPlayerState.generated.h already included, missing '#pragma once' in GradPlayerState.h"
#endif
#define GRADGAME_GradPlayerState_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGradPlayerState(); \
	friend struct Z_Construct_UClass_AGradPlayerState_Statics; \
public: \
	DECLARE_CLASS(AGradPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(AGradPlayerState)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGradPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGradPlayerState(AGradPlayerState&&); \
	AGradPlayerState(const AGradPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGradPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGradPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGradPlayerState) \
	NO_API virtual ~AGradPlayerState();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerState_h_12_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class AGradPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
