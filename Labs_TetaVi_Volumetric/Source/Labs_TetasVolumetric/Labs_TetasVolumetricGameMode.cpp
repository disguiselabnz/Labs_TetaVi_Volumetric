// Copyright Epic Games, Inc. All Rights Reserved.

#include "Labs_TetasVolumetricGameMode.h"
#include "Labs_TetasVolumetricCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALabs_TetasVolumetricGameMode::ALabs_TetasVolumetricGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
