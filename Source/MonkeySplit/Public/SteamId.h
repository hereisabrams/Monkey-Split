// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamId.generated.h"

/**
 * 
 */
UCLASS()
class MONKEYSPLIT_API USteamId : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "Steam")
		static FString GetSteamID64();

	UFUNCTION(BlueprintPure, Category = "Steam")
		static FString GetSteamID32();
	
};
