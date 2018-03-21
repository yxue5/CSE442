// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimInstanceKisa.h"
#include "Kismet/GameplayStatics.h"

void UAnimInstanceKisa::HandleState(FString newState) {
	if (newState != State) {
		if (newState == "Dash") {
			UGameplayStatics::PlaySound2D(this, DashSound);
		}
		else if (newState == "Land" && State == "Jump") {
			UGameplayStatics::PlaySound2D(this, LandSound);
		}
		else if (newState == "BaseCombo1") {
			UGameplayStatics::PlaySound2D(this, BaseCombo1);
		}
	}
	State = newState;
}