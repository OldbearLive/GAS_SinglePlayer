// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAS_SinglePlayerGameMode.h"
#include "GAS_SinglePlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAS_SinglePlayerGameMode::AGAS_SinglePlayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
