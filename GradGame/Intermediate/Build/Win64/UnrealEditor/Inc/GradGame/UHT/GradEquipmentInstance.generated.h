// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/GradEquipmentInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UObject;
#ifdef GRADGAME_GradEquipmentInstance_generated_h
#error "GradEquipmentInstance.generated.h already included, missing '#pragma once' in GradEquipmentInstance.h"
#endif
#define GRADGAME_GradEquipmentInstance_generated_h

#define FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTypedPawn); \
	DECLARE_FUNCTION(execGetPawn); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execGetSpawnedActors);


#define FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_17_CALLBACK_WRAPPERS
#define FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradEquipmentInstance(); \
	friend struct Z_Construct_UClass_UGradEquipmentInstance_Statics; \
public: \
	DECLARE_CLASS(UGradEquipmentInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradEquipmentInstance)


#define FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradEquipmentInstance(UGradEquipmentInstance&&); \
	UGradEquipmentInstance(const UGradEquipmentInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradEquipmentInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradEquipmentInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradEquipmentInstance) \
	NO_API virtual ~UGradEquipmentInstance();


#define FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_14_PROLOG
#define FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_17_CALLBACK_WRAPPERS \
	FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradEquipmentInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Equipment_GradEquipmentInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
