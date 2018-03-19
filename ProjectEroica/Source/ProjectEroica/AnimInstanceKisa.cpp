// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimInstanceKisa.h"
#include "Kismet/GameplayStatics.h"

void UAnimInstanceKisa::HandleState(FString newState) {
	if (newState != State) {
		if (State == "Dash") {
			UGameplayStatics::PlaySound2D(this, DashSound);
		}
	}
	State = newState;
}