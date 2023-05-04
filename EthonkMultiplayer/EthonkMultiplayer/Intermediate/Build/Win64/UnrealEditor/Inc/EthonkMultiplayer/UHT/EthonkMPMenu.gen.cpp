// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EthonkMultiplayer/Public/EthonkMPMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEthonkMPMenu() {}
// Cross Module References
	ETHONKMULTIPLAYER_API UClass* Z_Construct_UClass_UEthonkMPMenu();
	ETHONKMULTIPLAYER_API UClass* Z_Construct_UClass_UEthonkMPMenu_NoRegister();
	ETHONKMULTIPLAYER_API UClass* Z_Construct_UClass_UEthonkMPSessionSubsystem_NoRegister();
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature();
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature();
	ETHONKMULTIPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FServerInfo();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EthonkMultiplayer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerInfo;
class UScriptStruct* FServerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerInfo, Z_Construct_UPackage__Script_EthonkMultiplayer(), TEXT("ServerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton;
}
template<> ETHONKMULTIPLAYER_API UScriptStruct* StaticStruct<FServerInfo>()
{
	return FServerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ServerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[];
#endif
		static void NewProp_Selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n// ** SERVER INFO STRUCT: all info of a server for the blueprint\n//\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "** SERVER INFO STRUCT: all info of a server for the blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FServerInfo, ServerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrPlayers_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrPlayers = { "CurrPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FServerInfo, CurrPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FServerInfo, MaxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FServerInfo, Ping), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerIndex_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerIndex = { "ServerIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FServerInfo, ServerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Selected_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((FServerInfo*)Obj)->Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FServerInfo), &Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Selected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Selected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Selected,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EthonkMultiplayer,
		nullptr,
		&NewStructOps,
		"ServerInfo",
		sizeof(FServerInfo),
		alignof(FServerInfo),
		Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton, Z_Construct_UScriptStruct_FServerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics
	{
		struct _Script_EthonkMultiplayer_eventServerDelegate_Parms
		{
			FServerInfo ServerListDelegate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerListDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::NewProp_ServerListDelegate = { "ServerListDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EthonkMultiplayer_eventServerDelegate_Parms, ServerListDelegate), Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(nullptr, 0) }; // 1804636642
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::NewProp_ServerListDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// ** UI DELEGATES **\n//\n//\x09- on server refresh called\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "** UI DELEGATES **\n\n      - on server refresh called" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EthonkMultiplayer, nullptr, "ServerDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::_Script_EthonkMultiplayer_eventServerDelegate_Parms), Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\x09- on server refresh completed\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "- on server refresh completed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EthonkMultiplayer, nullptr, "ServerRefreshCompleteDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEthonkMPMenu::execMenuTearDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MenuTearDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEthonkMPMenu::execCompleteJoinServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteJoinServer(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEthonkMPMenu::execJoinServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEthonkMPMenu::execHostServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostServer(Z_Param_ServerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEthonkMPMenu::execOnStartSession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartSession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEthonkMPMenu::execOnDestroySession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroySession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEthonkMPMenu::execOnCreateSession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateSession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEthonkMPMenu::execInitializeMenu)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlrCount);
		P_GET_PROPERTY(FStrProperty,Z_Param_LobbyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeMenu(Z_Param_PlrCount,Z_Param_LobbyPath);
		P_NATIVE_END;
	}
	void UEthonkMPMenu::StaticRegisterNativesUEthonkMPMenu()
	{
		UClass* Class = UEthonkMPMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteJoinServer", &UEthonkMPMenu::execCompleteJoinServer },
			{ "HostServer", &UEthonkMPMenu::execHostServer },
			{ "InitializeMenu", &UEthonkMPMenu::execInitializeMenu },
			{ "JoinServer", &UEthonkMPMenu::execJoinServer },
			{ "MenuTearDown", &UEthonkMPMenu::execMenuTearDown },
			{ "OnCreateSession", &UEthonkMPMenu::execOnCreateSession },
			{ "OnDestroySession", &UEthonkMPMenu::execOnDestroySession },
			{ "OnStartSession", &UEthonkMPMenu::execOnStartSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics
	{
		struct EthonkMPMenu_eventCompleteJoinServer_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EthonkMPMenu_eventCompleteJoinServer_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "Comment", "//\x09- actually join\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "- actually join" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEthonkMPMenu, nullptr, "CompleteJoinServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::EthonkMPMenu_eventCompleteJoinServer_Parms), Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics
	{
		struct EthonkMPMenu_eventHostServer_Parms
		{
			FString ServerName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EthonkMPMenu_eventHostServer_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::NewProp_ServerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "Comment", "// Button clicks (blueprint called)\n//\x09- host\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "Button clicks (blueprint called)\n      - host" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEthonkMPMenu, nullptr, "HostServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::EthonkMPMenu_eventHostServer_Parms), Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEthonkMPMenu_HostServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEthonkMPMenu_HostServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics
	{
		struct EthonkMPMenu_eventInitializeMenu_Parms
		{
			int32 PlrCount;
			FString LobbyPath;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PlrCount;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::NewProp_PlrCount = { "PlrCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EthonkMPMenu_eventInitializeMenu_Parms, PlrCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::NewProp_LobbyPath = { "LobbyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EthonkMPMenu_eventInitializeMenu_Parms, LobbyPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::NewProp_PlrCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::NewProp_LobbyPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "Comment", "//\x09- sets up menu and adds to viewport, etc...\n" },
		{ "CPP_Default_LobbyPath", "/Game/_Resources/Levels/Other/L_Lobby_MineCart" },
		{ "CPP_Default_PlrCount", "4" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "- sets up menu and adds to viewport, etc..." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEthonkMPMenu, nullptr, "InitializeMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::EthonkMPMenu_eventInitializeMenu_Parms), Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEthonkMPMenu_JoinServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEthonkMPMenu_JoinServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Network" },
		{ "Comment", "//\x09- join\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "- join" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEthonkMPMenu_JoinServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEthonkMPMenu, nullptr, "JoinServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEthonkMPMenu_JoinServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_JoinServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEthonkMPMenu_JoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEthonkMPMenu_JoinServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEthonkMPMenu_MenuTearDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEthonkMPMenu_MenuTearDown_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Other functions\n//\x09- resets menu widget and input\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "Other functions\n      - resets menu widget and input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEthonkMPMenu_MenuTearDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEthonkMPMenu, nullptr, "MenuTearDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEthonkMPMenu_MenuTearDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_MenuTearDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEthonkMPMenu_MenuTearDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEthonkMPMenu_MenuTearDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics
	{
		struct EthonkMPMenu_eventOnCreateSession_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EthonkMPMenu_eventOnCreateSession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EthonkMPMenu_eventOnCreateSession_Parms), &Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// ** LINK DELEGATES IN SUBSYSTEM TO MENU ** /\n//\n//\x09- on create session\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "** LINK DELEGATES IN SUBSYSTEM TO MENU ** /\n\n      - on create session" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEthonkMPMenu, nullptr, "OnCreateSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::EthonkMPMenu_eventOnCreateSession_Parms), Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics
	{
		struct EthonkMPMenu_eventOnDestroySession_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EthonkMPMenu_eventOnDestroySession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EthonkMPMenu_eventOnDestroySession_Parms), &Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\x09- on destroy session\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "- on destroy session" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEthonkMPMenu, nullptr, "OnDestroySession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::EthonkMPMenu_eventOnDestroySession_Parms), Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics
	{
		struct EthonkMPMenu_eventOnStartSession_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((EthonkMPMenu_eventOnStartSession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EthonkMPMenu_eventOnStartSession_Parms), &Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\x09- on start session\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "- on start session" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEthonkMPMenu, nullptr, "OnStartSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::EthonkMPMenu_eventOnStartSession_Parms), Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEthonkMPMenu_OnStartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEthonkMPMenu_OnStartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEthonkMPMenu);
	UClass* Z_Construct_UClass_UEthonkMPMenu_NoRegister()
	{
		return UEthonkMPMenu::StaticClass();
	}
	struct Z_Construct_UClass_UEthonkMPMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerListDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerListDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerRefreshCompleteDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerRefreshCompleteDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedServerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectedServerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EthonkMPSessionSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EthonkMPSessionSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HostButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEthonkMPMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EthonkMultiplayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEthonkMPMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEthonkMPMenu_CompleteJoinServer, "CompleteJoinServer" }, // 4196957594
		{ &Z_Construct_UFunction_UEthonkMPMenu_HostServer, "HostServer" }, // 2767643449
		{ &Z_Construct_UFunction_UEthonkMPMenu_InitializeMenu, "InitializeMenu" }, // 3234735232
		{ &Z_Construct_UFunction_UEthonkMPMenu_JoinServer, "JoinServer" }, // 3613989398
		{ &Z_Construct_UFunction_UEthonkMPMenu_MenuTearDown, "MenuTearDown" }, // 907305557
		{ &Z_Construct_UFunction_UEthonkMPMenu_OnCreateSession, "OnCreateSession" }, // 2821165710
		{ &Z_Construct_UFunction_UEthonkMPMenu_OnDestroySession, "OnDestroySession" }, // 3282177371
		{ &Z_Construct_UFunction_UEthonkMPMenu_OnStartSession, "OnStartSession" }, // 3781128320
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEthonkMPMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EthonkMPMenu.h" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerListDelegate_MetaData[] = {
		{ "Comment", "//\n// ** DELEGATES ** /\n//\n//\x09- delegate for the server list\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "** DELEGATES ** /\n\n      - delegate for the server list" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerListDelegate = { "ServerListDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEthonkMPMenu, ServerListDelegate), Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerListDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerListDelegate_MetaData)) }; // 1883919415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerRefreshCompleteDelegate_MetaData[] = {
		{ "Comment", "//\x09- delegate for completed server list\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "- delegate for completed server list" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerRefreshCompleteDelegate = { "ServerRefreshCompleteDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEthonkMPMenu, ServerRefreshCompleteDelegate), Z_Construct_UDelegateFunction_EthonkMultiplayer_ServerRefreshCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerRefreshCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerRefreshCompleteDelegate_MetaData)) }; // 206743405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_SelectedServerIndex_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "//\n// ** CURRENTLY SELECTED SERVER ** /\n//\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "** CURRENTLY SELECTED SERVER ** /" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_SelectedServerIndex = { "SelectedServerIndex", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEthonkMPMenu, SelectedServerIndex), METADATA_PARAMS(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_SelectedServerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_SelectedServerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_EthonkMPSessionSubsystem_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "// Reference the subsystem\n" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "Reference the subsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_EthonkMPSessionSubsystem = { "EthonkMPSessionSubsystem", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEthonkMPMenu, EthonkMPSessionSubsystem), Z_Construct_UClass_UEthonkMPSessionSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_EthonkMPSessionSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_EthonkMPSessionSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_HostButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// Reference the buttons on the Menu\n//\x09- host button\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "Reference the buttons on the Menu\n      - host button" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_HostButton = { "HostButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEthonkMPMenu, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_HostButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_HostButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_JoinButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//\x09- join button\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EthonkMPMenu.h" },
		{ "ToolTip", "- join button" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_JoinButton = { "JoinButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEthonkMPMenu, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_JoinButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_JoinButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEthonkMPMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerListDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_ServerRefreshCompleteDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_SelectedServerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_EthonkMPSessionSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_HostButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEthonkMPMenu_Statics::NewProp_JoinButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEthonkMPMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEthonkMPMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEthonkMPMenu_Statics::ClassParams = {
		&UEthonkMPMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEthonkMPMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEthonkMPMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEthonkMPMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEthonkMPMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEthonkMPMenu()
	{
		if (!Z_Registration_Info_UClass_UEthonkMPMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEthonkMPMenu.OuterSingleton, Z_Construct_UClass_UEthonkMPMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEthonkMPMenu.OuterSingleton;
	}
	template<> ETHONKMULTIPLAYER_API UClass* StaticClass<UEthonkMPMenu>()
	{
		return UEthonkMPMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEthonkMPMenu);
	UEthonkMPMenu::~UEthonkMPMenu() {}
	struct Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_Statics::ScriptStructInfo[] = {
		{ FServerInfo::StaticStruct, Z_Construct_UScriptStruct_FServerInfo_Statics::NewStructOps, TEXT("ServerInfo"), &Z_Registration_Info_UScriptStruct_ServerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerInfo), 1804636642U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEthonkMPMenu, UEthonkMPMenu::StaticClass, TEXT("UEthonkMPMenu"), &Z_Registration_Info_UClass_UEthonkMPMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEthonkMPMenu), 3479432914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_4195301099(TEXT("/Script/EthonkMultiplayer"),
		Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
