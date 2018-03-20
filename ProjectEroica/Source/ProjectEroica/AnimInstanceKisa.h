// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceKisa.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTEROICA_API UAnimInstanceKisa : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
		void HandleState(FString newState);
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FString State = "Idle";	

	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* DashSound;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* LandSound;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* DashAttackSound;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* HitSound;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* PainSound;
};
