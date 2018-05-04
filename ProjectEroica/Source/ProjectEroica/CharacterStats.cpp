// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterStats.h"
#include "TimerManager.h" 
#include "Runtime/Engine/Classes/Engine/World.h"

// Sets default values for this component's properties
UCharacterStats::UCharacterStats()
{

	// ...
	maxHP = 200;
	maxMP = 100;
	hp = 200;
	mp = 0;
	hpRegen = .2;
	mpRegen = .5;
}


// Called when the game starts
void UCharacterStats::BeginPlay()
{
	Super::BeginPlay();
	updateStats();
}

void UCharacterStats::updateStats()
{
	GetWorld()->GetTimerManager().SetTimer(UpdateStatsHandle, this, &UCharacterStats::updateStats, .1f, false);
	if(hp < maxHP)
		hp += hpRegen;
	if (mp < maxMP)
	{
		mp += mpRegen;
	}
}

float UCharacterStats::hpPercent()
{
	return hp / maxHP;
}

float UCharacterStats::mpPercent()
{
	
	return mp / maxMP;
}

