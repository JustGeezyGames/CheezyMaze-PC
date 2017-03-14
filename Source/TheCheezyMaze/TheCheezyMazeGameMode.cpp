// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TheCheezyMaze.h"
#include "TheCheezyMazeGameMode.h"
#include "TheCheezyMazeCharacter.h"

ATheCheezyMazeGameMode::ATheCheezyMazeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/MouseCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
