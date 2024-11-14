// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/GradAbilitySet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradAbilitySet_generated_h
#error "GradAbilitySet.generated.h already included, missing '#pragma once' in GradAbilitySet.h"
#endif
#define GRADGAME_GradAbilitySet_generated_h

#define FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGradAbilitySet_GameplayAbility_Statics; \
	GRADGAME_API static class UScriptStruct* StaticStruct();


template<> GRADGAME_API UScriptStruct* StaticStruct<struct FGradAbilitySet_GameplayAbility>();

#define FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGradAbilitySet_GrantedHandles_Statics; \
	GRADGAME_API static class UScriptStruct* StaticStruct();


template<> GRADGAME_API UScriptStruct* StaticStruct<struct FGradAbilitySet_GrantedHandles>();

#define FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradAbilitySet(); \
	friend struct Z_Construct_UClass_UGradAbilitySet_Statics; \
public: \
	DECLARE_CLASS(UGradAbilitySet, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradAbilitySet)


#define FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradAbilitySet(UGradAbilitySet&&); \
	UGradAbilitySet(const UGradAbilitySet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradAbilitySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradAbilitySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradAbilitySet) \
	NO_API virtual ~UGradAbilitySet();


#define FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_52_PROLOG
#define FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_55_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradAbilitySet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_AbilitySystem_GradAbilitySet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
