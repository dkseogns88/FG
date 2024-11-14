// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/AsyncAction_ExperienceReady.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncAction_ExperienceReady;
class UObject;
#ifdef GRADGAME_AsyncAction_ExperienceReady_generated_h
#error "AsyncAction_ExperienceReady.generated.h already included, missing '#pragma once' in AsyncAction_ExperienceReady.h"
#endif
#define GRADGAME_AsyncAction_ExperienceReady_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h_10_DELEGATE \
GRADGAME_API void FExperienceReadyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& ExperienceReadyAsyncDelegate);


#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWaitForExperienceReady);


#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_ExperienceReady(); \
	friend struct Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_ExperienceReady, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_ExperienceReady)


#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncAction_ExperienceReady(UAsyncAction_ExperienceReady&&); \
	UAsyncAction_ExperienceReady(const UAsyncAction_ExperienceReady&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ExperienceReady); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ExperienceReady); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ExperienceReady) \
	NO_API virtual ~UAsyncAction_ExperienceReady();


#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h_16_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h_19_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UAsyncAction_ExperienceReady>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_AsyncAction_ExperienceReady_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
