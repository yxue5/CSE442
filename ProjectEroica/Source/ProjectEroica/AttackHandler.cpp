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

void UAttackHandler::initializeAttack(FString attackName)
{
	if (attackName == "BaseCombo1") {
		stunDuration = .7;
		dmg = 15;
		hitType = "Stunned";
		attackDuration = 1;
	}
	else if (attackName == "DashAttack") {
		dmg = 20;
		hitType = "Knockup";
		KnockupY = DashAttackY;
		KnockupZ = DashAttackZ;
		attackDuration = .5;
	}
	else if (attackName == "JumpAttack") {
		dmg = 5;
		stunDuration = 1;
		hitType = "Stunned";
		attackDuration = .21;
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
	//Stay at current state if no options
	else return currState;
}
