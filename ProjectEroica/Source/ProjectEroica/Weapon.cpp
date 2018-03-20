// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "TP_SideScrollerCharacter.h"
#include "AttackHandler.h"
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
<<<<<<< HEAD
=======
	CapsuleComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECR_Overlap);
>>>>>>> DevelopNew
	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnWeaponBeginOverlap);
	CapsuleComponent->SetupAttachment(MeshComp);
}

<<<<<<< HEAD
void AWeapon::OnWeaponBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, 
	UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
=======
void AWeapon::OnWeaponBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
>>>>>>> DevelopNew
{
	UE_LOG(LogTemp, Warning, TEXT("Weapon overlapped actor!"));
	ATP_SideScrollerCharacter* validChar = Cast<ATP_SideScrollerCharacter>(OtherActor);
	if (validChar && validChar!= wepOwner) {
		validChar->handleAttack(wepOwner->AttackHandle->dmg, wepOwner->AttackHandle->hitType, wepOwner->AttackHandle->stunDuration);
	}
}

