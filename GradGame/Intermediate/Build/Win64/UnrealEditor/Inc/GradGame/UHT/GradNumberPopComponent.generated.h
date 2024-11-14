// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Feedback/NumberPops/GradNumberPopComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGradNumberPopRequest;
#ifdef GRADGAME_GradNumberPopComponent_generated_h
#error "GradNumberPopComponent.generated.h already included, missing '#pragma once' in GradNumberPopComponent.h"
#endif
#define GRADGAME_GradNumberPopComponent_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGradNumberPopRequest_Statics; \
	GRADGAME_API static class UScriptStruct* StaticStruct();


template<> GRADGAME_API UScriptStruct* StaticStruct<struct FGradNumberPopRequest>();

#define FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddNumberPop);


#define FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradNumberPopComponent(); \
	friend struct Z_Construct_UClass_UGradNumberPopComponent_Statics; \
public: \
	DECLARE_CLASS(UGradNumberPopComponent, UControllerComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradNumberPopComponent)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradNumberPopComponent(UGradNumberPopComponent&&); \
	UGradNumberPopComponent(const UGradNumberPopComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradNumberPopComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradNumberPopComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradNumberPopComponent) \
	NO_API virtual ~UGradNumberPopComponent();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_45_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradNumberPopComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Feedback_NumberPops_GradNumberPopComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
