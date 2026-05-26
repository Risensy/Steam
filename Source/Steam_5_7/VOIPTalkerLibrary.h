

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintDataDefinitions.h"
#include "Online.h"
#include "OnlineSubsystem.h"
#include "Interfaces/VoiceInterface.h"
#include "Engine/GameInstance.h"
#include "UObject/UObjectIterator.h"
#include "VOIPTalkerLibrary.generated.h"

/**
 * 
 */
UCLASS()
class STEAM_5_7_API UVOIPTalkerLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "VOIPLIB")
    static void ClearVoicePackets(UObject* WorldContextObject);

};
