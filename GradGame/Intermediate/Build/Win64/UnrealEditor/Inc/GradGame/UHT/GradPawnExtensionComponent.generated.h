// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GradPawnExtensionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradPawnExtensionComponent_generated_h
#error "GradPawnExtensionComponent.generated.h already included, missing '#pragma once' in GradPawnExtensionComponent.h"
#endif
#define GRADGAME_GradPawnExtensionComponent_generated_h

#define FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradPawnExtensionComponent(); \
	friend struct Z_Construct_UClass_UGradPawnExtensionComponent_Statics; \
public: \
	DECLARE_CLASS(UGradPawnExtensionComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradPawnExtensionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGradPawnExtensionComponent*>(this); }


#define FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradPawnExtensionComponent(UGradPawnExtensionComponent&&); \
	UGradPawnExtensionComponent(const UGradPawnExtensionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradPawnExtensionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradPawnExtensionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradPawnExtensionComponent) \
	NO_API virtual ~UGradPawnExtensionComponent();


#define FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_17_PROLOG
#define FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradPawnExtensionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Character_GradPawnExtensionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
