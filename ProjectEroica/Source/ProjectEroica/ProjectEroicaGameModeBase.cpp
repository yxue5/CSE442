// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectEroicaGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "AI_Kisa.h"

AProjectEroicaGameModeBase::AProjectEroicaGameModeBase() {
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	
}

void AProjectEroicaGameModeBase::activateAI()
{
	EnemyAI->isAIMode = !EnemyAI->isAIMode;
}

void AProjectEroicaGameModeBase::setAISpeed(float speed)
{
	EnemyAI->reactionTime = speed;
}
