// Copyright Epic Games, Inc. All Rights Reserved.

#include "Escape_roomGameMode.h"
#include "Escape_roomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEscape_roomGameMode::AEscape_roomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
