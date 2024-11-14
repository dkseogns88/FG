// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/GradCameraMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradCameraMode_generated_h
#error "GradCameraMode.generated.h already included, missing '#pragma once' in GradCameraMode.h"
#endif
#define GRADGAME_GradCameraMode_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradCameraMode(); \
	friend struct Z_Construct_UClass_UGradCameraMode_Statics; \
public: \
	DECLARE_CLASS(UGradCameraMode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradCameraMode)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradCameraMode(UGradCameraMode&&); \
	UGradCameraMode(const UGradCameraMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradCameraMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradCameraMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradCameraMode) \
	NO_API virtual ~UGradCameraMode();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_41_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_44_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradCameraMode>();

#define FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradCameraModeStack(); \
	friend struct Z_Construct_UClass_UGradCameraModeStack_Statics; \
public: \
	DECLARE_CLASS(UGradCameraModeStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradCameraModeStack)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradCameraModeStack(UGradCameraModeStack&&); \
	UGradCameraModeStack(const UGradCameraModeStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradCameraModeStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradCameraModeStack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradCameraModeStack) \
	NO_API virtual ~UGradCameraModeStack();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_103_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_106_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradCameraModeStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Camera_GradCameraMode_h


#define FOREACH_ENUM_EGRADCAMERAMODEBLENDFUNCTION(op) \
	op(EGradCameraModeBlendFunction::Linear) \
	op(EGradCameraModeBlendFunction::EaseIn) \
	op(EGradCameraModeBlendFunction::EaseOut) \
	op(EGradCameraModeBlendFunction::EaseInOut) \
	op(EGradCameraModeBlendFunction::COUNT) 

enum class EGradCameraModeBlendFunction : uint8;
template<> struct TIsUEnumClass<EGradCameraModeBlendFunction> { enum { Value = true }; };
template<> GRADGAME_API UEnum* StaticEnum<EGradCameraModeBlendFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
