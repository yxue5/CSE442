// Fill out your copyright notice in the Description page of Project Settings.

#include "PassablePlatform.h"
#include "Components/StaticMeshComponent.h"
#include "TP_SideScroller/TP_SideScrollerCharacter.h"

// Sets default values
APassablePlatform::APassablePlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//MeshComp will only process collision with pawn components
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MeshComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	
	MeshComp->OnComponentHit.AddDynamic(this, &APassablePlatform::OnComponentHit);
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void APassablePlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APassablePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APassablePlatform::NotifyActorBeginOverlap(AActor * OtherActor)
{
	ATP_SideScrollerCharacter* validChar = Cast<ATP_SideScrollerCharacter>(OtherActor);
	if (validChar) {
		UE_LOG(LogTemp, Warning, TEXT("CharLocation:"), validChar->GetActorLocation().Z > MeshComp->GetComponentLocation().Z);
		UE_LOG(LogTemp, Warning, TEXT("PlatLocation:"), validChar->GetActorLocation().Z > MeshComp->GetComponentLocation().Z);
		//if actor is just above plat then make plat solid
		if (validChar->GetActorLocation().Z > MeshComp->GetComponentLocation().Z) {
			MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);	
			UE_LOG(LogTemp, Warning, TEXT("Case 2"));
			charsOnPlat.Add(validChar);
		}
		else if (validChar->GetActorLocation().Z < MeshComp->GetComponentLocation().Z //if actor is below plat and up is pressed
			&& validChar->ourPlayer->IsInputKeyDown(FKey("Up"))) {
			MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
			UE_LOG(LogTemp, Warning, TEXT("Case 3"));
		}
	}
}

void APassablePlatform::OnComponentHit(UPrimitiveComponent * HitComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{
	ATP_SideScrollerCharacter* validChar = Cast<ATP_SideScrollerCharacter>(OtherActor);
	//if actor is above plat and down is pressed let it pass through
	if (validChar)
	{
		if (validChar->GetActorLocation().Z > MeshComp->GetComponentLocation().Z
			&& validChar->ourPlayer->IsInputKeyDown(FKey("Down"))) {
			MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
			UE_LOG(LogTemp, Warning, TEXT("Case 1"));
		}
		else if (validChar->GetActorLocation().Z < MeshComp->GetComponentLocation().Z //if actor is below plat and up is pressed
			&& GetWorld()->GetRealTimeSeconds()- validChar->prevDown <.5) {
			MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
			UE_LOG(LogTemp, Warning, TEXT("Case 3"));
		}
	}
}

