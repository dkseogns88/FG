// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/GradPlayerCameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradPlayerCameraManager_generated_h
#error "GradPlayerCameraManager.generated.h already included, missing '#pragma once' in GradPlayerCameraManager.h"
#endif
#define GRADGAME_GradPlayerCameraManager_generated_h

#define FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGradPlayerCameraManager(); \
	friend struct Z_Construct_UClass_AGradPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(AGradPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(AGradPlayerCameraManager)


#define FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGradPlayerCameraManager(AGradPlayerCameraManager&&); \
	AGradPlayerCameraManager(const AGradPlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGradPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGradPlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGradPlayerCameraManager) \
	NO_API virtual ~AGradPlayerCameraManager();


#define FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_19_PROLOG
#define FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class AGradPlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Camera_GradPlayerCameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
