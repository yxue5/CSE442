// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_SideScrollerCharacter.h"
#include "AI_Kisa.generated.h"

/**
 * 
 */
class UPawnSensingComponent;
UCLASS()
class PROJECTEROICA_API AAI_Kisa : public ATP_SideScrollerCharacter
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
		UPawnSensingComponent* PawnSensingComp;
	UFUNCTION()
		void OnPawnSeen(APawn* SeenPawn);
	bool justSawPawn = false;
public:
	AAI_Kisa();
	void Tick(float DeltaTime) override;
	void BeginPlay() override;
	UFUNCTION()
	void Scout();
	float AttackCoolDown = 3.0f;
	float AIprevDash = 0;
	float prevAttack = 0;

	FTimerHandle ScoutHandle;
	float lastSeenPawn = 0;
	FVector SeenPawnLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool isAIMode = false;
};
