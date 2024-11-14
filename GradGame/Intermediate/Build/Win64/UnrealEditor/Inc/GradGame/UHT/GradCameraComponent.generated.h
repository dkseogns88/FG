// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/GradCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradCameraComponent_generated_h
#error "GradCameraComponent.generated.h already included, missing '#pragma once' in GradCameraComponent.h"
#endif
#define GRADGAME_GradCameraComponent_generated_h

#define FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradCameraComponent(); \
	friend struct Z_Construct_UClass_UGradCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UGradCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradCameraComponent)


#define FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradCameraComponent(UGradCameraComponent&&); \
	UGradCameraComponent(const UGradCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradCameraComponent) \
	NO_API virtual ~UGradCameraComponent();


#define FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_18_PROLOG
#define FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Camera_GradCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
