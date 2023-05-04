// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEthonkMultiplayer_init() {}
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature();
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature();
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature();
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature();
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EthonkMultiplayer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EthonkMultiplayer()
	{
		if (!Z_Registration_Info_UPackage__Script_EthonkMultiplayer.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EthonkMultiplayer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x94CDB75C,
				0x4036E6BB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EthonkMultiplayer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EthonkMultiplayer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EthonkMultiplayer(Z_Construct_UPackage__Script_EthonkMultiplayer, TEXT("/Script/EthonkMultiplayer"), Z_Registration_Info_UPackage__Script_EthonkMultiplayer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x94CDB75C, 0x4036E6BB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
