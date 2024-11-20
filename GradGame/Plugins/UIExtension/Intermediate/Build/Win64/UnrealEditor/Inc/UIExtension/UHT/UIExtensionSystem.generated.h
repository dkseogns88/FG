// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIExtensionSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UUserWidget;
struct FGameplayTag;
struct FUIExtensionHandle;
struct FUIExtensionPointHandle;
#ifdef UIEXTENSION_UIExtensionSystem_generated_h
#error "UIExtensionSystem.generated.h already included, missing '#pragma once' in UIExtensionSystem.h"
#endif
#define UIEXTENSION_UIExtensionSystem_generated_h

#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIExtensionHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UIEXTENSION_API UScriptStruct* StaticStruct<struct FUIExtensionHandle>();

#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIExtensionRequest_Statics; \
	UIEXTENSION_API static class UScriptStruct* StaticStruct();


template<> UIEXTENSION_API UScriptStruct* StaticStruct<struct FUIExtensionRequest>();

#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UIEXTENSION_API UScriptStruct* StaticStruct<struct FUIExtensionPointHandle>();

#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsWidgetForContext);


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionSubsystem(); \
	friend struct Z_Construct_UClass_UUIExtensionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionSubsystem)


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIExtensionSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIExtensionSubsystem(UUIExtensionSubsystem&&); \
	UUIExtensionSubsystem(const UUIExtensionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIExtensionSubsystem) \
	NO_API virtual ~UUIExtensionSubsystem();


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_147_PROLOG
#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_150_INCLASS_NO_PURE_DECLS \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIEXTENSION_API UClass* StaticClass<class UUIExtensionSubsystem>();

#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execUnregister);


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionHandleFunctions(); \
	friend struct Z_Construct_UClass_UUIExtensionHandleFunctions_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionHandleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionHandleFunctions)


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_186_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIExtensionHandleFunctions(UUIExtensionHandleFunctions&&); \
	UUIExtensionHandleFunctions(const UUIExtensionHandleFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionHandleFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionHandleFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIExtensionHandleFunctions) \
	NO_API virtual ~UUIExtensionHandleFunctions();


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_183_PROLOG
#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_186_INCLASS_NO_PURE_DECLS \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIEXTENSION_API UClass* StaticClass<class UUIExtensionHandleFunctions>();

#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_201_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execUnregister);


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_201_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionPointHandleFunctions(); \
	friend struct Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics; \
public: \
	DECLARE_CLASS(UUIExtensionPointHandleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), NO_API) \
	DECLARE_SERIALIZER(UUIExtensionPointHandleFunctions)


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_201_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIExtensionPointHandleFunctions(UUIExtensionPointHandleFunctions&&); \
	UUIExtensionPointHandleFunctions(const UUIExtensionPointHandleFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIExtensionPointHandleFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionPointHandleFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIExtensionPointHandleFunctions) \
	NO_API virtual ~UUIExtensionPointHandleFunctions();


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_198_PROLOG
#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_201_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_201_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_201_INCLASS_NO_PURE_DECLS \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h_201_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIEXTENSION_API UClass* StaticClass<class UUIExtensionPointHandleFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_UIExtension_Source_UIExtension_Public_UIExtensionSystem_h


#define FOREACH_ENUM_EUIEXTENSIONPOINTMATCH(op) \
	op(EUIExtensionPointMatch::ExactMatch) \
	op(EUIExtensionPointMatch::PartialMatch) 

enum class EUIExtensionPointMatch : uint8;
template<> struct TIsUEnumClass<EUIExtensionPointMatch> { enum { Value = true }; };
template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionPointMatch>();

#define FOREACH_ENUM_EUIEXTENSIONACTION(op) \
	op(EUIExtensionAction::Added) \
	op(EUIExtensionAction::Removed) 

enum class EUIExtensionAction : uint8;
template<> struct TIsUEnumClass<EUIExtensionAction> { enum { Value = true }; };
template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
