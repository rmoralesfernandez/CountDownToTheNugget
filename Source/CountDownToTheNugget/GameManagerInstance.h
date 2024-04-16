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
	float randNum;
};
int = 2
