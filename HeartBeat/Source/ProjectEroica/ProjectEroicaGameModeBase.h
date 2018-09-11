// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameSparks/Private/GameSparksComponent.h"
#include "ProjectEroicaGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTEROICA_API AProjectEroicaGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AProjectEroicaGameModeBase();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class AAI_Kisa* EnemyAI;
	
	UFUNCTION()
		void activateAI();
	UFUNCTION()
		void setAISpeed(float speed);
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type reason);

private:
	UPROPERTY(VisibleAnywhere)
		UGameSparksComponent * gameSparks;

	UFUNCTION()
		void OnGameSparksAvailable(bool available);

};
