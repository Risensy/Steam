// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintDataDefinitions.h"
#include "Online.h"
#include "OnlineSubsystem.h"
#include "Interfaces/VoiceInterface.h"
#include "Engine/GameInstance.h"
#include "UObject/UObjectIterator.h"
#include "VOIPLIB.generated.h"

/**
 * 
 */
UCLASS()
class STEAM_API UVOIPLIB : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "VOIPLIB")
	static void ClearVoicePackets(UObject* WorldContextObject);
};
