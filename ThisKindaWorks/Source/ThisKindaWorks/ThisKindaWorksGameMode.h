// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ThisKindaWorksGameMode.generated.h"

UCLASS(minimalapi)
class AThisKindaWorksGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AThisKindaWorksGameMode();
/*virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	virtual FString InitNewPlayer(APlayerController* NewPlayerController, const FUniqueNetIdRepl& UniqueId, const FString& Options, const FString& Portal = TEXT("")) override;
*/	
private:
TArray<class APlayerStart*> FreePlayerStarts;
	
};



