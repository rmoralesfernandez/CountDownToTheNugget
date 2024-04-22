// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameManagerInstance.generated.h"



/**
 * 
 */
UCLASS()
class COUNTDOWNTOTHENUGGET_API UGameManagerInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UGameManagerInstance();

	UFUNCTION(BlueprintCallable, Category = "Game Manager")
	float RandomNumberPOP();

	UPROPERTY(EditAnywhere)
	int randNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Manager")
	float CountDownTimerGM = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "CharacterGotBomb")
	bool Player1Tie;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "CharacterGotBomb")
	bool Player2Tie;

};

