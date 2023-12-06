// Fill out your copyright notice in the Description page of Project Settings.


#include "SteamId.h"
#include "ThirdParty/Steamworks/Steamv147/sdk/public/steam/steam_api.h"

FString USteamId::GetSteamID64()
{
	FString outID = "";
	CSteamID steamID = SteamUser()->GetSteamID();
	uint64 intID = steamID.ConvertToUint64();

	outID = FString::Printf(TEXT("%lld"), intID);

	return outID;
}

FString USteamId::GetSteamID32()
{
	FString outID = "";
	CSteamID steamID = SteamUser()->GetSteamID();
	uint64 intID = steamID.ConvertToUint64();

	outID = FString::FromInt(intID);

	return outID;
}