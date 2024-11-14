// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GradCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradCharacter_generated_h
#error "GradCharacter.generated.h already included, missing '#pragma once' in GradCharacter.h"
#endif
#define GRADGAME_GradCharacter_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGradCharacter(); \
	friend struct Z_Construct_UClass_AGradCharacter_Statics; \
public: \
	DECLARE_CLASS(AGradCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(AGradCharacter)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGradCharacter(AGradCharacter&&); \
	AGradCharacter(const AGradCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGradCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGradCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGradCharacter) \
	NO_API virtual ~AGradCharacter();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_15_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class AGradCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
