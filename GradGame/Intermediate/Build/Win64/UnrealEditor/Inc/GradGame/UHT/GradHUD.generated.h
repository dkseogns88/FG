// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GradHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradHUD_generated_h
#error "GradHUD.generated.h already included, missing '#pragma once' in GradHUD.h"
#endif
#define GRADGAME_GradHUD_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGradHUD(); \
	friend struct Z_Construct_UClass_AGradHUD_Statics; \
public: \
	DECLARE_CLASS(AGradHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(AGradHUD)


#define FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGradHUD(AGradHUD&&); \
	AGradHUD(const AGradHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGradHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGradHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGradHUD) \
	NO_API virtual ~AGradHUD();


#define FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_11_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_14_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class AGradHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
