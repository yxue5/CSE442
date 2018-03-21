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
		stunDuration = 1;
		dmg = 15;
		hitType = "Stunned";
	}
}

FString UAttackHandler::DetermineAttack(FString currState)
{
	if (currState == "Dash") {
		return "DashAttack";
	}
	else if (currState == "Idle") {
		return "BaseCombo1";
	}
	else if (currState == "Jump") {
		return "JumpAttack";
	}
}
