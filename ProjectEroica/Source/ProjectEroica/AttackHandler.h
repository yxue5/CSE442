// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackHandler.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTEROICA_API UAttackHandler : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttackHandler();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	UFUNCTION()
	void initializeAttack(FString attackName);
	UFUNCTION()
	FString DetermineAttack(FString currState);
	UPROPERTY(VisibleAnywhere)
		float attackDuration = 0;
	UPROPERTY(VisibleAnywhere)
		float stunDuration = 0;
	UPROPERTY(VisibleAnywhere)
		float dmg = 0;
	UPROPERTY(EditDefaultsOnly)
		float KnockupY = 0;
	UPROPERTY(EditDefaultsOnly)
		float KnockupZ = 0;

	UPROPERTY(EditDefaultsOnly)
		float DashAttackY = 500;
	UPROPERTY(EditDefaultsOnly)
		float DashAttackZ = 1000;
	UPROPERTY(VisibleAnywhere)
		FString hitType = "Stunned";
};
