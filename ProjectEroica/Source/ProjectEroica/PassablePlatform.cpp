// Fill out your copyright notice in the Description page of Project Settings.

#include "PassablePlatform.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "TP_SideScrollerCharacter.h"

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
	RootComponent = MeshComp;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	BoxComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	BoxComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	BoxComp->SetupAttachment(MeshComp);

	BoxComp->OnComponentEndOverlap.AddDynamic(this, &APassablePlatform::OnBoxEndOverlap);
	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &APassablePlatform::OnBoxBeginOverlap);
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
	UE_LOG(LogTemp, Warning, TEXT("Plat Collision Type"), BoxComp->GetCollisionResponseToChannel(ECC_Pawn));
}


void APassablePlatform::OnBoxEndOverlap(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){
	ATP_SideScrollerCharacter* validChar = Cast<ATP_SideScrollerCharacter>(OtherActor);
	if (validChar) {
		MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
		UE_LOG(LogTemp, Warning, TEXT("Case LeavePlat"));
		validChar->currPlat = nullptr;
	}
}

void APassablePlatform::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlap"));
	//allows char to leave plat
	ATP_SideScrollerCharacter* validChar = Cast<ATP_SideScrollerCharacter>(OtherActor);
	if (validChar) {
		//if actor is just above plat then make plat solid
		if (validChar->GetActorLocation().Z > MeshComp->GetComponentLocation().Z) {
			MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
			UE_LOG(LogTemp, Warning, TEXT("Case Land"));
			validChar->currPlat = this;
		}
		if (validChar->GetActorLocation().Z < MeshComp->GetComponentLocation().Z //if actor is below plat and up was just pressed
			&& GetWorld()->GetRealTimeSeconds() - validChar->prevUp <.5) {
			MeshComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
			UE_LOG(LogTemp, Warning, TEXT("Case Ascend"));
		}
	}

}

