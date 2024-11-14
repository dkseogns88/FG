// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Network/NetworkManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GRADGAME_API UClass* Z_Construct_UClass_UNetworkManager();
GRADGAME_API UClass* Z_Construct_UClass_UNetworkManager_NoRegister();
GRADGAME_API UFunction* Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Delegate FTeamHp_ChangedDelegate
struct Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics
{
	struct _Script_GradGame_eventTeamHp_ChangedDelegate_Parms
	{
		int32 PlayerID;
		float OldValue;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Network/NetworkManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GradGame_eventTeamHp_ChangedDelegate_Parms, PlayerID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GradGame_eventTeamHp_ChangedDelegate_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GradGame_eventTeamHp_ChangedDelegate_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::NewProp_PlayerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GradGame, nullptr, "TeamHp_ChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::_Script_GradGame_eventTeamHp_ChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::_Script_GradGame_eventTeamHp_ChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTeamHp_ChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& TeamHp_ChangedDelegate, int32 PlayerID, float OldValue, float NewValue)
{
	struct _Script_GradGame_eventTeamHp_ChangedDelegate_Parms
	{
		int32 PlayerID;
		float OldValue;
		float NewValue;
	};
	_Script_GradGame_eventTeamHp_ChangedDelegate_Parms Parms;
	Parms.PlayerID=PlayerID;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	TeamHp_ChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTeamHp_ChangedDelegate

// Begin Class UNetworkManager Function ConnectToGameServer
struct Z_Construct_UFunction_UNetworkManager_ConnectToGameServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Network/NetworkManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkManager_ConnectToGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkManager, nullptr, "ConnectToGameServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkManager_ConnectToGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkManager_ConnectToGameServer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNetworkManager_ConnectToGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkManager_ConnectToGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkManager::execConnectToGameServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectToGameServer();
	P_NATIVE_END;
}
// End Class UNetworkManager Function ConnectToGameServer

// Begin Class UNetworkManager Function DisconnectFromGameServer
struct Z_Construct_UFunction_UNetworkManager_DisconnectFromGameServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Network/NetworkManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkManager_DisconnectFromGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkManager, nullptr, "DisconnectFromGameServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkManager_DisconnectFromGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkManager_DisconnectFromGameServer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNetworkManager_DisconnectFromGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkManager_DisconnectFromGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkManager::execDisconnectFromGameServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisconnectFromGameServer();
	P_NATIVE_END;
}
// End Class UNetworkManager Function DisconnectFromGameServer

// Begin Class UNetworkManager Function HandleRecvPackets
struct Z_Construct_UFunction_UNetworkManager_HandleRecvPackets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Network/NetworkManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkManager_HandleRecvPackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkManager, nullptr, "HandleRecvPackets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkManager_HandleRecvPackets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetworkManager_HandleRecvPackets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNetworkManager_HandleRecvPackets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetworkManager_HandleRecvPackets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetworkManager::execHandleRecvPackets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRecvPackets();
	P_NATIVE_END;
}
// End Class UNetworkManager Function HandleRecvPackets

// Begin Class UNetworkManager
void UNetworkManager::StaticRegisterNativesUNetworkManager()
{
	UClass* Class = UNetworkManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectToGameServer", &UNetworkManager::execConnectToGameServer },
		{ "DisconnectFromGameServer", &UNetworkManager::execDisconnectFromGameServer },
		{ "HandleRecvPackets", &UNetworkManager::execHandleRecvPackets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkManager);
UClass* Z_Construct_UClass_UNetworkManager_NoRegister()
{
	return UNetworkManager::StaticClass();
}
struct Z_Construct_UClass_UNetworkManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Network/NetworkManager.h" },
		{ "ModuleRelativePath", "Network/NetworkManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Network/NetworkManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "ModuleRelativePath", "Network/NetworkManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeamHpChanged_MetaData[] = {
		{ "ModuleRelativePath", "Network/NetworkManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_ValueProp;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Objects_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeamHpChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetworkManager_ConnectToGameServer, "ConnectToGameServer" }, // 1727005976
		{ &Z_Construct_UFunction_UNetworkManager_DisconnectFromGameServer, "DisconnectFromGameServer" }, // 192113138
		{ &Z_Construct_UFunction_UNetworkManager_HandleRecvPackets, "HandleRecvPackets" }, // 2099333320
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetworkManager_Statics::NewProp_MyPlayer = { "MyPlayer", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkManager, MyPlayer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyPlayer_MetaData), NewProp_MyPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetworkManager_Statics::NewProp_Objects_ValueProp = { "Objects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UNetworkManager_Statics::NewProp_Objects_Key_KeyProp = { "Objects_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNetworkManager_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkManager, Objects), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNetworkManager_Statics::NewProp_OnTeamHpChanged = { "OnTeamHpChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNetworkManager, OnTeamHpChanged), Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeamHpChanged_MetaData), NewProp_OnTeamHpChanged_MetaData) }; // 1968290357
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkManager_Statics::NewProp_MyPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkManager_Statics::NewProp_Objects_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkManager_Statics::NewProp_Objects_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkManager_Statics::NewProp_Objects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkManager_Statics::NewProp_OnTeamHpChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetworkManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkManager_Statics::ClassParams = {
	&UNetworkManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNetworkManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetworkManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetworkManager()
{
	if (!Z_Registration_Info_UClass_UNetworkManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkManager.OuterSingleton, Z_Construct_UClass_UNetworkManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetworkManager.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UNetworkManager>()
{
	return UNetworkManager::StaticClass();
}
UNetworkManager::UNetworkManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkManager);
UNetworkManager::~UNetworkManager() {}
// End Class UNetworkManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_NetworkManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkManager, UNetworkManager::StaticClass, TEXT("UNetworkManager"), &Z_Registration_Info_UClass_UNetworkManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkManager), 1710302276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_NetworkManager_h_4067850548(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_NetworkManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Network_NetworkManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
