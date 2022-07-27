// Copyright Epic Games, Inc. All Rights Reserved.

#include "TimeGameGameMode.h"
#include "TimeGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATimeGameGameMode::ATimeGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
