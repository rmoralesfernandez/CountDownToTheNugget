// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManagerInstance.h"
#include <Math/RandomStream.h>

UGameManagerInstance::UGameManagerInstance()
{
}

float UGameManagerInstance::RandomNumberPOP()
{
	randNum = FMath::FRand();

	return randNum;
}
