// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/GradWeaponInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
struct FGameplayTagContainer;
#ifdef GRADGAME_GradWeaponInstance_generated_h
#error "GradWeaponInstance.generated.h already included, missing '#pragma once' in GradWeaponInstance.h"
#endif
#define GRADGAME_GradWeaponInstance_generated_h

#define FID_FG_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPickBestAnimLayer);


#define FID_FG_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradWeaponInstance(); \
	friend struct Z_Construct_UClass_UGradWeaponInstance_Statics; \
public: \
	DECLARE_CLASS(UGradWeaponInstance, UGradEquipmentInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradWeaponInstance)


#define FID_FG_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradWeaponInstance(UGradWeaponInstance&&); \
	UGradWeaponInstance(const UGradWeaponInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradWeaponInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradWeaponInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradWeaponInstance) \
	NO_API virtual ~UGradWeaponInstance();


#define FID_FG_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_13_PROLOG
#define FID_FG_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradWeaponInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Weapons_GradWeaponInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
