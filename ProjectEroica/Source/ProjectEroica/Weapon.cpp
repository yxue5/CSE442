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
	// Get weapon mesh combo from UStaticMeshComponent 
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WepMesh"));
	// Set collision enabled for mesh
	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	// Set collision response for mesh
	MeshComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	RootComponent = MeshComp;
	
	// Get Capsule component from UCapsuleComponent 
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	// Set collision enabled for capsule component
	CapsuleComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	// Set collision response for capsule component 
	CapsuleComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	// Get collsion weapon for capsule component
	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnWeaponBeginOverlap);
	// Set attackingment for capsule component 
	CapsuleComponent->SetupAttachment(MeshComp);
}


void AWeapon::OnWeaponBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, 
	UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// Create warnings for weapon overlapped
	UE_LOG(LogTemp, Warning, TEXT("Weapon overlapped actor!"));
	ATP_SideScrollerCharacter* validChar = Cast<ATP_SideScrollerCharacter>(OtherActor);
	if (validChar && validChar!= wepOwner) {
		
		validChar->handleAttack(wepOwner->AttackHandle->dmg, wepOwner->AttackHandle->hitType, wepOwner->AttackHandle->stunDuration);
	}
}

