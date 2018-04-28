// Fill out your copyright notice in the Description page of Project Settings.

#include "AI_Kisa.h"
#include "Perception/PawnSensingComponent.h"
#include "TimerManager.h" 

void AAI_Kisa::OnPawnSeen(APawn * SeenPawn)
{
	if (SeenPawn != nullptr) {
		justSawPawn = true;
		SeenPawnLocation = SeenPawn->GetActorLocation();
		lastSeenPawn = GetWorld()->GetRealTimeSeconds();
	}
	else UE_LOG(LogTemp, Warning, TEXT("Pawn Seen!"));
}

AAI_Kisa::AAI_Kisa()
{
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComp");
}

void AAI_Kisa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (FMath::Abs(GetActorRotation().Yaw - 180) < 1) {
		SetActorRotation(FRotator(0, -90, 0));
	}
	else if (FMath::Abs(GetActorRotation().Yaw - 0) < 1) {
		SetActorRotation(FRotator(0, 90, 0));
	}
}

void AAI_Kisa::BeginPlay()
{
	Super::BeginPlay();
	PawnSensingComp->OnSeePawn.AddDynamic(this, &AAI_Kisa::OnPawnSeen);
	DisableInput(Super::ourPlayer);
	dashCoolDown = 1.0f;
	dashForce = 1000;
	//MoveRight(1);
	GetWorld()->GetTimerManager().SetTimer(ScoutHandle, this, &AAI_Kisa::Scout, .6f, false);
}

void AAI_Kisa::Scout()
{
	//if we are in AI Mode
	if (isAIMode == true) {
		float currRotation = GetActorRotation().Yaw;
		float currTime = GetWorld()->GetRealTimeSeconds();
		//if we haven't seen the pawn last time
		if (currTime - lastSeenPawn > .6) {
			justSawPawn = false;
			SetActorRotation(FRotator(0, currRotation - 180, 0));
			GetWorld()->GetTimerManager().ClearTimer(EndMovementHandle);
		}
		//float currRotation = GetActorRotation().Yaw;
		//move if you see pawn and aren't currently attacking
		if (justSawPawn == true) {
			//if we're within striking distance
			if (FMath::Abs(SeenPawnLocation.Y - GetActorLocation().Y) < 100) {
				currTime = GetWorld()->GetRealTimeSeconds();
				if (currTime - prevAttack > AttackCoolDown) {
					UE_LOG(LogTemp, Warning, TEXT("UPDATE!"));
					State = Idle;
					Attack();
					prevAttack = currTime;
				}
			}
			// else we have to move closer
			else {
				//slow down dash if we're close to Pawn
				if (FMath::Abs(SeenPawnLocation.Y - GetActorLocation().Y) < 300) {
					dashForce = 750;
				}
				else dashForce = 1500;
				//decide which way to move
				if (currRotation > 1) {
					if (currTime - AIprevDash > dashCoolDown) {
						Dash(1);
					}
					else MoveRight(-1);
				}
				else {
					if (currTime - AIprevDash > dashCoolDown) {
						Dash(-1);
					}
					MoveRight(1);
				}
			}
		}

	}
	GetWorld()->GetTimerManager().SetTimer(ScoutHandle, this, &AAI_Kisa::Scout, 0.3f, false);
}
