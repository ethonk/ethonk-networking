// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EthonkMultiplayer/Public/EthonkMPSessionSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEthonkMPSessionSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ETHONKMULTIPLAYER_API UClass* Z_Construct_UClass_UEthonkMPSessionSubsystem();
	ETHONKMULTIPLAYER_API UClass* Z_Construct_UClass_UEthonkMPSessionSubsystem_NoRegister();
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature();
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature();
	ETHONKMULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EthonkMultiplayer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics
	{
		struct _Script_EthonkMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms
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
	void Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_EthonkMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EthonkMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms), &Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// DELEGATES FOR THE MENU CLASS\n//\n" },
		{ "ModuleRelativePath", "Public/EthonkMPSessionSubsystem.h" },
		{ "ToolTip", "DELEGATES FOR THE MENU CLASS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EthonkMultiplayer, nullptr, "MultiplayerOnCreateSessionComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::_Script_EthonkMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms), Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics
	{
		struct _Script_EthonkMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms
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
	void Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_EthonkMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EthonkMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms), &Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EthonkMPSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EthonkMultiplayer, nullptr, "MultiplayerOnDestroySessionComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::_Script_EthonkMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms), Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics
	{
		struct _Script_EthonkMultiplayer_eventMultiplayerOnStartSessionComplete_Parms
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
	void Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_EthonkMultiplayer_eventMultiplayerOnStartSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EthonkMultiplayer_eventMultiplayerOnStartSessionComplete_Parms), &Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EthonkMPSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EthonkMultiplayer, nullptr, "MultiplayerOnStartSessionComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::_Script_EthonkMultiplayer_eventMultiplayerOnStartSessionComplete_Parms), Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EthonkMultiplayer_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UEthonkMPSessionSubsystem::StaticRegisterNativesUEthonkMPSessionSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEthonkMPSessionSubsystem);
	UClass* Z_Construct_UClass_UEthonkMPSessionSubsystem_NoRegister()
	{
		return UEthonkMPSessionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EthonkMultiplayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EthonkMPSessionSubsystem.h" },
		{ "ModuleRelativePath", "Public/EthonkMPSessionSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEthonkMPSessionSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics::ClassParams = {
		&UEthonkMPSessionSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEthonkMPSessionSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEthonkMPSessionSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEthonkMPSessionSubsystem.OuterSingleton, Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEthonkMPSessionSubsystem.OuterSingleton;
	}
	template<> ETHONKMULTIPLAYER_API UClass* StaticClass<UEthonkMPSessionSubsystem>()
	{
		return UEthonkMPSessionSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEthonkMPSessionSubsystem);
	UEthonkMPSessionSubsystem::~UEthonkMPSessionSubsystem() {}
	struct Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEthonkMPSessionSubsystem, UEthonkMPSessionSubsystem::StaticClass, TEXT("UEthonkMPSessionSubsystem"), &Z_Registration_Info_UClass_UEthonkMPSessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEthonkMPSessionSubsystem), 1998442616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_897480312(TEXT("/Script/EthonkMultiplayer"),
		Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
