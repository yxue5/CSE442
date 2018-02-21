// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TP_SideScrollerCharacter.generated.h"


class UGameplayStatics;
class UAnimInstanceKisa;

UCLASS(config=Game)
class ATP_SideScrollerCharacter : public ACharacter
{
	GENERATED_BODY()
	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	FTimerHandle EndMovementHandle;

	//different states
	FString State = Idle;

	FString Idle = "Idle";
	FString Walking = "Walking";
	FString Dashing = "Dash";
	FString Jumping = "Jump";
	FString Attacking = "Attack";

protected:
	UFUNCTION()
	void checkIdle();
	//stops dash from sliding
	UFUNCTION()
	void stopMovement();
	/** Called for side to side input */

	//determines if move is valid in regards to current state
	UFUNCTION()
	bool moveIsValid(FString desiredMove);

	void MoveRight(float Val);
	
	void handleRight(float timePressed);
	void handleLeft(float timePressed);
	void handleUp(float timePressed);
	void handleDown(float timePressed);
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	virtual void BeginPlay() override;
	void Jump() override;
	// End of APawn interface



public:
	ATP_SideScrollerCharacter();
	UFUNCTION()
		FString getState();
	virtual void Tick(float DeltaTime) override;
	//virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, 
	//	FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	APlayerController* ourPlayer = nullptr;
	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	//threshold for dash
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float dashThreshold = .2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float dashForce = 2000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float dashCoolDown = .4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float dashDuration= .3;
	float prevUp, prevDown, prevLeft, prevRight, prevAttack = 0;
	float prevDash = 0;

	UPROPERTY(VisibleAnywhere)
		class APassablePlatform* currPlat;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animations")
		UAnimInstanceKisa* AnimInst;
};
