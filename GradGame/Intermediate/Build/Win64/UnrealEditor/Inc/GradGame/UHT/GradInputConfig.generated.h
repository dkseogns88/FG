// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/GradInputConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradInputConfig_generated_h
#error "GradInputConfig.generated.h already included, missing '#pragma once' in GradInputConfig.h"
#endif
#define GRADGAME_GradInputConfig_generated_h

#define FID_FG_GradGame_Source_GradGame_Input_GradInputConfig_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGradInputAction_Statics; \
	GRADGAME_API static class UScriptStruct* StaticStruct();


template<> GRADGAME_API UScriptStruct* StaticStruct<struct FGradInputAction>();

#define FID_FG_GradGame_Source_GradGame_Input_GradInputConfig_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradInputConfig(); \
	friend struct Z_Construct_UClass_UGradInputConfig_Statics; \
public: \
	DECLARE_CLASS(UGradInputConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradInputConfig)


#define FID_FG_GradGame_Source_GradGame_Input_GradInputConfig_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradInputConfig(UGradInputConfig&&); \
	UGradInputConfig(const UGradInputConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradInputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradInputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradInputConfig) \
	NO_API virtual ~UGradInputConfig();


#define FID_FG_GradGame_Source_GradGame_Input_GradInputConfig_h_25_PROLOG
#define FID_FG_GradGame_Source_GradGame_Input_GradInputConfig_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Input_GradInputConfig_h_28_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Input_GradInputConfig_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradInputConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Input_GradInputConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
