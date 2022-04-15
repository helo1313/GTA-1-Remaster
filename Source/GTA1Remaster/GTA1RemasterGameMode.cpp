// Copyright Epic Games, Inc. All Rights Reserved.

#include "GTA1RemasterGameMode.h"
#include "GTA1RemasterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGTA1RemasterGameMode::AGTA1RemasterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
