// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamSession.generated.h"
/**
 * 
 */
UCLASS()
class MONKEYSPLIT_API USteamSession : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "Steam")
		static FString SetSteamJoinable();
	
};
