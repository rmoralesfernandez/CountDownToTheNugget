// Copyright Epic Games, Inc. All Rights Reserved.

#include "CountDownToTheNuggetGameMode.h"
#include "CountDownToTheNuggetCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACountDownToTheNuggetGameMode::ACountDownToTheNuggetGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
