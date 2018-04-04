// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "TP_SideScrollerCharacter.h"
#include "AttackHandler.h"
#include "AI_Kisa.h"
//#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Sets default values
AWeapon::AWeapon()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WepMesh"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MeshComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	RootComponent = MeshComp;
	
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	CapsuleComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CapsuleComponent->SetCollisionResponseToAllChannels(ECR_Ignore);

	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnWeaponBeginOverlap);
	CapsuleComponent->SetupAttachment(MeshComp);
}


void AWeapon::OnWeaponBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, 
	UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//dont preceed with this function if we've already hit with this attack
	if (wepOwner->AttackHandle->hitCounter == 1) {
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Weapon overlapped actor!"));
	ATP_SideScrollerCharacter* validChar = Cast<ATP_SideScrollerCharacter>(OtherActor);
	AAI_Kisa* validEnemy = Cast<AAI_Kisa>(OtherActor);
	if (validChar && validChar!= wepOwner) {
		UE_LOG(LogTemp, Warning, TEXT("Weapon overlapped player!"));
		validChar->handleAttack(wepOwner->AttackHandle->dmg, wepOwner->AttackHandle->hitType, wepOwner->AttackHandle->stunDuration,wepOwner->AttackHandle->KnockupForce,wepOwner->GetActorRotation().Yaw);
	}
	
	//or if we hit enemy
	else if (OtherActor->GetClass()->IsChildOf(ATP_SideScrollerCharacter::StaticClass())) {
		if (validEnemy && validEnemy != wepOwner) {
			UE_LOG(LogTemp, Warning, TEXT("Weapon overlapped enemy!"));
			validEnemy->Super::handleAttack(wepOwner->AttackHandle->dmg, wepOwner->AttackHandle->hitType, wepOwner->AttackHandle->stunDuration, wepOwner->AttackHandle->KnockupForce, wepOwner->GetActorRotation().Yaw);
		}	
	}
}

