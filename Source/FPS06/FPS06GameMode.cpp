// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS06GameMode.h"
#include "FPS06Character.h"
#include "UObject/ConstructorHelpers.h"

AFPS06GameMode::AFPS06GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
