// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GradHeroComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGradHeroComponent;
#ifdef GRADGAME_GradHeroComponent_generated_h
#error "GradHeroComponent.generated.h already included, missing '#pragma once' in GradHeroComponent.h"
#endif
#define GRADGAME_GradHeroComponent_generated_h

#define FID_FG_GradGame_Source_GradGame_Character_GradHeroComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindHeroComponent);


#define FID_FG_GradGame_Source_GradGame_Character_GradHeroComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradHeroComponent(); \
	friend struct Z_Construct_UClass_UGradHeroComponent_Statics; \
public: \
	DECLARE_CLASS(UGradHeroComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradHeroComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGradHeroComponent*>(this); }


#define FID_FG_GradGame_Source_GradGame_Character_GradHeroComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradHeroComponent(UGradHeroComponent&&); \
	UGradHeroComponent(const UGradHeroComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradHeroComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradHeroComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradHeroComponent) \
	NO_API virtual ~UGradHeroComponent();


#define FID_FG_GradGame_Source_GradGame_Character_GradHeroComponent_h_22_PROLOG
#define FID_FG_GradGame_Source_GradGame_Character_GradHeroComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Character_GradHeroComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Character_GradHeroComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Character_GradHeroComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradHeroComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Character_GradHeroComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
