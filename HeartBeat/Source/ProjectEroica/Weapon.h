// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class USkeletalMeshComponent;
UCLASS()
class PROJECTEROICA_API AWeapon : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AWeapon();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		 class UCapsuleComponent* CapsuleComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* MeshComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class ATP_SideScrollerCharacter* wepOwner = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Combo")
		int comboCount;
	FTimerHandle ComboHandle;
	int comboThreshold = 1.0f;
	UFUNCTION()
		virtual void OnWeaponBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void resetCombo();

};
