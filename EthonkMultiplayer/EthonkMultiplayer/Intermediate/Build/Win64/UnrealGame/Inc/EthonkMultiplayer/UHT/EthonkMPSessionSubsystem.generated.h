// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EthonkMPSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ETHONKMULTIPLAYER_EthonkMPSessionSubsystem_generated_h
#error "EthonkMPSessionSubsystem.generated.h already included, missing '#pragma once' in EthonkMPSessionSubsystem.h"
#endif
#define ETHONKMULTIPLAYER_EthonkMPSessionSubsystem_generated_h

#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_16_DELEGATE \
struct _Script_EthonkMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful) \
{ \
	_Script_EthonkMultiplayer_eventMultiplayerOnCreateSessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultiplayerOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_19_DELEGATE \
struct _Script_EthonkMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultiplayerOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnDestroySessionComplete, bool bWasSuccessful) \
{ \
	_Script_EthonkMultiplayer_eventMultiplayerOnDestroySessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultiplayerOnDestroySessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_20_DELEGATE \
struct _Script_EthonkMultiplayer_eventMultiplayerOnStartSessionComplete_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FMultiplayerOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnStartSessionComplete, bool bWasSuccessful) \
{ \
	_Script_EthonkMultiplayer_eventMultiplayerOnStartSessionComplete_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	MultiplayerOnStartSessionComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_SPARSE_DATA
#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_RPC_WRAPPERS
#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_ACCESSORS
#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEthonkMPSessionSubsystem(); \
	friend struct Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEthonkMPSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EthonkMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(UEthonkMPSessionSubsystem)


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUEthonkMPSessionSubsystem(); \
	friend struct Z_Construct_UClass_UEthonkMPSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEthonkMPSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EthonkMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(UEthonkMPSessionSubsystem)


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEthonkMPSessionSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEthonkMPSessionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEthonkMPSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEthonkMPSessionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEthonkMPSessionSubsystem(UEthonkMPSessionSubsystem&&); \
	NO_API UEthonkMPSessionSubsystem(const UEthonkMPSessionSubsystem&); \
public: \
	NO_API virtual ~UEthonkMPSessionSubsystem();


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEthonkMPSessionSubsystem(UEthonkMPSessionSubsystem&&); \
	NO_API UEthonkMPSessionSubsystem(const UEthonkMPSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEthonkMPSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEthonkMPSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEthonkMPSessionSubsystem) \
	NO_API virtual ~UEthonkMPSessionSubsystem();


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_25_PROLOG
#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_SPARSE_DATA \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_RPC_WRAPPERS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_ACCESSORS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_INCLASS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_SPARSE_DATA \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_ACCESSORS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ETHONKMULTIPLAYER_API UClass* StaticClass<class UEthonkMPSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
