// Copyright Epic Games, Inc. All Rights Reserved.

#include "PenGwynGameMode.h"
#include "PenGwynCharacter.h"
#include "UObject/ConstructorHelpers.h"

APenGwynGameMode::APenGwynGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
