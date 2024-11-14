// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GradActivatableWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradActivatableWidget_generated_h
#error "GradActivatableWidget.generated.h already included, missing '#pragma once' in GradActivatableWidget.h"
#endif
#define GRADGAME_GradActivatableWidget_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradActivatableWidget_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradActivatableWidget(); \
	friend struct Z_Construct_UClass_UGradActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(UGradActivatableWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradActivatableWidget)


#define FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradActivatableWidget_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradActivatableWidget(UGradActivatableWidget&&); \
	UGradActivatableWidget(const UGradActivatableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradActivatableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradActivatableWidget) \
	NO_API virtual ~UGradActivatableWidget();


#define FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradActivatableWidget_h_29_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradActivatableWidget_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradActivatableWidget_h_32_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradActivatableWidget_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradActivatableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_UI_GradActivatableWidget_h


#define FOREACH_ENUM_EGRADWIDGETINPUTMODE(op) \
	op(EGradWidgetInputMode::Default) \
	op(EGradWidgetInputMode::GameAndMenu) \
	op(EGradWidgetInputMode::Game) \
	op(EGradWidgetInputMode::Menu) 

enum class EGradWidgetInputMode : uint8;
template<> struct TIsUEnumClass<EGradWidgetInputMode> { enum { Value = true }; };
template<> GRADGAME_API UEnum* StaticEnum<EGradWidgetInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
