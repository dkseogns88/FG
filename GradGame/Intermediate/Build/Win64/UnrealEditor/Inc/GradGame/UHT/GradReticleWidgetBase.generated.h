// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Weapons/GradReticleWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGradWeaponInstance;
#ifdef GRADGAME_GradReticleWidgetBase_generated_h
#error "GradReticleWidgetBase.generated.h already included, missing '#pragma once' in GradReticleWidgetBase.h"
#endif
#define GRADGAME_GradReticleWidgetBase_generated_h

#define FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeFromWeapon);


#define FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_15_CALLBACK_WRAPPERS
#define FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradReticleWidgetBase(); \
	friend struct Z_Construct_UClass_UGradReticleWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UGradReticleWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradReticleWidgetBase)


#define FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradReticleWidgetBase(UGradReticleWidgetBase&&); \
	UGradReticleWidgetBase(const UGradReticleWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradReticleWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradReticleWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradReticleWidgetBase) \
	NO_API virtual ~UGradReticleWidgetBase();


#define FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_12_PROLOG
#define FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_15_CALLBACK_WRAPPERS \
	FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradReticleWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_UI_Weapons_GradReticleWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
