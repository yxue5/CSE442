// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TP_SideScrollerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Weapon.h"
#include "TimerManager.h" 
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "PassablePlatform.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "AnimInstanceKisa.h"
#include "CharacterStats.h"
#include "AttackHandler.h"
#include "AnimInstanceKisa.h"
#include "UObject/ConstructorHelpers.h"

ATP_SideScrollerCharacter::ATP_SideScrollerCharacter()
{
	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true; // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->RelativeRotation = FRotator(0.f,180.f,0.f);

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

    //creates stats component
	Stats = CreateDefaultSubobject<UCharacterStats>(TEXT("Stats"));
	AddOwnedComponent(Stats);
	
	//creates attack component
	AttackHandle = CreateDefaultSubobject<UAttackHandler>(TEXT("AttackHandle"));

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 4000.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 0.f;
	GetCharacterMovement()->MaxWalkSpeed = 200.f;
	GetCharacterMovement()->MaxFlySpeed = 400.f;

	//Sets this capsule collision type to Pawn
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECR_Overlap);
	GetCapsuleComponent()->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
	//GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//GetMesh()->SetCollisionResponseToAllChannels(ECR_Overlap);
	//GetMesh()->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);

	PrimaryActorTick.bCanEverTick = true;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input
void ATP_SideScrollerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &ATP_SideScrollerCharacter::Attack);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATP_SideScrollerCharacter::MoveRight);
	ourPlayer = GetWorld()->GetFirstPlayerController();
}

void ATP_SideScrollerCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (GetWorld() != nullptr)
	{
		ourPlayer = GetWorld()->GetFirstPlayerController();
	}
	//spawn and attach weapon
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	if (WeaponClass != NULL)
	{
		CharWeapon = GetWorld()->SpawnActor<AWeapon>(WeaponClass, FVector(0), FRotator(0), SpawnParams);
		CharWeapon->wepOwner = this;
		CharWeapon->AttachToComponent(GetMesh(),FAttachmentTransformRules::SnapToTargetIncludingScale, FName("WeaponSocket"));
	}
	//Sets up connections to Animation Instance
	AnimInst = Cast<UAnimInstanceKisa>(GetMesh()->GetAnimInstance());
	AnimInst->owningChar = this;
	AnimInst->playOurAnimation();
}

void ATP_SideScrollerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float curr = GetWorld()->GetRealTimeSeconds();
	handleAnimation();

	checkIdle();
	if (ourPlayer->WasInputKeyJustPressed(FKey("Up"))) {
		handleUp(curr);
		UE_LOG(LogTemp, Warning, TEXT("Up pressed: %f"), curr);
	}
	else if (ourPlayer->WasInputKeyJustPressed(FKey("Down"))) {
		handleDown(curr);
		UE_LOG(LogTemp, Warning, TEXT("Down pressed: %f"), curr);
	}
}

AWeapon * ATP_SideScrollerCharacter::getWep()
{
	return CharWeapon;
}
void ATP_SideScrollerCharacter::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	//return to idle and end movement when you land on a plat
	if (State == Jumping || State == Knockup) {
		State = Land;
		FTimerDelegate endMovementDelegate;
		endMovementDelegate.BindUFunction(this, FName("stopMovement"));
		GetWorld()->GetTimerManager().SetTimerForNextTick(endMovementDelegate);
	}
}
FString ATP_SideScrollerCharacter::getState()
{
	return State;
}

void ATP_SideScrollerCharacter::EndStun()
{
	ourPlayer->GetPawn()->EnableInput(ourPlayer);
}

void ATP_SideScrollerCharacter::setState(FString state)
{
	State = state;
}

void ATP_SideScrollerCharacter::stopMovement()
{
	//if state was previously dashing but we are still holding down the keys then state is now running
	if (GetInputAxisValue(TEXT("MoveRight")) != 0 && State == Dashing) {
		GetCharacterMovement()->StopMovementKeepPathing();
		State = Running;
	}
	//else we are ending a dash
	else {
		GetCharacterMovement()->StopMovementImmediately();
		if (GetCharacterMovement()->IsFalling()) {
			State = Jumping;
		}
		else State = Idle;
	}
}

void ATP_SideScrollerCharacter::Dash(float Direction)
{
	LaunchCharacter(FVector(0.f, dashForce * Direction, 0.f), true, false);
	GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, dashDuration, false);
	State = Dashing;
	UE_LOG(LogTemp, Warning, TEXT("Dash "));
}

void ATP_SideScrollerCharacter::stopAttack() {
	GetCharacterMovement()->StopMovementImmediately();
	if (GetCharacterMovement()->IsFalling()) {
		State = Jumping;
	}
	else State = Idle;
	CharWeapon->CapsuleComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECR_Ignore);
}
//Determines which attack is triggered and applies it
void ATP_SideScrollerCharacter::Attack()
{
	//if (State == Idle && Stats->mp > 20) {
	//	CharWeapon->CapsuleComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECR_Overlap);
	//	State = BaseCombo1;
	//	GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, 1.0f, false);
	//	Stats->mp -= 20;
	//}
	//Zeroes out acceleration from previous movement
	GetCharacterMovement()->StopMovementImmediately();
	//clears this handle so our state doesnt get reset to idle by a previous stop movement timer after our move is triggered
	GetWorld()->GetTimerManager().ClearTimer(EndMovementHandle);
	//first determine what attack will trigger based on current state
	State = AttackHandle->DetermineAttack(State);
	//then allow weapon to start detecting collisions
	CharWeapon->CapsuleComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECR_Overlap);
	//determines what our attack does to the other player
	AttackHandle->initializeAttack(State);
	//Update the Animation we're playing
	handleAnimation();
	//Length of attack is equal to the length of the animation
	AttackHandle->attackDuration = AnimInst->ourAnimation->GetPlayLength();
	//Set attack state to end based on Attack Handle's determined Attack duration
	GetWorld()->GetTimerManager().SetTimer(AttackingHandle, this, &ATP_SideScrollerCharacter::stopAttack, AttackHandle->attackDuration, false);
}

//Handles what happens when character is hit by an attack
void ATP_SideScrollerCharacter::handleAttack(float dmg, FString stunType, float stunDuration, FVector force, float attackDirection)
{
	//position the character to the direction of the attack
	float knockupOffset = 1;
	if (attackDirection < 1) {
		SetActorRotation(FRotator(0, 0, 0));
		knockupOffset = -1;
	}
	else SetActorRotation(FRotator(0, 180, 0));
	UGameplayStatics::PlaySound2D(this, AnimInst->HitSound);
	UGameplayStatics::PlaySound2D(this, AnimInst->PainSound);
	Stats->hp -= dmg;
	State = stunType;

	if (State == Stunned) {
		GetWorld()->GetTimerManager().SetTimer(StunHandle, this, &ATP_SideScrollerCharacter::EndStun, stunDuration, false);
	}
	else if (State == Knockup) {
		force.Y = force.Y *knockupOffset;
		LaunchCharacter(force,true,true);
//UE_LOG(LogTemp, Warning, TEXT("knockup Y %f"), force.Y );
		//UE_LOG(LogTemp, Warning, TEXT("knockup Z %f"), force.Z);
	}
	//Disables input on other player until the stun from the attack is over
	DisableInput(ourPlayer);
	ReceiveAnyDamage(dmg, NULL, NULL, NULL);

}


void ATP_SideScrollerCharacter::checkIdle()
{
	if (GetWorld()->GetTimerManager().GetTimerRemaining(EndMovementHandle) <= 0.f && GetWorld()->GetTimerManager().GetTimerRemaining(StunHandle) <= 0.f &&
		GetWorld()->GetTimerManager().GetTimerRemaining(AttackingHandle) <= 0.f &&		
		GetCharacterMovement()->IsFalling() == false && GetInputAxisValue(TEXT("MoveRight"))==0) {
		UE_LOG(LogTemp, Warning, TEXT("Idle Triggered!"));
		State = Idle;
	}
		
}
void ATP_SideScrollerCharacter::Jump()
{
	//cancels dash
	GetWorld()->GetTimerManager().ClearTimer(EndMovementHandle);
	GetCharacterMovement()->StopActiveMovement();
	GetCharacterMovement()->StopMovementImmediately();
	//proceeds to jump
	Super::Jump();
	State = Jumping;
}

void ATP_SideScrollerCharacter::MoveRight(float Value)
{
	//if we can run
	if (State == Running) {
		State = Running;
		GetCharacterMovement()->MaxWalkSpeed = 400.0f;
	}
	//can move if you aren't mid move
	else if (GetWorld()->GetTimerManager().GetTimerRemaining(AttackingHandle) <=0.f &&GetWorld()->GetTimerManager().GetTimerRemaining(EndMovementHandle) <= 0.f && Value != 0)
	{
		float curr = GetWorld()->GetRealTimeSeconds();
		GetCharacterMovement()->MaxWalkSpeed = 200.0f;
		if (ourPlayer->WasInputKeyJustPressed(FKey("Left"))) {
			handleRight(curr);
			UE_LOG(LogTemp, Warning, TEXT("Left pressed: %f"), curr);
		}
		else if (ourPlayer->WasInputKeyJustPressed(FKey("Right"))) {
			handleLeft(curr);
			UE_LOG(LogTemp, Warning, TEXT("Right pressed: %f"), curr);
		}
		if (State == Idle) {
			State = Walking;
		}
	}
	// add movement in that direction
	AddMovementInput(FVector(0.f, -Value, 0.f));

}


void ATP_SideScrollerCharacter::handleRight(float timePressed)
{
	//if dash is possible
	if (timePressed - prevRight < dashThreshold)
	{
		if (timePressed - prevDash >= dashCoolDown) {
			LaunchCharacter(FVector(0.f, dashForce, 0.f),true,false);
			GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, dashDuration, false);
			prevDash = timePressed;
			State = Dashing;
			UE_LOG(LogTemp, Warning, TEXT("Dash "));
		}
		//if currently facing left then turn it right
		//else if (GetActorRotation().Yaw < 1) {
		//	GetWorld()->GetTimerManager().ClearTimer(EndMovementHandle);
		//	GetCharacterMovement()->StopMovementImmediately();
		//	LaunchCharacter(FVector(0.f, -dashForce, 0.f), true, false);
		//	GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, dashDuration, false);
		//	prevDash = timePressed;
		//	State = Dashing;
		//	UE_LOG(LogTemp, Warning, TEXT("Reverse Dash "));
		//}
	}
	prevRight = timePressed;
}

void ATP_SideScrollerCharacter::handleLeft(float timePressed)
{

		//if dash is possible
		if (timePressed - prevLeft < dashThreshold) {
			
			//if we can do a continous dash in one direction
			if (timePressed - prevDash >= dashCoolDown)
			{
				LaunchCharacter(FVector(0.f, -dashForce, 0.f), true, false);
				GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, dashDuration, false);
				prevDash = timePressed;
				State = Dashing;
			}
			//allows opp direction dashes without cooldown
			/*else if (GetActorRotation().Yaw > 1 ) {
				GetWorld()->GetTimerManager().ClearTimer(EndMovementHandle);
				GetCharacterMovement()->StopMovementImmediately();
				LaunchCharacter(FVector(0.f, -dashForce, 0.f), true, false);
				GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, dashDuration, false);
				prevDash = timePressed;
				State = Dashing;
			}*/
		}


		prevLeft = timePressed;
}

void ATP_SideScrollerCharacter::handleUp(float timePressed)
{
	prevUp = timePressed;
}

void ATP_SideScrollerCharacter::handleDown(float timePressed)
{
	prevDown = timePressed;
	if (currPlat != nullptr) {
		if (currPlat->BoxComp->IsOverlappingActor(this)) {
			currPlat->MeshComp->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
			State = "Jump";
			currPlat = nullptr;
		}
	}
}

void ATP_SideScrollerCharacter::handleAnimation()
{
	if (AnimInst != nullptr) {
		AnimInst->HandleState(State);
	}
	else UE_LOG(LogTemp, Warning, TEXT("Still No AnimBP!"));
}

