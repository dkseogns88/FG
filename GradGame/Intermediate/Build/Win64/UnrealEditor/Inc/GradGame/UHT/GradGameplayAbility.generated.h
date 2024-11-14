// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/GradGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGradCharacter;
class AGradNetCharacter;
class AGradPlayerController;
class UGradCameraMode;
class UGradHeroComponent;
enum class EGradAbilityDashDirection : uint8;
#ifdef GRADGAME_GradGameplayAbility_generated_h
#error "GradGameplayAbility.generated.h already included, missing '#pragma once' in GradGameplayAbility.h"
#endif
#define GRADGAME_GradGameplayAbility_generated_h

#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendDash); \
	DECLARE_FUNCTION(execClearCameraMode); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execGetHeroComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetGradNetCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetGradCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetGradPlayerControllerFromActorInfo);


#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_64_CALLBACK_WRAPPERS
#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradGameplayAbility(); \
	friend struct Z_Construct_UClass_UGradGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGradGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradGameplayAbility)


#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradGameplayAbility(UGradGameplayAbility&&); \
	UGradGameplayAbility(const UGradGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradGameplayAbility) \
	NO_API virtual ~UGradGameplayAbility();


#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_61_PROLOG
#define FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_64_CALLBACK_WRAPPERS \
	FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_64_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_AbilitySystem_Abilities_GradGameplayAbility_h


#define FOREACH_ENUM_EGRADABILITYACTIVATIONPOLICY(op) \
	op(EGradAbilityActivationPolicy::OnInputTriggered) \
	op(EGradAbilityActivationPolicy::WhileInputActive) \
	op(EGradAbilityActivationPolicy::OnSpawn) 

enum class EGradAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EGradAbilityActivationPolicy> { enum { Value = true }; };
template<> GRADGAME_API UEnum* StaticEnum<EGradAbilityActivationPolicy>();

#define FOREACH_ENUM_EGRADABILITYACTIVATIONGROUP(op) \
	op(EGradAbilityActivationGroup::Independent) \
	op(EGradAbilityActivationGroup::Exclusive_Replaceable) \
	op(EGradAbilityActivationGroup::Exclusive_Blocking) 

enum class EGradAbilityActivationGroup : uint8;
template<> struct TIsUEnumClass<EGradAbilityActivationGroup> { enum { Value = true }; };
template<> GRADGAME_API UEnum* StaticEnum<EGradAbilityActivationGroup>();

#define FOREACH_ENUM_EGRADABILITYDASHDIRECTION(op) \
	op(EGradAbilityDashDirection::Forward) \
	op(EGradAbilityDashDirection::Backward) \
	op(EGradAbilityDashDirection::Left) \
	op(EGradAbilityDashDirection::Right) \
	op(EGradAbilityDashDirection::None) 

enum class EGradAbilityDashDirection : uint8;
template<> struct TIsUEnumClass<EGradAbilityDashDirection> { enum { Value = true }; };
template<> GRADGAME_API UEnum* StaticEnum<EGradAbilityDashDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
