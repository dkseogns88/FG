// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/GradAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradAnimInstance_generated_h
#error "GradAnimInstance.generated.h already included, missing '#pragma once' in GradAnimInstance.h"
#endif
#define GRADGAME_GradAnimInstance_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradAnimInstance(); \
	friend struct Z_Construct_UClass_UGradAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UGradAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradAnimInstance)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGradAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradAnimInstance(UGradAnimInstance&&); \
	UGradAnimInstance(const UGradAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradAnimInstance) \
	NO_API virtual ~UGradAnimInstance();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_13_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Animation_GradAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
