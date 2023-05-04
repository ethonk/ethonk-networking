// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "EthonkMPMenu.generated.h"

//
// ** SERVER INFO STRUCT: all info of a server for the blueprint
//
USTRUCT(BlueprintType)
struct FServerInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "Network")
		FString ServerName;
	UPROPERTY(BlueprintReadOnly, Category = "Network")
		int32 CurrPlayers;
	UPROPERTY(BlueprintReadOnly, Category = "Network")
		int32 MaxPlayers;
	UPROPERTY(BlueprintReadOnly, Category = "Network")
		int32 Ping;
	UPROPERTY(BlueprintReadOnly, Category = "Network")
		int ServerIndex;
	UPROPERTY(BlueprintReadOnly, Category = "Network")
		bool Selected;
};

//
// ** UI DELEGATES **
//
//	- on server refresh called
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerDelegate, FServerInfo, ServerListDelegate);
//	- on server refresh completed
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FServerRefreshCompleteDelegate);

UCLASS()
class ETHONKMULTIPLAYER_API UEthonkMPMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	//	- sets up menu and adds to viewport, etc...
	UFUNCTION(BlueprintCallable, Category = "Network")
	void InitializeMenu(int PlrCount = 4, FString LobbyPath = FString(TEXT("/Game/_Resources/Levels/Other/L_Lobby_MineCart")));

protected:
	
	//	- for now, used for binding callbacks
	virtual bool Initialize() override;
	//	- when level is changed
	virtual void NativeDestruct() override;

	//
	// ** LINK DELEGATES IN SUBSYSTEM TO MENU ** /
	//
	//	- on create session
	UFUNCTION()
	void OnCreateSession(bool bWasSuccessful);
	//	- on find sessions
	void OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful);
	//	- on join session
	void OnJoinSession(EOnJoinSessionCompleteResult::Type Result);
	//	- on destroy session
	UFUNCTION()
	void OnDestroySession(bool bWasSuccessful);
	//	- on start session
	UFUNCTION()
	void OnStartSession(bool bWasSuccessful);

	//
	// ** DELEGATES ** /
	//
	//	- delegate for the server list
	UPROPERTY(BlueprintAssignable)
		FServerDelegate ServerListDelegate;
	//	- delegate for completed server list
	UPROPERTY(BlueprintAssignable)
		FServerRefreshCompleteDelegate ServerRefreshCompleteDelegate;

	//
	// ** CURRENTLY SELECTED SERVER ** /
	//
	UPROPERTY(BlueprintReadWrite, Category = "Network")
		int SelectedServerIndex = -1;
	
private:
	
	// Reference the subsystem
	UPROPERTY(VisibleAnywhere, Category = "Network")
		class UEthonkMPSessionSubsystem* EthonkMPSessionSubsystem;
	
	// Reference the buttons on the Menu
	//	- host button
	UPROPERTY(meta = (BindWidget))
		class UButton* HostButton;
	//	- join button
	UPROPERTY(meta = (BindWidget))
		UButton* JoinButton;

	// Button clicks (blueprint called)
	//	- host
	UFUNCTION(BlueprintCallable, Category = "Network")
	void HostServer(FString ServerName);
	//	- join
	UFUNCTION(BlueprintCallable, Category = "Network")
	void JoinServer();
	//	- actually join
	UFUNCTION(BlueprintCallable, Category = "Network")
	void CompleteJoinServer(int Index);

	// Other functions
	//	- resets menu widget and input
	UFUNCTION()
	void MenuTearDown();

	// ** SETTINGS ** /
	//	- max players per lobby
	int PlayerCount{4};
	//	- path to the map of the lobby
	FString GameLobbyPath{TEXT("")};
};
