// Fill out your copyright notice in the Description page of Project Settings.


#include "SteamSession.h"
#include "ThirdParty/Steamworks/Steamv147/sdk/public/steam/steam_api.h"


FString USteamSession::SetSteamJoinable()
{
	FString outID = "";
	CSteamID steamID = SteamUser()->GetSteamID();
	uint64 intID = steamID.ConvertToUint64();
	SteamMatchmaking()->SetLobbyJoinable(steamID, false);
	return "";
}
