// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cosmetics/GradPawnComponent_CharacterParts.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FGradCharacterPart;
#ifdef GRADGAME_GradPawnComponent_CharacterParts_generated_h
#error "GradPawnComponent_CharacterParts.generated.h already included, missing '#pragma once' in GradPawnComponent_CharacterParts.h"
#endif
#define GRADGAME_GradPawnComponent_CharacterParts_generated_h

#define FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGradCharacterPartEntry_Statics; \
	GRADGAME_API static class UScriptStruct* StaticStruct();


template<> GRADGAME_API UScriptStruct* StaticStruct<struct FGradCharacterPartEntry>();

#define FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execAddCharacterPart);


#define FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradPawnComponent_CharacterParts(); \
	friend struct Z_Construct_UClass_UGradPawnComponent_CharacterParts_Statics; \
public: \
	DECLARE_CLASS(UGradPawnComponent_CharacterParts, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradPawnComponent_CharacterParts)


#define FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradPawnComponent_CharacterParts(UGradPawnComponent_CharacterParts&&); \
	UGradPawnComponent_CharacterParts(const UGradPawnComponent_CharacterParts&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradPawnComponent_CharacterParts); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradPawnComponent_CharacterParts); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradPawnComponent_CharacterParts) \
	NO_API virtual ~UGradPawnComponent_CharacterParts();


#define FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_28_PROLOG
#define FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_31_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradPawnComponent_CharacterParts>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Cosmetics_GradPawnComponent_CharacterParts_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
