// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackHandler.h"
#include "UObject/ConstructorHelpers.h"

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
	if (attackName == "Combo1") {
		stunDuration = .7;
		dmg = 15;
		hitType = "Stunned";
	}
	else if (attackName == "Combo2") {
		stunDuration = .7;
		dmg = 15;
		hitType = "Stunned";
	}
	else if (attackName == "Combo3") {
		stunDuration = .7;
		dmg = 15;
		hitType = "Stunned";
	}
	else if (attackName == "Combo4") {
		stunDuration = .7;
		dmg = 15;
		hitType = "Stunned";
	}
	else if (attackName == "Combo5") {
		stunDuration = .7;
		dmg = 15;
		hitType = "Stunned";
	}
	else if (attackName == "DashAttack") {
		dmg = 20;
		hitType = "Knockup";
		KnockupForce.Y= DashAttackY;
		KnockupForce.Z = DashAttackZ;
		attackDuration = .5;
	}
	else if (attackName == "JumpAttack") {
		dmg = 5;
		stunDuration = 1;
		hitType = "Stunned";
		attackDuration = .3;
	}
}

FString UAttackHandler::DetermineAttack(FString currState)
{
	if (currState == "Dash" || currState == "Running") {
		return "DashAttack";
	}
	else if (currState == "Idle" || currState == "Walking") {
		return "Combo1";
	}
	else if (currState == "Combo1") {
		return "Combo2";
	}
	else if (currState == "Combo2") {
		return "Combo3";
	}
	else if (currState == "Combo3") {
		return "Combo4";
	}
	else if (currState == "Combo4") {
		return "Combo5";
	}
	else if (currState == "Jump") {
		return "JumpAttack";
	}
	//Stay at current state if no options
	else return currState;
}
