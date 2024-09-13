// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThisKindaWorksGameMode.h"

#include "EngineUtils.h"
#include "ThisKindaWorksCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "ThisKindaWorks.h"
#include "GameFramework/PlayerStart.h"

AThisKindaWorksGameMode::AThisKindaWorksGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(
		TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}

void AThisKindaWorksGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	UE_LOG(InitializeLog, Log, TEXT("Game Is Running: %s %s"), *MapName, *Options);

	for (TActorIterator<APlayerStart> It(GetWorld()); It; ++It)
	{
		FreePlayerStarts.Add(*It);
		UE_LOG(InitializeLog, Log, TEXT("Found player Start: %s"), *(*It)->GetName())
	}
}

void AThisKindaWorksGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId,
                                       FString& ErrorMessage)
{
	if (FreePlayerStarts.Num() == 0)
	{
		ErrorMessage = TEXT("Server Full");
	}

	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
}
