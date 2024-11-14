// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Teams/GradTeamInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradTeamInterface_generated_h
#error "GradTeamInterface.generated.h already included, missing '#pragma once' in GradTeamInterface.h"
#endif
#define GRADGAME_GradTeamInterface_generated_h

#define FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_15_CALLBACK_WRAPPERS
#define FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradTeamInterface(); \
	friend struct Z_Construct_UClass_UGradTeamInterface_Statics; \
public: \
	DECLARE_CLASS(UGradTeamInterface, UCommonUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradTeamInterface)


#define FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradTeamInterface(UGradTeamInterface&&); \
	UGradTeamInterface(const UGradTeamInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradTeamInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradTeamInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradTeamInterface) \
	NO_API virtual ~UGradTeamInterface();


#define FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_12_PROLOG
#define FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_15_CALLBACK_WRAPPERS \
	FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_15_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradTeamInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_UI_Teams_GradTeamInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
