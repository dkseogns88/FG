// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/GradInventoryManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGradInventoryItemDefinition;
class UGradInventoryItemInstance;
#ifdef GRADGAME_GradInventoryManagerComponent_generated_h
#error "GradInventoryManagerComponent.generated.h already included, missing '#pragma once' in GradInventoryManagerComponent.h"
#endif
#define GRADGAME_GradInventoryManagerComponent_generated_h

#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGradInventoryEntry_Statics; \
	GRADGAME_API static class UScriptStruct* StaticStruct();


template<> GRADGAME_API UScriptStruct* StaticStruct<struct FGradInventoryEntry>();

#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGradInventoryList_Statics; \
	GRADGAME_API static class UScriptStruct* StaticStruct();


template<> GRADGAME_API UScriptStruct* StaticStruct<struct FGradInventoryList>();

#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddItemDefinition);


#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGradInventoryManagerComponent(); \
	friend struct Z_Construct_UClass_UGradInventoryManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UGradInventoryManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UGradInventoryManagerComponent)


#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGradInventoryManagerComponent(UGradInventoryManagerComponent&&); \
	UGradInventoryManagerComponent(const UGradInventoryManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGradInventoryManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGradInventoryManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGradInventoryManagerComponent) \
	NO_API virtual ~UGradInventoryManagerComponent();


#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_46_PROLOG
#define FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_49_INCLASS_NO_PURE_DECLS \
	FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UGradInventoryManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FG_GradGame_Source_GradGame_Inventory_GradInventoryManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
