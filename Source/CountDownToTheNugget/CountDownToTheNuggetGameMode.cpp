// Copyright Epic Games, Inc. All Rights Reserved.

#include "CountDownToTheNuggetGameMode.h"
#include "CountDownToTheNuggetCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACountDownToTheNuggetGameMode::ACountDownToTheNuggetGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Kobo_ForestVillage/Chicken/BP_Chicken_Skeleton"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
