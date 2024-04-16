// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include <Math/RandomStream.h>

GameManager::GameManager()
{
}

GameManager::~GameManager()
{
}

float GameManager::StartTie()
{
	FRandomStream RandomStream(FMath::Rand());

	float randomNumber = RandomStream.FRand();

	return randomNumber;
}
