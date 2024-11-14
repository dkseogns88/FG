// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Network/NetworkManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRADGAME_NetworkManager_generated_h
#error "NetworkManager.generated.h already included, missing '#pragma once' in NetworkManager.h"
#endif
#define GRADGAME_NetworkManager_generated_h

#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h_19_DELEGATE \
GRADGAME_API void FTeamHp_ChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& TeamHp_ChangedDelegate, int32 PlayerID, float OldValue, float NewValue);


#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleRecvPackets); \
	DECLARE_FUNCTION(execDisconnectFromGameServer); \
	DECLARE_FUNCTION(execConnectToGameServer);


#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkManager(); \
	friend struct Z_Construct_UClass_UNetworkManager_Statics; \
public: \
	DECLARE_CLASS(UNetworkManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GradGame"), NO_API) \
	DECLARE_SERIALIZER(UNetworkManager)


#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkManager(UNetworkManager&&); \
	UNetworkManager(const UNetworkManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkManager) \
	NO_API virtual ~UNetworkManager();


#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h_21_PROLOG
#define FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h_24_INCLASS_NO_PURE_DECLS \
	FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRADGAME_API UClass* StaticClass<class UNetworkManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestEngine_Task_GradGame_Source_GradGame_Network_NetworkManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
