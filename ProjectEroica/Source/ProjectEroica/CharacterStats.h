// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterStats.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTEROICA_API UCharacterStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterStats();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
public:	
	FTimerHandle UpdateStatsHandle;

	UFUNCTION(BlueprintCallable, Category = "Stats")
	float hpPercent();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	float mpPercent();

	void updateStats();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float maxHP = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float maxMP = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float hp = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float hpRegen = 2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float mp = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float mpRegen = 5;
};
