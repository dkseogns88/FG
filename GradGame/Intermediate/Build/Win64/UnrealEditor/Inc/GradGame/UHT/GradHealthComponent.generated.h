// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GradHealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGradHealthComponent;
#ifdef GRADGAME_GradHealthComponent_generated_h
#error "GradHealthComponent.generated.h already included, missing '#pragma once' in GradHealthComponent.h"
#endif
#define GRADGAME_GradHealthComponent_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_19_DELEGATE \
GRADGAME_API void FGradHealth_AttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& GradHealth_AttributeChanged, UGradHealthComponent* HealthComponent, float OldValue, float NewValue, AActor* Instigator);


#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHealthNormalized); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execFindHealthComponent);


#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradHealthComponent(); \
	friend struct Z_Construct_UClass_UGradHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UGradHealthComponent, UGameFrameworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradHealthComponent)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradHealthComponent(UGradHealthComponent&&); \
	UGradHealthComponent(const UGradHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradHealthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradHealthComponent) \
	NO_API virtual ~UGradHealthComponent();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_27_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Character_GradHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
