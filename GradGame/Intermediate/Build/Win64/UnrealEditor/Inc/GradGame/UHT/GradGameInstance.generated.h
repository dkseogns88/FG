// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/GradGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_GradGameInstance_generated_h
#error "GradGameInstance.generated.h already included, missing '#pragma once' in GradGameInstance.h"
#endif
#define GRADGAME_GradGameInstance_generated_h

#define FID_FG_GradGame_Source_GradGame_System_GradGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradGameInstance(); \
	friend struct Z_Construct_UClass_UGradGameInstance_Statics; \
public: \
	DECLARE_CLASS(UGradGameInstance, UCommonGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradGameInstance)


#define FID_FG_GradGame_Source_GradGame_System_GradGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGradGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradGameInstance(UGradGameInstance&&); \
	UGradGameInstance(const UGradGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradGameInstance) \
	NO_API virtual ~UGradGameInstance();


#define FID_FG_GradGame_Source_GradGame_System_GradGameInstance_h_13_PROLOG
#define FID_FG_GradGame_Source_GradGame_System_GradGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_System_GradGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_System_GradGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_System_GradGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
