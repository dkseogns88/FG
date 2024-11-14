// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/GradUserFacingExperience.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonSession_HostSessionRequest;
#ifdef GRADGAME_GradUserFacingExperience_generated_h
#error "GradUserFacingExperience.generated.h already included, missing '#pragma once' in GradUserFacingExperience.h"
#endif
#define GRADGAME_GradUserFacingExperience_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateHostingRequest);


#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradUserFacingExperience(); \
	friend struct Z_Construct_UClass_UGradUserFacingExperience_Statics; \
public: \
	DECLARE_CLASS(UGradUserFacingExperience, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradUserFacingExperience)


#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGradUserFacingExperience(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradUserFacingExperience(UGradUserFacingExperience&&); \
	UGradUserFacingExperience(const UGradUserFacingExperience&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradUserFacingExperience); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradUserFacingExperience); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradUserFacingExperience) \
	NO_API virtual ~UGradUserFacingExperience();


#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_11_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_14_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradUserFacingExperience>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_GameModes_GradUserFacingExperience_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
