// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TP_SideScrollerCharacter.h"
#include "Camera/CameraComponent.h"
#include "TimerManager.h" 
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "PassablePlatform.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

ATP_SideScrollerCharacter::ATP_SideScrollerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	// Set size for collision capsule
	//GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

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

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 4000.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 0.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;


	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void ATP_SideScrollerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ourPlayer = GetWorld()->GetFirstPlayerController();
	float curr = GetWorld()->GetRealTimeSeconds();
	if (ourPlayer->WasInputKeyJustPressed(FKey("Left"))) {
		handleRight(curr);
	//	UE_LOG(LogTemp, Warning, TEXT("Left pressed: %f"), curr);
	}
	else if (ourPlayer->WasInputKeyJustPressed(FKey("Right"))) {
		handleLeft(curr);
	//	UE_LOG(LogTemp, Warning, TEXT("Right pressed: %f"), curr);
	}
	else if (ourPlayer->WasInputKeyJustPressed(FKey("Up"))) {
		handleUp(curr);
		UE_LOG(LogTemp, Warning, TEXT("Up pressed: %f"), curr);
	}
	else if (ourPlayer->WasInputKeyJustPressed(FKey("Down"))) {
		handleDown(curr);
		UE_LOG(LogTemp, Warning, TEXT("Down pressed: %f"), curr);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ATP_SideScrollerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	if (GetWorld() != nullptr)
	{
		ourPlayer = GetWorld()->GetFirstPlayerController();
	}
	else UE_LOG(LogTemp, Warning, TEXT("World  Null!!!"));
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATP_SideScrollerCharacter::MoveRight);

}

void ATP_SideScrollerCharacter::Jump()
{
	GetWorld()->GetTimerManager().ClearTimer(EndMovementHandle);
	GetCharacterMovement()->StopActiveMovement();
	GetCharacterMovement()->StopMovementImmediately();
	Super::Jump();
	State = Jumping;
}

void ATP_SideScrollerCharacter::stopMovement()
{
	GetCharacterMovement()->StopMovementImmediately();
}

bool ATP_SideScrollerCharacter::moveIsValid(FString desiredMove)
{
	return false;
}

FString ATP_SideScrollerCharacter::getState()
{
	return State;
}


void ATP_SideScrollerCharacter::MoveRight(float Value)
{
	if (Value > 0)//right dash valid
	{
	}
	// add movement in that direction
	AddMovementInput(FVector(0.f,-Value,0.f));
}

void ATP_SideScrollerCharacter::handleRight(float timePressed)
{
	if (timePressed - prevDash >= dashCoolDown)
	{
		if (timePressed - prevRight < dashThreshold) {
			LaunchCharacter(FVector(0.f, dashForce, 0.f),true,false);
			GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, dashDuration, false);
			prevDash = timePressed;
			State = Dashing;
		}
		prevRight = timePressed;
	}
}

void ATP_SideScrollerCharacter::handleLeft(float timePressed)
{
	if (timePressed - prevDash >= dashCoolDown)
	{
		if (timePressed - prevLeft < dashThreshold) {
			LaunchCharacter(FVector(0.f, -dashForce, 0.f), true, false);
			GetWorld()->GetTimerManager().SetTimer(EndMovementHandle, this, &ATP_SideScrollerCharacter::stopMovement, dashDuration, false);
			prevDash = timePressed;
		}
		prevLeft = timePressed;
	}
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
			currPlat = nullptr;
		}
	}
}

