// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Network/GradNetCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradNetCharacter_generated_h
#error "GradNetCharacter.generated.h already included, missing '#pragma once' in GradNetCharacter.h"
#endif
#define GRADGAME_GradNetCharacter_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_GradNetCharacter_h_17_CALLBACK_WRAPPERS
#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_GradNetCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGradNetCharacter(); \
	friend struct Z_Construct_UClass_AGradNetCharacter_Statics; \
public: \
	DECLARE_CLASS(AGradNetCharacter, AModularCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(AGradNetCharacter)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_GradNetCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGradNetCharacter(AGradNetCharacter&&); \
	AGradNetCharacter(const AGradNetCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGradNetCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGradNetCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGradNetCharacter) \
	NO_API virtual ~AGradNetCharacter();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_GradNetCharacter_h_14_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_GradNetCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Network_GradNetCharacter_h_17_CALLBACK_WRAPPERS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Network_GradNetCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Network_GradNetCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class AGradNetCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Network_GradNetCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
