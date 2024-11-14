// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/GradPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradPlayerController_generated_h
#error "GradPlayerController.generated.h already included, missing '#pragma once' in GradPlayerController.h"
#endif
#define GRADGAME_GradPlayerController_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGradPlayerController(); \
	friend struct Z_Construct_UClass_AGradPlayerController_Statics; \
public: \
	DECLARE_CLASS(AGradPlayerController, ACommonPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(AGradPlayerController)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGradPlayerController(AGradPlayerController&&); \
	AGradPlayerController(const AGradPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGradPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGradPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGradPlayerController) \
	NO_API virtual ~AGradPlayerController();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_13_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class AGradPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Player_GradPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
