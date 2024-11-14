// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/GradGameplayAbility_RangedWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAbilityTargetDataHandle;
#ifdef GRADGAME_GradGameplayAbility_RangedWeapon_generated_h
#error "GradGameplayAbility_RangedWeapon.generated.h already included, missing '#pragma once' in GradGameplayAbility_RangedWeapon.h"
#endif
#define GRADGAME_GradGameplayAbility_RangedWeapon_generated_h

#define FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartRangedWeaponTargeting);


#define FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_22_CALLBACK_WRAPPERS
#define FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradGameplayAbility_RangedWeapon(); \
	friend struct Z_Construct_UClass_UGradGameplayAbility_RangedWeapon_Statics; \
public: \
	DECLARE_CLASS(UGradGameplayAbility_RangedWeapon, UGradGameplayAbility_FromEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradGameplayAbility_RangedWeapon)


#define FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradGameplayAbility_RangedWeapon(UGradGameplayAbility_RangedWeapon&&); \
	UGradGameplayAbility_RangedWeapon(const UGradGameplayAbility_RangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradGameplayAbility_RangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradGameplayAbility_RangedWeapon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradGameplayAbility_RangedWeapon) \
	NO_API virtual ~UGradGameplayAbility_RangedWeapon();


#define FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_19_PROLOG
#define FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_22_CALLBACK_WRAPPERS \
	FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_22_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradGameplayAbility_RangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Weapons_GradGameplayAbility_RangedWeapon_h


#define FOREACH_ENUM_EGRADABILITYTARGETINGSOURCE(op) \
	op(EGradAbilityTargetingSource::CameraTowardsFocus) 

enum class EGradAbilityTargetingSource : uint8;
template<> struct TIsUEnumClass<EGradAbilityTargetingSource> { enum { Value = true }; };
template<> GRADGAME_API UEnum* StaticEnum<EGradAbilityTargetingSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
