// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONGAME_CommonGameInstance_generated_h
#error "CommonGameInstance.generated.h already included, missing '#pragma once' in CommonGameInstance.h"
#endif
#define COMMONGAME_CommonGameInstance_generated_h

#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonGameInstance(); \
	friend struct Z_Construct_UClass_UCommonGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCommonGameInstance, UGameInstance, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonGameInstance)


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCommonGameInstance(UCommonGameInstance&&); \
	UCommonGameInstance(const UCommonGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonGameInstance); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonGameInstance) \
	NO_API virtual ~UCommonGameInstance();


#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_9_PROLOG
#define FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UCommonGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_SeongGyu_Desktop_LyraStarter_GradGame_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS