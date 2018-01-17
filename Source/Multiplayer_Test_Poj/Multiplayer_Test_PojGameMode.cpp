// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Multiplayer_Test_PojGameMode.h"
#include "Multiplayer_Test_PojCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayer_Test_PojGameMode::AMultiplayer_Test_PojGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
