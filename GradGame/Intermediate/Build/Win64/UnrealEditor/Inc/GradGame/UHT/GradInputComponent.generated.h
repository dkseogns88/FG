// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/GradInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradInputComponent_generated_h
#error "GradInputComponent.generated.h already included, missing '#pragma once' in GradInputComponent.h"
#endif
#define GRADGAME_GradInputComponent_generated_h

#define FID_FG_GradGame_Source_GradGame_Input_GradInputComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradInputComponent(); \
	friend struct Z_Construct_UClass_UGradInputComponent_Statics; \
public: \
	DECLARE_CLASS(UGradInputComponent, UEnhancedInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradInputComponent)


#define FID_FG_GradGame_Source_GradGame_Input_GradInputComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradInputComponent(UGradInputComponent&&); \
	UGradInputComponent(const UGradInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradInputComponent) \
	NO_API virtual ~UGradInputComponent();


#define FID_FG_GradGame_Source_GradGame_Input_GradInputComponent_h_13_PROLOG
#define FID_FG_GradGame_Source_GradGame_Input_GradInputComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Input_GradInputComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Input_GradInputComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Input_GradInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
