// Fill out your copyright notice in the Description page of Project Settings.


#include "EthonkMPMenu.h"
#include "Components/Button.h"

#include "EthonkMPSessionSubsystem.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"

void UEthonkMPMenu::InitializeMenu(int PlrCount, FString LobbyPath)
{
	// Set player count
	PlayerCount = PlrCount;

	// Set lobby path
	GameLobbyPath = FString::Printf(TEXT("%s?listen"), *LobbyPath);
	
	// Set visible and focusable to the screen.
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	bIsFocusable = true;

	// Get the world
	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("EthonkMPMenu - ERROR: World is null."))
		return;
	}

	// Get the player controller
	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("EthonkMPMenu - ERROR: PlayerController is null."))
		return;
	}

	// Set up the input mode
	FInputModeUIOnly InputModeData;
	InputModeData.SetWidgetToFocus(TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	
	// Set player controller's input mode to defined input mode.
	PlayerController->SetInputMode(InputModeData);
	PlayerController->SetShowMouseCursor(true);

	//
	// ** ACCESSING THE SUBSYSTEM ** /
	//
	UGameInstance* GameInstance = GetGameInstance();
	if (!GameInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("EthonkMPMenu - ERROR: GameInstance is null."))
		return;
	}
	// access subsystem
	EthonkMPSessionSubsystem = GameInstance->GetSubsystem<UEthonkMPSessionSubsystem>();

	// Bind Delegates
	//	- check validity of subsystem
	if (!EthonkMPSessionSubsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("EthonkMPMenu - ERROR: EthonkMPSessionSubsystem is null."))
		return;
	}

	//	- bind so this function in the menu is called when create session is successful in the subsystem
	EthonkMPSessionSubsystem->MultiplayerOnCreateSessionComplete.AddDynamic(this, &ThisClass::OnCreateSession);
	EthonkMPSessionSubsystem->MultiplayerOnFindSessionsComplete.AddUObject(this, &ThisClass::OnFindSessions);
	EthonkMPSessionSubsystem->MultiplayerOnJoinSessionComplete.AddUObject(this, &ThisClass::OnJoinSession);
	EthonkMPSessionSubsystem->MultiplayerOnDestroySessionComplete.AddDynamic(this, &ThisClass::OnDestroySession);
	EthonkMPSessionSubsystem->MultiplayerOnStartSessionComplete.AddDynamic(this, &ThisClass::OnStartSession);
}

bool UEthonkMPMenu::Initialize()
{
	if(!Super::Initialize()) return false;
	return true;
}

void UEthonkMPMenu::NativeDestruct()
{
	// destroy menu
	MenuTearDown();
	
	Super::NativeDestruct();
}

void UEthonkMPMenu::OnCreateSession(bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		// join lobby
		//	- get world
		UWorld* World = GetWorld();
		if (!World)
		{
			UE_LOG(LogTemp, Warning, TEXT("OnCreateSession - ERROR: World is NULL!"));
			return;
		}

		//	- travel
		World->ServerTravel(FString(GameLobbyPath));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("OnCreateSession - Level Creation Failed!"));
	}
}

void UEthonkMPMenu::OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful)
{
	// check for valid subsystem
	if (EthonkMPSessionSubsystem == nullptr) return;
	
	UE_LOG(LogTemp, Warning, TEXT("Finding Sessions..."));
	
	// loop through session results
	for (int i = 0; i < SessionResults.Num(); i++)
	{
		// define result
		auto Result = SessionResults[i];
		
		// if invalid, skip it
		if (!Result.IsValid()) continue;

		// properties
		//	- getting the server name
		FString ServerName = "AServerName";
		Result.Session.SessionSettings.Get(FName("SERVER_NAME_KEY"), ServerName);
		
		// create some new info
		FServerInfo ServerInfo;
		ServerInfo.ServerName = ServerName;
		ServerInfo.CurrPlayers = PlayerCount - Result.Session.SessionSettings.NumPublicConnections;
		ServerInfo.MaxPlayers = Result.Session.SessionSettings.NumPublicConnections;
		ServerInfo.Ping = Result.PingInMs;
		ServerInfo.ServerIndex = i;
		//	- check if selected
		if (SelectedServerIndex > -1)	// -1 = no index...
		{
			ServerInfo.Selected = SelectedServerIndex == i;
			UE_LOG(LogTemp, Warning, TEXT("Comparing index: %d vs. %d"), SelectedServerIndex, i);
		}
		else
		{
			ServerInfo.Selected = false;
		}

		// broadcast the delegate
		ServerListDelegate.Broadcast(ServerInfo);
	}

	// once loop is completed, run server list refresh completed
	ServerRefreshCompleteDelegate.Broadcast();
}

void UEthonkMPMenu::OnJoinSession(EOnJoinSessionCompleteResult::Type Result)
{	
	// get the subsystem, as it cant depend on this menu.
	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();
	if (!Subsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("OnJoinSession - ERROR: Subsystem is NULL"));
		return;
	}

	// set the interface
	IOnlineSessionPtr SessionInterface = Subsystem->GetSessionInterface();
	if (!SessionInterface.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("OnJoinSession - ERROR: SessionInterface is invalid"));
		return;
	}

	// connect with an address
	FString Address;
	SessionInterface->GetResolvedConnectString(NAME_GameSession, Address);

	// get the player controller and client travel using the address
	APlayerController* PlayerController = GetGameInstance()->GetFirstLocalPlayerController();
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("OnJoinSession - ERROR: PlayerController is NULL"));
		return;
	}
	
	UE_LOG(LogTemp, Warning, TEXT("OnJoinSession - SUCCEEDED: Client Travelling!"));
	
	// client travel
	PlayerController->ClientTravel(Address, TRAVEL_Absolute);
}

void UEthonkMPMenu::OnDestroySession(bool bWasSuccessful)
{
}

void UEthonkMPMenu::OnStartSession(bool bWasSuccessful)
{
}

void UEthonkMPMenu::HostServer(FString ServerName)
{
	// check for subsystem first
	if (!EthonkMPSessionSubsystem) return;
		
	// create session
	EthonkMPSessionSubsystem->CreateSession(FName(*ServerName), PlayerCount);
}

void UEthonkMPMenu::JoinServer()
{
	// check for subsystem first
	if (!EthonkMPSessionSubsystem) return;
	
	// call find sessions
	EthonkMPSessionSubsystem->FindSessions(10000);
}

void UEthonkMPMenu::CompleteJoinServer(int Index)
{
	if (!EthonkMPSessionSubsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("Woah woah... Subsystem is invalid brother."));
		return;
	}
		
	UE_LOG(LogTemp, Warning, TEXT("Attempting to join session..."));
	// attempt a join
	FOnlineSessionSearchResult Result = EthonkMPSessionSubsystem->LastSessionSearch->SearchResults[SelectedServerIndex];
	if (!Result.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Not a valid session to join!"));
		return;
	}

	// get server name
	//	- getting the server name
	FString ServerName = "AServerName";
	Result.Session.SessionSettings.Get(FName("SERVER_NAME_KEY"), ServerName);
	
	// commit join
	UE_LOG(LogTemp, Warning, TEXT("Commit! Joining server: %s"), *ServerName);
	EthonkMPSessionSubsystem->JoinSession(Result);
}

void UEthonkMPMenu::MenuTearDown()
{
	RemoveFromParent();

	// get world
	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("MenuTearDown - ERROR: Failed to get world!"));
		return;
	}

	// get player controller
	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Warning, TEXT("CreateSession - ERROR: Failed to get player controller!"));
		return;
	}

	// setup input mode data
	FInputModeGameOnly InputModeData;
	// set input mode
	PlayerController->SetInputMode(InputModeData);
	PlayerController->SetShowMouseCursor(false);
}
