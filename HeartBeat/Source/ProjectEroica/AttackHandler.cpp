// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackHandler.h"
#include "TP_SideScrollerCharacter.h"
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

//initializes the stats for this character's attack
void UAttackHandler::initializeAttack(FString attackName)
{
	//reset hit counter
	hitCounter = 0;
	if (attackName == "SkillOne") {
		stunDuration = 1.0;
		dmg = 30;
		hitType = "Stunned";
	}
	if (attackName == "Combo1") {
		stunDuration = .5;
		dmg = 15;
		hitType = "Stunned";
	}
	else if (attackName == "Combo2") {
		stunDuration = .5;
		dmg = 11;
		hitType = "Stunned";
	}
	else if (attackName == "Combo3") {
		stunDuration = .5;
		dmg = 19;
		hitType = "Stunned";
	}
	else if (attackName == "Combo4") {
		stunDuration = .5;
		dmg = 13;
		hitType = "Stunned";
	}
	else if (attackName == "Combo5") {
		stunDuration = .5;
		dmg = 22;
		hitType = "Knockup";
		KnockupForce.Y = DashAttackY;
		KnockupForce.Z = DashAttackZ;
	}
	else if (attackName == "DashAttack") {
		dmg = 20;
		hitType = "Knockup";
		KnockupForce.Y= DashAttackY;
		KnockupForce.Z = DashAttackZ;
	}
	else if (attackName == "JumpAttack") {
		dmg = 5;
		stunDuration = 1;
		hitType = "Stunned";
		attackDuration = .5;
	}
	else if (attackName == "JumpStab") {
		dmg = 15;
		stunDuration = .7;
		hitType = "Stunned";
	}
}

FString UAttackHandler::DetermineAttack(FString currState, float currTime)
{
	UE_LOG(LogTemp, Warning, TEXT("prevLeft: %f"), owner->prevLeft);
	UE_LOG(LogTemp, Warning, TEXT("prevDown: %f"), owner->prevDown);
	if (currState == "Dash" || currState == "Rocketing" || currState == "Flashing" || currState == "Running") {
		return "DashAttack";
	}
	else if ((currState == "Idle" || currState == "Walking")){
		prevAttack = currTime;
		return "Combo1";
	}
	//also checks if prev attack hit
	else if (currState == "Combo1" && owner->attackState == "CoolDown"){
		prevAttack = currTime;
		return "Combo2";
	}
	else if (currState == "Combo2" && owner->attackState == "CoolDown"){
		prevAttack = currTime;
		return "Combo3";
	}
	else if (currState == "Combo3" && owner->attackState == "CoolDown") {
		prevAttack = currTime;
		return "Combo4";
	}
	else if (currState == "Combo4" && owner->attackState == "CoolDown") {
		prevAttack = currTime;
		return "Combo5";
	}
	else if (currState == "Jump" && currTime - owner->prevDown < 0.2) {
		prevAttack = currTime;
		attackLaunch = FVector(0, owner->getLeftRight() * 700, -300);
		return "JumpStab";
	}
	//jump attack cooldown
	else if (currState == "Jump" && currTime - prevAttack  > 0.5) {
		prevAttack = currTime;
		return "JumpAttack";
	}
	
	//Stay at current state if no options
	else return currState;
}
