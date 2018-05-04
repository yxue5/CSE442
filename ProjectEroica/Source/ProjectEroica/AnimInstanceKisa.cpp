// Fill out your copyright notice in the Description page of Project Settings.

#include "AnimInstanceKisa.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "TP_SideScrollerCharacter.h"
#include "TimerManager.h" 
#include "Runtime/Core/Public/Containers/UnrealString.h"

UAnimInstanceKisa::UAnimInstanceKisa()
{
	DustParticle = CreateDefaultSubobject<UParticleSystem>(TEXT("DustParticle"));
}

void UAnimInstanceKisa::endParticleEffect()
{
	UParticleSystemComponent* p = activeDustParticles[0];
	p->DestroyComponent();
	activeDustParticles.RemoveAt(0);
}


void UAnimInstanceKisa::HandleState(FString newState) {
	if (newState != State) {
		if (newState == "Dash" || newState == "Rocketing") {
			UGameplayStatics::PlaySound2D(this, DashSound);
			
			//creates a new dust particle and adds it to array of active particles
			activeDustParticles.Add(UGameplayStatics::SpawnEmitterAtLocation(this, DustParticle, owningChar->GetMesh()->GetSocketLocation("DustSocket")));
			FTimerHandle* temp = new FTimerHandle();
			GetWorld()->GetTimerManager().SetTimer(*temp, this, &UAnimInstanceKisa::endParticleEffect, dustDuration, false);
		}
		else if (newState == "Flashing") {
			//creates a new dust particle and adds it to array of active particles
			//activeDustParticles.Add(UGameplayStatics::SpawnEmitterAtLocation(this, DustParticle, owningChar->GetMesh()->GetSocketLocation("DustSocket")));
			//FTimerHandle* temp = new FTimerHandle();
			//GetWorld()->GetTimerManager().SetTimer(*temp, this, &UAnimInstanceKisa::endParticleEffect, dustDuration, false);
		}
		else if (newState == "Land") {
			UGameplayStatics::PlaySound2D(this, LandSound);

			//creates a new dust particle and adds it to array of active particles
			activeDustParticles.Add(UGameplayStatics::SpawnEmitterAtLocation(this, DustParticle, owningChar->GetMesh()->GetSocketLocation("DustSocket")));
			FTimerHandle* temp = new FTimerHandle();
			GetWorld()->GetTimerManager().SetTimer(*temp, this, &UAnimInstanceKisa::endParticleEffect, dustDuration, false);
		}
		else if (newState.StartsWith("Combo")) {
			UGameplayStatics::PlaySound2D(this, Combo1);
		}
		else if (newState == "DashAttack") {
			UGameplayStatics::PlaySound2D(this, DashAttackSound);
			isLooping = false;

			//creates a new dust particle and adds it to array of active particles
			activeDustParticles.Add(UGameplayStatics::SpawnEmitterAtLocation(this, DustParticle, owningChar->GetMesh()->GetSocketLocation("DustSocket")));
			FTimerHandle* temp = new FTimerHandle();
			GetWorld()->GetTimerManager().SetTimer(*temp, this, &UAnimInstanceKisa::endParticleEffect, dustDuration, false);
		}
		else if (newState == "SkillOne") {
			UGameplayStatics::PlaySound2D(this, DashAttackSound);
			isLooping = false;
		}
		else if (newState == "JumpAttack") {
			UGameplayStatics::PlaySound2D(this, JumpAttackSound);
			isLooping = false;
		}
		else if (newState == "Death") {
			UGameplayStatics::PlaySound2D(this, DeathSound);
		}
		FString path = "AnimSequence'/Game/Art_Assets/Animations/" + newState + "." + newState + "'/";
		ourAnimation = Cast<UAnimSequence>(StaticLoadObject(UAnimSequence::StaticClass(), NULL, *path));
		State = newState;
		playOurAnimation();
	}
}

