// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThisKindaWorksGameMode.h"
#include "ThisKindaWorksCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThisKindaWorksGameMode::AThisKindaWorksGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
