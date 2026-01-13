// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_UI_ExplorationGameMode.h"
#include "UE_UI_ExplorationCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_UI_ExplorationGameMode::AUE_UI_ExplorationGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
