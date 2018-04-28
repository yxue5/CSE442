// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "AnimInstanceKisa.generated.h"

class ATP_SideScrollerCharacter;
UCLASS()
class PROJECTEROICA_API UAnimInstanceKisa : public UAnimInstance
{
	GENERATED_BODY()
public:
	float dustDuration = 0.3f;
	void endParticleEffect();
	UAnimInstanceKisa();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animation")
		bool isLooping = true;
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
		USoundBase* DashSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("SoundWave'/Game/Sounds/Kisa/Dash.Dash'")));
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* LandSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("SoundWave'/Game/Sounds/General/Land.Land'")));
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* DashAttackSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("SoundWave'/Game/Sounds/Kisa/Uppercut.Uppercut'")));
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* HitSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("SoundWave'/Game/Sounds/General/ImpactMelee.ImpactMelee'")));
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* JumpAttackSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("SoundWave'/Game/Sounds/Kisa/JumpAttack.JumpAttack'")));
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* Combo1 = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("SoundWave'/Game/Sounds/Kisa/1BarSlash.1BarSlash'")));
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* PainSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("SoundWave'/Game/Sounds/General/ImpactMelee.ImpactMelee'")));
	UPROPERTY(EditDefaultsOnly, Category = "Sounds")
		USoundBase* DeathSound = Cast<USoundBase>(StaticLoadObject(USoundBase::StaticClass(), NULL, TEXT("SoundWave'/Game/Sounds/Kisa/Dash.Dash'")));

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animations")
	UAnimSequence* ourAnimation = Cast<UAnimSequence>(StaticLoadObject(UAnimSequence::StaticClass(), NULL, TEXT("AnimSequence'/Game/Art_Assets/Animations/Idle.Idle'/")));

	//plays the actual animation
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable)
		void playOurAnimation();
};
