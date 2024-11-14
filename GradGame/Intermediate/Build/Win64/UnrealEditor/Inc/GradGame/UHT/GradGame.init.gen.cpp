// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGradGame_init() {}
	GRADGAME_API UFunction* Z_Construct_UDelegateFunction_GradGame_ExperienceReadyAsyncDelegate__DelegateSignature();
	GRADGAME_API UFunction* Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature();
	GRADGAME_API UFunction* Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GradGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GradGame()
	{
		if (!Z_Registration_Info_UPackage__Script_GradGame.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GradGame_ExperienceReadyAsyncDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GradGame_GradHealth_AttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GradGame_TeamHp_ChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GradGame",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD3BA5671,
				0x36EB9D3D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GradGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GradGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GradGame(Z_Construct_UPackage__Script_GradGame, TEXT("/Script/GradGame"), Z_Registration_Info_UPackage__Script_GradGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD3BA5671, 0x36EB9D3D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
