// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GradPawnData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradPawnData_generated_h
#error "GradPawnData.generated.h already included, missing '#pragma once' in GradPawnData.h"
#endif
#define GRADGAME_GradPawnData_generated_h

#define FID_FG_GradGame_Source_GradGame_Character_GradPawnData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradPawnData(); \
	friend struct Z_Construct_UClass_UGradPawnData_Statics; \
public: \
	DECLARE_CLASS(UGradPawnData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradPawnData)


#define FID_FG_GradGame_Source_GradGame_Character_GradPawnData_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradPawnData(UGradPawnData&&); \
	UGradPawnData(const UGradPawnData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradPawnData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradPawnData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradPawnData) \
	NO_API virtual ~UGradPawnData();


#define FID_FG_GradGame_Source_GradGame_Character_GradPawnData_h_15_PROLOG
#define FID_FG_GradGame_Source_GradGame_Character_GradPawnData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Character_GradPawnData_h_18_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Character_GradPawnData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradPawnData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Character_GradPawnData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
