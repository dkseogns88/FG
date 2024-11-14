// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GradUIManagerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradUIManagerSubsystem_generated_h
#error "GradUIManagerSubsystem.generated.h already included, missing '#pragma once' in GradUIManagerSubsystem.h"
#endif
#define GRADGAME_GradUIManagerSubsystem_generated_h

#define FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradUIManagerSubsystem(); \
	friend struct Z_Construct_UClass_UGradUIManagerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGradUIManagerSubsystem, UGameUIManagerSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradUIManagerSubsystem)


#define FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGradUIManagerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradUIManagerSubsystem(UGradUIManagerSubsystem&&); \
	UGradUIManagerSubsystem(const UGradUIManagerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradUIManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradUIManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGradUIManagerSubsystem) \
	NO_API virtual ~UGradUIManagerSubsystem();


#define FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_12_PROLOG
#define FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradUIManagerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_UI_GradUIManagerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
