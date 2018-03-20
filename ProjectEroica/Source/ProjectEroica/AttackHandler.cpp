// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackHandler.h"


// Sets default values for this component's properties
UAttackHandler::UAttackHandler()
{
}


// Called when the game starts
void UAttackHandler::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UAttackHandler::handleAttack(FString attackName)
{
	if (attackName == "BaseCombo1") {
<<<<<<< HEAD
		stunDuration = 10;
=======
		stunDuration = 1;
>>>>>>> DevelopNew
		dmg = 15;
		hitType = "Stunned";
	}
}
