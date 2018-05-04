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
#include "ProjectEroicaGameModeBase.h"
#include "UObject/ConstructorHelpers.h"

ATP_SideScrollerCharacter::ATP_SideScrollerCharacter()
{
	State = Idle;
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
	//CameraBoom->RelativeRotation = FRotator(0.f,180.f,0.f);

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
	GetCharacterMovement()->RotationRate = FRotator(0.0f,180.0f, 0.0f); // ...at this rotation rate
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

void ATP_SideScrollerCharacter::OnCharacterBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	ATP_SideScrollerCharacter* validChar = Cast<ATP_SideScrollerCharacter>(OtherActor);
	if (validChar && FMath::Abs(validChar->GetActorLocation().Z - GetActorLocation().Z) < 100) {
			GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
	}
	//UE_LOG(LogTemp, Warning, TEXT("Y diff: %f"), FMath::Abs(validChar->GetActorLocation().Y - GetActorLocation().Y));
}

void ATP_SideScrollerCharacter::Die()
{
	//CharWeapon->Destroy();
	//Destroy();
	endGame();
}

//////////////////////////////////////////////////////////////////////////
// Input
void ATP_SideScrollerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ATP_SideScrollerCharacter::HandleUp);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &ATP_SideScrollerCharacter::Attack);
	PlayerInputComponent->BindAction("Skill1", IE_Pressed, this, &ATP_SideScrollerCharacter::Skill1);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATP_SideScrollerCharacter::MoveRight);
	PlayerInputComponent->BindAction("AI", IE_Pressed, this, &ATP_SideScrollerCharacter::ActivateAI);
	PlayerInputComponent->BindAction("AILevel1", IE_Pressed, this, &ATP_SideScrollerCharacter::AILevel1);
	PlayerInputComponent->BindAction("AILevel2", IE_Pressed, this, &ATP_SideScrollerCharacter::AILevel2);
	ourPlayer = GetWorld()->GetFirstPlayerController();
}

void ATP_SideScrollerCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (GetWorld() != nullptr)
	{
		ourPlayer = GetWorld()->GetFirstPlayerController();
	}
	//sets proper x value
	properX = GetActorLocation().X;
	//binds collision
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ATP_SideScrollerCharacter::OnCharacterBeginOverlap);
	//spawn and attach weapon
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	if (WeaponClass != NULL)
	{
		CharWeapon = GetWorld()->SpawnActor<AWeapon>(WeaponClass, FVector(0), FRotator(0), SpawnParams);
		CharWeapon->wepOwner = this;
		CharWeapon->AttachToComponent(GetMesh(),FAttachmentTransformRules::SnapToTargetIncludingScale, FName("WeaponSocket"));
	}
	State = Spawn;

	//Sets up connections to Animation Instance
	AnimInst = Cast<UAnimInstanceKisa>(GetMesh()->GetAnimInstance());
	AnimInst->owningChar = this;

	handleAnimation();
	DisableInput(ourPlayer);
	AnimInst->playOurAnimation();
	GetWorld()->GetTimerManager().SetTimer(StunHandle, this, &ATP_SideScrollerCharacter::EndStun, AnimInst->ourAnimation->GetPlayLength(), false);
}

void ATP_SideScrollerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float curr = GetWorld()->GetRealTimeSeconds();
	handleAnimation();
	checkIdle();
	//UE_LOG(LogTemp, Warning, TEXT("Left Pressed: %s"), (leftPressed ? TEXT("True") : TEXT("False")));
	//UE_LOG(LogTemp, Warning, TEXT("Up pressed: %s"), (upPressed ? TEXT("True") : TEXT("False")));
	if (ourPlayer->WasInputKeyJustReleased(FKey("Left")))
		leftPressed = false;
	if (ourPlayer->WasInputKeyJustReleased(FKey("Right")))
		rightPressed = false;
	if (ourPlayer->WasInputKeyJustReleased(FKey("Up")))
		upPressed = false;
    if (ourPlayer->WasInputKeyJustPressed(FKey("Down"))) {
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
	ATP_SideScrollerCharacter* validChar = Cast<ATP_SideScrollerCharacter>(Other);
	//UStaticMesh* floor = Cast<UStaticMesh>(Other);
	//let this character overlap the other character if its high enough
	if (validChar && GetActorLocation().Z - validChar->GetActorLocation().Z > 100) {
		GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	}
	//else if we're landing on the floor
	else {
		canRocket = true;
		GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
		if (State == Jumping || State == Knockup) {
			State = Land;
			FTimerDelegate endMovementDelegate;
			endMovementDelegate.BindUFunction(this, FName("stopMovement"));
			GetWorld()->GetTimerManager().SetTimerForNextTick(endMovementDelegate);
		}
	}
}
FString ATP_SideScrollerCharacter::getState()
{
	return State;
}

void ATP_SideScrollerCharacter::EndStun()
{
	ourPlayer->GetPawn()->EnableInput(ourPlayer);
	State = Idle;
}

void ATP_SideScrollerCharacter::setState(FString state)
{
	State = state;
}

void ATP_SideScrollerCharacter::stopMovement()
{
	GetCharacterMovement()->StopMovementImmediately();
	//if state was previously dashing but we are still holding down the keys then state is now running
	if (GetInputAxisValue(TEXT("MoveRight")) != 0 && (State == Dashing || State == Rocketing || State == Flashing)) {
		GetCharacterMovement()->StopMovementKeepPathing();
		GetCharacterMovement()->MaxWalkSpeed = 400.0f;
		State = Running;
	}
}

void ATP_SideScrollerCharacter::stopAttack() {
	AnimInst->isLooping = true;
	//GetCharacterMovement()->StopMovementImmediately();
	if (GetCharacterMovement()->IsFalling()) {
		State = Jumping;
	}
	else State = Idle;
	CharWeapon->CapsuleComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECR_Ignore);
}
//Determines which attack is triggered and applies it
void ATP_SideScrollerCharacter::Attack()
{
	//first determine what attack will trigger based on current state
	FString newState = AttackHandle->DetermineAttack(State, GetWorld()->GetRealTimeSeconds());
	//if it's possible to trigger a new attack
	if (newState != State) {
		//Zeroes out acceleration from previous movement
		//GetCharacterMovement()->StopMovementImmediately();		
		float origTime = GetWorld()->GetTimerManager().GetTimerRemaining(EndMovementHandle);
		if (newState == DashAttacking) {
			if (prevLeft > prevRight) Dash(1);
			else Dash(-1);
		}
		//clears this handle so our state doesnt get reset to idle by a previous stop movement timer after our move is triggered
		//GetWorld()->GetTimerManager().ClearTimer(EndMovementHandle);
		GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, AttackHandle->attackDuration, false);
		State = newState;
		//then allow weapon to start detecting collisions
		CharWeapon->CapsuleComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECR_Overlap);
		//Update the Animation we're playing
		handleAnimation();
		//Length of attack is equal to the length of the animation
		AttackHandle->attackDuration = AnimInst->ourAnimation->GetPlayLength();
		//determines what our attack does to the other player
		AttackHandle->initializeAttack(State);
		//Set attack state to end based on Attack Handle's determined Attack duration
		GetWorld()->GetTimerManager().SetTimer(AttackingHandle, this, &ATP_SideScrollerCharacter::stopAttack, AttackHandle->attackDuration, false);
	}
}

//Handles what happens when character is hit by an attack
void ATP_SideScrollerCharacter::handleAttack(float dmg, FString stunType, float stunDuration, FVector force, float attackDirection)
{
	//position the character to the direction of the attack
	float knockupDirection = 1;
	if (attackDirection < 1) {
		SetActorRotation(FRotator(0, 90, 0));
		knockupDirection = -1;
	}
	else SetActorRotation(FRotator(0, 270, 0));
	UGameplayStatics::PlaySound2D(this, AnimInst->HitSound);
	UGameplayStatics::PlaySound2D(this, AnimInst->PainSound);
	Stats->hp -= dmg;
	State = stunType;
	//if we're dead then disable input
	if (Stats->hp <= 0) {
		State = Death;
		GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
		PrimaryActorTick.bCanEverTick = false;
		DisableInput(ourPlayer);
		UE_LOG(LogTemp, Warning, TEXT("Dead!"));
		handleAnimation();
		GetWorld()->GetTimerManager().SetTimer(StunHandle, this, &ATP_SideScrollerCharacter::Die, AnimInst->ourAnimation->GetPlayLength(), false);
	}
	else if (State == Stunned) {
		GetWorld()->GetTimerManager().SetTimer(StunHandle, this, &ATP_SideScrollerCharacter::EndStun, stunDuration, false);
	}
	else if (State == Knockup) {
		force.Y = force.Y *knockupDirection;
		LaunchCharacter(force,true,true);
	}
	//Disables input on other player until the stun from the attack is over
	DisableInput(ourPlayer);
	ReceiveAnyDamage(dmg, NULL, NULL, NULL);

}


void ATP_SideScrollerCharacter::checkIdle()
{
	if (GetWorld()->GetTimerManager().GetTimerRemaining(EndMovementHandle) <= 0.f && GetWorld()->GetTimerManager().GetTimerRemaining(StunHandle) <= 0.f &&
		GetWorld()->GetTimerManager().GetTimerRemaining(AttackingHandle) <= 0.f &&
		GetInputAxisValue(TEXT("MoveRight"))==0 || State == Land) {
		if(GetCharacterMovement()->IsFalling() == false)
			State = Idle;
		//if not knockup, then in air = jumping
		else if(State != Knockup) State = Jumping;
	}
		
}

void ATP_SideScrollerCharacter::Skill1()
{
	if (Stats->mp >= 25) {
		GetWorldTimerManager().ClearTimer(EndMovementHandle);
		GetWorldTimerManager().ClearTimer(AttackingHandle);
		GetCharacterMovement()->StopMovementImmediately();
		State = SkillOne;
		Stats->mp -= 25;
		//then allow weapon to start detecting collisions
		CharWeapon->CapsuleComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECR_Overlap);
		//determines what our attack does to the other player
		AttackHandle->initializeAttack(State);
		//Update the Animation we're playing
		handleAnimation();
		//Length of attack is equal to the length of the animation
		AttackHandle->attackDuration = AnimInst->ourAnimation->GetPlayLength();
		//Set attack state to end based on Attack Handle's determined Attack duration
		GetWorldTimerManager().SetTimer(AttackingHandle, this, &ATP_SideScrollerCharacter::stopAttack, AnimInst->ourAnimation->GetPlayLength(), false);
	}
}
void ATP_SideScrollerCharacter::HandleUp()
{
	upPressed = true;
	float timePressed = GetWorld()->GetRealTimeSeconds();
	UE_LOG(LogTemp, Warning, TEXT("Up pressed: %f"), timePressed);
	prevUp = timePressed;
	//checks for rocket
	if (timePressed - prevRight < simulThreshold && canRocket == true) {
		float timeTaken = GetWorld()->GetRealTimeSeconds() - prevRight2;
		if (timeTaken < rocketThreshold) {
			Rocket(-1, timeTaken);
			return;
		}
	}
	else if (timePressed - prevLeft < simulThreshold) {
		float timeTaken = GetWorld()->GetRealTimeSeconds() - prevLeft2;
		if (timeTaken < rocketThreshold && canRocket == true) {
			Rocket(1, timeTaken);
			return;
		}
	}

	else if (!GetMovementComponent()->IsFalling()) {
		//otherwis we just jump
		Jump();
	}
}

void ATP_SideScrollerCharacter::Jump() {
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
	if (GetWorld()->GetTimerManager().GetTimerRemaining(EndMovementHandle) <= 0.f && GetWorld()->GetTimerManager().GetTimerRemaining(AttackingHandle) <= 0.f && Value != 0) {
		//if we can run
		if (State == Running) {
			State = Running;
		}
		//can move if you aren't mid move
		else
		{
			float curr = GetWorld()->GetRealTimeSeconds();
			GetCharacterMovement()->MaxWalkSpeed = 200.0f;
			if (ourPlayer->WasInputKeyJustPressed(FKey("Left"))) {
				UE_LOG(LogTemp, Warning, TEXT("Left pressed: %f"), curr);
				handleLeft(curr);
			}
			else if (ourPlayer->WasInputKeyJustPressed(FKey("Right"))) {
				UE_LOG(LogTemp, Warning, TEXT("Right pressed: %f"), curr);
				handleRight(curr);
			}
			if (State == Idle) {
				State = Walking;
			}
		}
		if(Value>0)
		SetActorRotation(FRotator(0, 270, 0));
		else SetActorRotation(FRotator(0, 90, 0));
		// add movement in that direction
		AddMovementInput(FVector(0.f, -Value, 0.f));
	}
}


void ATP_SideScrollerCharacter::handleRight(float timePressed)
{
	rightPressed = true;
	//checks rocket
	if (timePressed - prevUp < simulThreshold && canRocket == true) {
		float timeTaken = timePressed - prevRight;
		if (timeTaken < rocketThreshold) {
			Rocket(-1, timeTaken);
		}
	}
	//if dash is possible
	else if (timePressed - prevRight < dashThreshold && canRocket == true)
	{
		if (timePressed - prevDash >= dashCoolDown) {
			Dash(-1);
		}
	}
	prevRight2 = prevRight;
	prevRight = timePressed;
}

void ATP_SideScrollerCharacter::handleLeft(float timePressed)
{
	leftPressed = true;
	//checks rocket
	if (timePressed - prevUp < simulThreshold && canRocket == true) {
		float timeTaken = timePressed - prevLeft;
		if (timeTaken < rocketThreshold) {
			Rocket(1, timeTaken);
		}
	}
	//if dash is possible
	else if (timePressed - prevLeft < dashThreshold) {
			
		//if we can do a continous dash in one direction
		if (timePressed - prevDash >= dashCoolDown)
		{
			Dash(1);
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Time Taken: %f"), timePressed - prevUp);
	UE_LOG(LogTemp, Warning, TEXT("isFalling: %s"), (GetCharacterMovement()->IsFalling()? TEXT("True") : TEXT("False")));
	prevLeft2 = prevLeft;
	prevLeft = timePressed;
}


void ATP_SideScrollerCharacter::handleDown(float timePressed)
{
	prevDown = timePressed;
	if (State == Rocketing) {
		if (prevLeft > prevRight) {
			Flash(1);
		}
		else {
			Flash(-1);
		}

	}
	if (currPlat != nullptr) {
		if (currPlat->BoxComp->IsOverlappingActor(this)) {
			currPlat->MeshComp->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
			if (GetWorld()->GetTimerManager().GetTimerRemaining(EndMovementHandle) <= 0) {
				State = "Jump";
			}
			currPlat = nullptr;
		}
	}
}

void ATP_SideScrollerCharacter::Flash(float direction) {
	LaunchCharacter(FVector(0.f, 0.f, -rocketUpForce), false, true);
	State = Flashing;
	UE_LOG(LogTemp, Warning, TEXT("Flash "));
}
void ATP_SideScrollerCharacter::Dash(float Direction)
{
	LaunchCharacter(FVector(0.f, dashForce * Direction, 0.f), true, false);
	GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, dashDuration, false);
	State = Dashing;
	UE_LOG(LogTemp, Warning, TEXT("Dash "));
}

void ATP_SideScrollerCharacter::Rocket(float Direction, float Time)
{
	GetCharacterMovement()->StopMovementImmediately();
	GetWorld()->GetTimerManager().ClearTimer(EndMovementHandle);
	LaunchCharacter(FVector(0.f, rocketForce * Direction, rocketUpForce), true, false);
	GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, rocketDuration, false);
	State = Rocketing;
	canRocket = false;
	UE_LOG(LogTemp, Warning, TEXT("Rocket!"));
}

void ATP_SideScrollerCharacter::handleAnimation()
{
	if (AnimInst != nullptr) {
		AnimInst->HandleState(State);
	}
	else UE_LOG(LogTemp, Warning, TEXT("Still No AnimBP!"));
}

//void  ATP_SideScrollerCharacter::clearStacks() {
//		LeftStack.Empty();
//		RightStack.Empty();
//		UpStack.Empty();
//		DownStack.Empty();
//}


void ATP_SideScrollerCharacter::ActivateAI()
{
	GetWorld()->GetAuthGameMode<AProjectEroicaGameModeBase>()->activateAI();
}

void ATP_SideScrollerCharacter::AILevel1()
{
	GetWorld()->GetAuthGameMode<AProjectEroicaGameModeBase>()->setAISpeed(1.0f);
}

void ATP_SideScrollerCharacter::AILevel2()
{
	GetWorld()->GetAuthGameMode<AProjectEroicaGameModeBase>()->setAISpeed(0.6f);
}

