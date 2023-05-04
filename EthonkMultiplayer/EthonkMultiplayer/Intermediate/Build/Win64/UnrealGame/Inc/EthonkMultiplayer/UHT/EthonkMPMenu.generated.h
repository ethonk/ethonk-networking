// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EthonkMPMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerInfo;
#ifdef ETHONKMULTIPLAYER_EthonkMPMenu_generated_h
#error "EthonkMPMenu.generated.h already included, missing '#pragma once' in EthonkMPMenu.h"
#endif
#define ETHONKMULTIPLAYER_EthonkMPMenu_generated_h

#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerInfo_Statics; \
	ETHONKMULTIPLAYER_API static class UScriptStruct* StaticStruct();


template<> ETHONKMULTIPLAYER_API UScriptStruct* StaticStruct<struct FServerInfo>();

#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_36_DELEGATE \
struct _Script_EthonkMultiplayer_eventServerDelegate_Parms \
{ \
	FServerInfo ServerListDelegate; \
}; \
static inline void FServerDelegate_DelegateWrapper(const FMulticastScriptDelegate& ServerDelegate, FServerInfo ServerListDelegate) \
{ \
	_Script_EthonkMultiplayer_eventServerDelegate_Parms Parms; \
	Parms.ServerListDelegate=ServerListDelegate; \
	ServerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_38_DELEGATE \
static inline void FServerRefreshCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& ServerRefreshCompleteDelegate) \
{ \
	ServerRefreshCompleteDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_SPARSE_DATA
#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMenuTearDown); \
	DECLARE_FUNCTION(execCompleteJoinServer); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer); \
	DECLARE_FUNCTION(execOnStartSession); \
	DECLARE_FUNCTION(execOnDestroySession); \
	DECLARE_FUNCTION(execOnCreateSession); \
	DECLARE_FUNCTION(execInitializeMenu);


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMenuTearDown); \
	DECLARE_FUNCTION(execCompleteJoinServer); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer); \
	DECLARE_FUNCTION(execOnStartSession); \
	DECLARE_FUNCTION(execOnDestroySession); \
	DECLARE_FUNCTION(execOnCreateSession); \
	DECLARE_FUNCTION(execInitializeMenu);


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_ACCESSORS
#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEthonkMPMenu(); \
	friend struct Z_Construct_UClass_UEthonkMPMenu_Statics; \
public: \
	DECLARE_CLASS(UEthonkMPMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EthonkMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(UEthonkMPMenu)


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUEthonkMPMenu(); \
	friend struct Z_Construct_UClass_UEthonkMPMenu_Statics; \
public: \
	DECLARE_CLASS(UEthonkMPMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EthonkMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(UEthonkMPMenu)


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEthonkMPMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEthonkMPMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEthonkMPMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEthonkMPMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEthonkMPMenu(UEthonkMPMenu&&); \
	NO_API UEthonkMPMenu(const UEthonkMPMenu&); \
public: \
	NO_API virtual ~UEthonkMPMenu();


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEthonkMPMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEthonkMPMenu(UEthonkMPMenu&&); \
	NO_API UEthonkMPMenu(const UEthonkMPMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEthonkMPMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEthonkMPMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEthonkMPMenu) \
	NO_API virtual ~UEthonkMPMenu();


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_40_PROLOG
#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_SPARSE_DATA \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_RPC_WRAPPERS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_ACCESSORS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_INCLASS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_SPARSE_DATA \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_ACCESSORS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_INCLASS_NO_PURE_DECLS \
	FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ETHONKMULTIPLAYER_API UClass* StaticClass<class UEthonkMPMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_ethonk_networking_EthonkMultiplayer_EthonkMultiplayer_HostProject_Plugins_EthonkMultiplayer_Source_EthonkMultiplayer_Public_EthonkMPMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
