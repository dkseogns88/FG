// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Network/GradNetworkComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGradInventoryItemInstance;
#ifdef GRADGAME_GradNetworkComponent_generated_h
#error "GradNetworkComponent.generated.h already included, missing '#pragma once' in GradNetworkComponent.h"
#endif
#define GRADGAME_GradNetworkComponent_generated_h

#define FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetActiveSlotIndex); \
	DECLARE_FUNCTION(execAddItemToSlot);


#define FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradNetworkComponent(); \
	friend struct Z_Construct_UClass_UGradNetworkComponent_Statics; \
public: \
	DECLARE_CLASS(UGradNetworkComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradNetworkComponent)


#define FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradNetworkComponent(UGradNetworkComponent&&); \
	UGradNetworkComponent(const UGradNetworkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradNetworkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradNetworkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradNetworkComponent)


#define FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_14_PROLOG
#define FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradNetworkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Network_GradNetworkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
