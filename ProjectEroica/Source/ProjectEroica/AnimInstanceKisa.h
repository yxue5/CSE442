// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceKisa.generated.h"

class ATP_SideScrollerCharacter;
UCLASS()
class PROJECTEROICA_API UAnimInstanceKisa : public UAnimInstance
{
	GENERATED_BODY()
public:
	float dustDuration = 0.5f;
	void endParticleEffect();
	UAnimInstanceKisa();
	UPROPERTY()
	//stores activ dust particles
	TArray<UParticleSystemComponent*> activeDustParticles;
	UPROPERTY()
		ATP_SideScrollerCharacter* owningChar;
	//Handles aesthetics for each state
	UFUNCTION()
		void HandleState(FString newState);
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FString State = "Idle";	

	//Particle Systems
	UPROPERTY(EditDefaultsOnly, Category = "Particles")
		UParticleSystem* DustParticle;
	
	UAnimationAsset* BaseCombo1;
	//Sounds
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* DashSound;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* LandSound;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* DashAttackSound;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* HitSound;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* JumpAttackSound;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* Combo1;
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* PainSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimSequence* ourAnimation = Cast<UAnimSequence>(StaticLoadObject(UAnimSequence::StaticClass(), NULL, TEXT("AnimSequence'/Game/Art_Assets/Animations/Idle.Idle'")));

	//plays the actual animation
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
		void playOurAnimation();
};
