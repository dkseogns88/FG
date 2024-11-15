// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/GradInventoryItemInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGradInventoryItemFragment;
struct FGameplayTag;
#ifdef GRADGAME_GradInventoryItemInstance_generated_h
#error "GradInventoryItemInstance.generated.h already included, missing '#pragma once' in GradInventoryItemInstance.h"
#endif
#define GRADGAME_GradInventoryItemInstance_generated_h

#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStatTagStackCount); \
	DECLARE_FUNCTION(execRemoveStatTagStack); \
	DECLARE_FUNCTION(execAddStatTagStack); \
	DECLARE_FUNCTION(execFindFragmentByClass);


#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradInventoryItemInstance(); \
	friend struct Z_Construct_UClass_UGradInventoryItemInstance_Statics; \
public: \
	DECLARE_CLASS(UGradInventoryItemInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradInventoryItemInstance)


#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradInventoryItemInstance(UGradInventoryItemInstance&&); \
	UGradInventoryItemInstance(const UGradInventoryItemInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradInventoryItemInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradInventoryItemInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradInventoryItemInstance) \
	NO_API virtual ~UGradInventoryItemInstance();


#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_16_PROLOG
#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_19_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradInventoryItemInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryItemInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
