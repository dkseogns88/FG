// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GradGame/Player/GradLocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradLocalPlayer() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonLocalPlayer();
GRADGAME_API UClass* Z_Construct_UClass_UGradLocalPlayer();
GRADGAME_API UClass* Z_Construct_UClass_UGradLocalPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_GradGame();
// End Cross Module References

// Begin Class UGradLocalPlayer
void UGradLocalPlayer::StaticRegisterNativesUGradLocalPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGradLocalPlayer);
UClass* Z_Construct_UClass_UGradLocalPlayer_NoRegister()
{
	return UGradLocalPlayer::StaticClass();
}
struct Z_Construct_UClass_UGradLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/GradLocalPlayer.h" },
		{ "ModuleRelativePath", "Player/GradLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGradLocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGradLocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonLocalPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_GradGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGradLocalPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGradLocalPlayer_Statics::ClassParams = {
	&UGradLocalPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGradLocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGradLocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGradLocalPlayer()
{
	if (!Z_Registration_Info_UClass_UGradLocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGradLocalPlayer.OuterSingleton, Z_Construct_UClass_UGradLocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGradLocalPlayer.OuterSingleton;
}
template<> GRADGAME_API UClass* StaticClass<UGradLocalPlayer>()
{
	return UGradLocalPlayer::StaticClass();
}
UGradLocalPlayer::UGradLocalPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGradLocalPlayer);
UGradLocalPlayer::~UGradLocalPlayer() {}
// End Class UGradLocalPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Player_GradLocalPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGradLocalPlayer, UGradLocalPlayer::StaticClass, TEXT("UGradLocalPlayer"), &Z_Registration_Info_UClass_UGradLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGradLocalPlayer), 2450070534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Player_GradLocalPlayer_h_281142347(TEXT("/Script/GradGame"),
	Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Player_GradLocalPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FG_GradGame_Source_GradGame_Player_GradLocalPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
