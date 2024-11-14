// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipment/GradQuickBarComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGradInventoryItemInstance;
#ifdef GRADGAME_GradQuickBarComponent_generated_h
#error "GradQuickBarComponent.generated.h already included, missing '#pragma once' in GradQuickBarComponent.h"
#endif
#define GRADGAME_GradQuickBarComponent_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetActiveSlotIndex); \
	DECLARE_FUNCTION(execAddItemToSlot);


#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradQuickBarComponent(); \
	friend struct Z_Construct_UClass_UGradQuickBarComponent_Statics; \
public: \
	DECLARE_CLASS(UGradQuickBarComponent, UControllerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradQuickBarComponent)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradQuickBarComponent(UGradQuickBarComponent&&); \
	UGradQuickBarComponent(const UGradQuickBarComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradQuickBarComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradQuickBarComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradQuickBarComponent) \
	NO_API virtual ~UGradQuickBarComponent();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_21_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradQuickBarComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Equipment_GradQuickBarComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
