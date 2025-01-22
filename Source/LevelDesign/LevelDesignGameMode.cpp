// Copyright Epic Games, Inc. All Rights Reserved.

#include "LevelDesignGameMode.h"
#include "LevelDesignCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALevelDesignGameMode::ALevelDesignGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
