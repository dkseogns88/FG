// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/GradSystemStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
struct FLinearColor;
#ifdef GRADGAME_GradSystemStatics_generated_h
#error "GradSystemStatics.generated.h already included, missing '#pragma once' in GradSystemStatics.h"
#endif
#define GRADGAME_GradSystemStatics_generated_h

#define FID_FG_GradGame_Source_GradGame_System_GradSystemStatics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindComponentsByClass); \
	DECLARE_FUNCTION(execSetColorParameterValueOnAllMeshComponents); \
	DECLARE_FUNCTION(execSetVectorParameterValueOnAllMeshComponents);


#define FID_FG_GradGame_Source_GradGame_System_GradSystemStatics_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradSystemStatics(); \
	friend struct Z_Construct_UClass_UGradSystemStatics_Statics; \
public: \
	DECLARE_CLASS(UGradSystemStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradSystemStatics)


#define FID_FG_GradGame_Source_GradGame_System_GradSystemStatics_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGradSystemStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradSystemStatics(UGradSystemStatics&&); \
	UGradSystemStatics(const UGradSystemStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradSystemStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradSystemStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradSystemStatics) \
	NO_API virtual ~UGradSystemStatics();


#define FID_FG_GradGame_Source_GradGame_System_GradSystemStatics_h_17_PROLOG
#define FID_FG_GradGame_Source_GradGame_System_GradSystemStatics_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_System_GradSystemStatics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_System_GradSystemStatics_h_20_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_System_GradSystemStatics_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradSystemStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_System_GradSystemStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
