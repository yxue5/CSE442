// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimInstanceKisa.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "TP_SideScrollerCharacter.h"
#include "TimerManager.h" 

void UAnimInstanceKisa::endParticleEffect()
{
	UParticleSystemComponent* p = activeDustParticles.Pop();
	p->DestroyComponent();
}

UAnimInstanceKisa::UAnimInstanceKisa()
{
	DustParticle = CreateDefaultSubobject<UParticleSystem>(TEXT("DustParticle"));
}


void UAnimInstanceKisa::HandleState(FString newState) {
	if (newState != State) {
		if (newState == "Dash") {
			UGameplayStatics::PlaySound2D(this, DashSound);
			
			//creates a new dust particle and adds it to array of active particles
			activeDustParticles.Add(UGameplayStatics::SpawnEmitterAtLocation(this, DustParticle, owningChar->GetMesh()->GetSocketLocation("DustSocket")));
			FTimerHandle temp = FTimerHandle();
			GetWorld()->GetTimerManager().SetTimer(temp, this, &UAnimInstanceKisa::endParticleEffect, dustDuration, false);
		}
		else if (newState == "Land" && State == "Jump") {
			UGameplayStatics::PlaySound2D(this, LandSound);

			//creates a new dust particle and adds it to array of active particles
			activeDustParticles.Add(UGameplayStatics::SpawnEmitterAtLocation(this, DustParticle, owningChar->GetMesh()->GetSocketLocation("DustSocket")));
			FTimerHandle temp = FTimerHandle();
			GetWorld()->GetTimerManager().SetTimer(temp, this, &UAnimInstanceKisa::endParticleEffect, dustDuration, false);
		}
		else if (newState == "BaseCombo1") {
			UGameplayStatics::PlaySound2D(this, BaseCombo1);
		}
		else if (newState == "DashAttack") {
			UGameplayStatics::PlaySound2D(this, DashAttackSound);
		}
		else if (newState == "JumpAttack") {
			UGameplayStatics::PlaySound2D(this, JumpAttackSound);
		}
	}
	State = newState;
}