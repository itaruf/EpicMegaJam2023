// Copyright Epic Games, Inc. All Rights Reserved.

#include "EpicMegaJam2023GameMode.h"
#include "EpicMegaJam2023Character.h"
#include "UObject/ConstructorHelpers.h"

AEpicMegaJam2023GameMode::AEpicMegaJam2023GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
