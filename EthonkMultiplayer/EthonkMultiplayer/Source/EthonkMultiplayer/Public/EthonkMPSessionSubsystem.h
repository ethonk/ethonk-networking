// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineSessionSettings.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "OnlineSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "EthonkMPSessionSubsystem.generated.h"

//
// DELEGATES FOR THE MENU CLASS
//
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnCreateSessionComplete, bool, bWasSuccessful);
DECLARE_MULTICAST_DELEGATE_TwoParams(FMultiplayerOnFindSessionsComplete, const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful);
DECLARE_MULTICAST_DELEGATE_OneParam(FMultiplayerOnJoinSessionComplete, EOnJoinSessionCompleteResult::Type Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnDestroySessionComplete, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiplayerOnStartSessionComplete, bool, bWasSuccessful);

/**
 * 
 */
UCLASS()
class ETHONKMULTIPLAYER_API UEthonkMPSessionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	//
	// ** CONSTRUCTOR/DESTRUCTOR **/
	//
	//	- constructor
	UEthonkMPSessionSubsystem();

	//
	// ** FUNCTIONS FOR SESSION CREATION ** /
	//
	//	- creates a session. takes in number of players allowed to join
	void CreateSession(FName SessionName, int PlayerAllowance);
	//	- finds all sessions. takes in number of maximum allowed searches
	void FindSessions(int MaxSearchResults);
	//	- joins a given session. takes a session search result.
	void JoinSession(const FOnlineSessionSearchResult& SessionResult);
	//	- destroys a session
	void DestroySession();
	//	- starts a session
	void StartSession();

	//
	// ** MENU CLASS DELEGATES ** /
	//
	//	- when session creation is successful
	FMultiplayerOnCreateSessionComplete MultiplayerOnCreateSessionComplete;
	FMultiplayerOnFindSessionsComplete MultiplayerOnFindSessionsComplete;
	FMultiplayerOnJoinSessionComplete MultiplayerOnJoinSessionComplete;
	FMultiplayerOnDestroySessionComplete MultiplayerOnDestroySessionComplete;
	FMultiplayerOnStartSessionComplete MultiplayerOnStartSessionComplete;
	
	//
	// ** SESSION DATA **/
	//
	//	- session interface
	IOnlineSessionPtr SessionInterface;
	//	- session settings
	TSharedPtr<FOnlineSessionSettings> LastSessionSettings;
	TSharedPtr<FOnlineSessionSearch> LastSessionSearch;
	
protected:
	//
	// ** INTERNAL CALLBACKS FOR DELEGATES
	//
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);
	void OnFindSessionsComplete(bool bWasSuccessful);
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful);
	void OnStartSessionComplete(FName SessionName, bool bWasSuccessful);
	
private:

	//
	// ** DELEGATES FOR SESSION FUNCTIONALITY (binds) **
	//
	//	- create session
	FOnCreateSessionCompleteDelegate CreateSessionCompleteDelegate;
	FDelegateHandle CreateSessionCompleteDelegateHandle;
	//	- find sessions
	FOnFindSessionsCompleteDelegate FindSessionsCompleteDelegate;
	FDelegateHandle FindSessionsCompleteDelegateHandle;
	//	- join session
	FOnJoinSessionCompleteDelegate JoinSessionCompleteDelegate;
	FDelegateHandle JoinSessionCompleteDelegateHandle;
	//	- destroy session
	FOnDestroySessionCompleteDelegate DestroySessionCompleteDelegate;
	FDelegateHandle DestroySessionCompleteDelegateHandle;
	//	- start session
	FOnStartSessionCompleteDelegate StartSessionCompleteDelegate;
	FDelegateHandle StartSessionCompleteDelegateHandle;
	
};
