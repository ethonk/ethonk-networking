// Fill out your copyright notice in the Description page of Project Settings.


#include "EthonkMPSessionSubsystem.h"

UEthonkMPSessionSubsystem::UEthonkMPSessionSubsystem():
	// bind all callbacks to delegates
	CreateSessionCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreateSessionComplete)),
	FindSessionsCompleteDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnFindSessionsComplete)),
	JoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnJoinSessionComplete)),
	DestroySessionCompleteDelegate(FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnDestroySessionComplete)),
	StartSessionCompleteDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnStartSessionComplete))
{
	// attempt to get the subsystem
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (!Subsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("UEthonkMPSessionSubsystem - ERROR: Failed to get subsystem!"))
		return;
	}

	// print subsystem
	UE_LOG(LogTemp, Warning, TEXT("Using Subsystem: %s"), *IOnlineSubsystem::Get()->GetSubsystemName().ToString());
	
	// set the session interface
	SessionInterface = Subsystem->GetSessionInterface();
}

void UEthonkMPSessionSubsystem::CreateSession(FName SessionName, int PlayerAllowance)
{
	UE_LOG(LogTemp, Warning, TEXT("CreateSession - Attempting to create session for %d players..."), PlayerAllowance);

	// check validity of session interface
	if (!SessionInterface.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("CreateSession - ERROR: SessionInterface is invalid!"));
		return;
	}

	// store existing session so it auto-deletes if need be
	// if there is a current level, delete it!
	if (const auto CurrentSession = SessionInterface->GetNamedSession(SessionName); CurrentSession != nullptr)
	{
		SessionInterface->DestroySession(SessionName);
	}

	// store the delegate handle for later removal.
	CreateSessionCompleteDelegateHandle = SessionInterface->AddOnCreateSessionCompleteDelegate_Handle
		(CreateSessionCompleteDelegate);

	// create session settings
	LastSessionSettings = MakeShareable(new FOnlineSessionSettings());
	//	- set properties
	LastSessionSettings->bIsLANMatch = IOnlineSubsystem::Get()->GetSubsystemName() == "NULL" ? true : false;
	LastSessionSettings->NumPublicConnections = PlayerAllowance;
	LastSessionSettings->bAllowJoinInProgress = true;
	LastSessionSettings->bAllowJoinViaPresence = true;
	LastSessionSettings->bShouldAdvertise = true;
	LastSessionSettings->bUsesPresence = true;
	LastSessionSettings->bUseLobbiesIfAvailable = true;
	LastSessionSettings->BuildUniqueId = 1;		// <- allows multiple instances
	//	- set personalized properties
	LastSessionSettings->Set(FName("SERVER_NAME_KEY"), SessionName.ToString(),
		EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	LastSessionSettings->Set(FName("MatchType"), FString("TavernMatch"),
		EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);

	// attempt to get local player
	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	if (!LocalPlayer)
	{
		UE_LOG(LogTemp, Warning, TEXT("CreateSession - ERROR: LocalPlayer is NULL!"));
		return;
	}

	// create session
	//	- if unsuccessful
	if (!SessionInterface->CreateSession(*LocalPlayer->GetPreferredUniqueNetId(), SessionName, *LastSessionSettings))
	{
		// remove delegate
		SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionCompleteDelegateHandle);

		//	- broadcast delegate upon unsuccessful create session
		MultiplayerOnCreateSessionComplete.Broadcast(false);
		
		UE_LOG(LogTemp, Warning, TEXT("CreateSession - ERROR: Failed to create session!"));
	}
}

void UEthonkMPSessionSubsystem::FindSessions(int MaxSearchResults)
{
	UE_LOG(LogTemp, Warning, TEXT("FindSessions - Attempting to find max %d sessions..."), MaxSearchResults);
	
	// check validity
	if (!SessionInterface.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("FindSessions - Session interface invalid..."));
		return;
	}

	// set delegate handle
	FindSessionsCompleteDelegateHandle = SessionInterface->AddOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegate);

	//
	// 
	//
	UE_LOG(LogTemp, Warning, TEXT("FindSessions - Creating session search..."));
	
	// create session search
	LastSessionSearch = MakeShareable(new FOnlineSessionSearch());
	// set session search
	LastSessionSearch->MaxSearchResults = MaxSearchResults;
	LastSessionSearch->bIsLanQuery = IOnlineSubsystem::Get()->GetSubsystemName() == "NULL" ? true : false;
	LastSessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);

	// try get local player
	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	if (!LocalPlayer)
	{
		UE_LOG(LogTemp, Warning, TEXT("OnJoinSessionComplete - LocalPlayer NULL..."));
		return;
	}
	
	// run find sessions
	if (!SessionInterface->FindSessions(*LocalPlayer->GetPreferredUniqueNetId(), LastSessionSearch.ToSharedRef()))
	{
		UE_LOG(LogTemp, Warning, TEXT("FindSessions - ERROR: Failed to find sessions..."));
		
		SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegateHandle);

		// broadcast delegate for failure
		MultiplayerOnFindSessionsComplete.Broadcast(TArray<FOnlineSessionSearchResult>(), false);
	}
}

void UEthonkMPSessionSubsystem::JoinSession(const FOnlineSessionSearchResult& SessionResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Joining. COnfirmed!"));
	if (!SessionInterface.IsValid())
	{
		MultiplayerOnJoinSessionComplete.Broadcast(EOnJoinSessionCompleteResult::UnknownError);
		return;
	}

	// store into delegate handle
	JoinSessionCompleteDelegateHandle = SessionInterface->AddOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegate);

	// try get local player
	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	if (!LocalPlayer)
	{
		UE_LOG(LogTemp, Warning, TEXT("JoinSession - LocalPlayer NULL..."));
		return;
	}
	
	// join session, check if it fails
	if (!SessionInterface->JoinSession(*LocalPlayer->GetPreferredUniqueNetId(), NAME_GameSession, SessionResult))
	{
		// broadcast a failure
		SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegateHandle);
		MultiplayerOnJoinSessionComplete.Broadcast(EOnJoinSessionCompleteResult::UnknownError);
	}
}

void UEthonkMPSessionSubsystem::DestroySession()
{
}

void UEthonkMPSessionSubsystem::StartSession()
{
}

void UEthonkMPSessionSubsystem::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
{
	if (!SessionInterface)
	{
		UE_LOG(LogTemp, Warning, TEXT("OnCreateSessionComplete - ERROR: SessionInterface is NULL"));
		return;
	}

	// broadcast as true
	MultiplayerOnCreateSessionComplete.Broadcast(bWasSuccessful);
}

void UEthonkMPSessionSubsystem::OnFindSessionsComplete(bool bWasSuccessful)
{
	if (!SessionInterface)
	{
		UE_LOG(LogTemp, Warning, TEXT("OnFindSessionsComplete - Session interface NULL..."));
		return;
	}
	
	// clear delegate handle
	SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegateHandle);
	
	// check validity
	if (!SessionInterface.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("OnFindSessionsComplete - Session interface invalid..."));
		return;
	}
	
	// check if session search is empty
	if (LastSessionSearch->SearchResults.Num() <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("OnFindSessionsComplete - ERROR: 0 server results found."));
		
		// broadcast delegate for failure
		MultiplayerOnFindSessionsComplete.Broadcast(TArray<FOnlineSessionSearchResult>(), false);
		return;
	}
	
	// broadcast delegate
	MultiplayerOnFindSessionsComplete.Broadcast(LastSessionSearch->SearchResults, bWasSuccessful);
}

void UEthonkMPSessionSubsystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	if (!SessionInterface) return;

	UE_LOG(LogTemp, Warning, TEXT("OnJoinSessionComplete"));
	
	// Broadcast a successful join session.
	SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegateHandle);
	MultiplayerOnJoinSessionComplete.Broadcast(Result);
}

void UEthonkMPSessionSubsystem::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
}

void UEthonkMPSessionSubsystem::OnStartSessionComplete(FName SessionName, bool bWasSuccessful)
{
}
