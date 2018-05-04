// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Weapon.h"
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Weapon, meta = (AllowPrivateAccess = "true"))
	class AWeapon* CharWeapon;

protected:
	FTimerHandle EndMovementHandle;
	FTimerHandle AttackingHandle;
	FTimerHandle KnockupHandle;
	FTimerHandle StunHandle;
	//different states
	FString State = Idle;

	FString Idle = "Idle";
	FString Walking = "Walking";
	FString Running = "Running";
	FString Dashing = "Dash";
	FString Jumping = "Jump";
	FString Rocketing = "Rocketing";
	FString Flashing = "Flashing";
	FString Attacking = "Attack";
	FString Stunned = "Stunned";
	FString Knockup = "Knockup";
	FString Knockdown = "Knockdown";
	FString OnGround = "OnGround";
	FString Combo1 = "Combo1";
	FString Combo2 = "Combo2";
	FString Combo3 = "Combo3";
	FString Combo4 = "Combo4";
	FString Combo5 = "Combo5";
	FString DashAttacking = "DashAttack";
	FString Land = "Land";
	FString Death = "Death";
	FString SkillOne = "SkillOne";
	FString Spawn = "Spawn";
	FString DashStab = "DashStab";

	//sets char back to idle when appropriate
	UFUNCTION()
	void checkIdle();

	//Uses Skill 1
	UFUNCTION()
		void Skill1();

	//stops dash from sliding
	UFUNCTION()
	void stopMovement();

	UFUNCTION()
		void Flash(float Direction);
	void Dash(float Direction);
	UFUNCTION()
	void Rocket(float Direction, float Time);

	UFUNCTION()
		void stopAttack();

	//set state 
	UFUNCTION()
		void setState(FString state);

	//handles horizontal axis
	void MoveRight(float Val);
	
	void Attack();
	void handleRight(float timePressed);
	void handleLeft(float timePressed);
	void HandleUp();
	void handleDown(float timePressed);
	void handleAnimation();
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	virtual void BeginPlay() override;
	void Jump() override;
	// End of APawn interface

public:
	
	ATP_SideScrollerCharacter();
	UFUNCTION()
		virtual void OnCharacterBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	//UFUNCTION()
		//virtual void OnCharacterEndOverlap(UPrimitiveComponent* OverlappedComponent,
		//	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	//Displays Combo when you hit another player
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void displayCombo();
	//lets game know player has died
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void endGame();
	//Toggles AI
	UFUNCTION()
		void ActivateAI();
	//Toggles different levels of AI
	UFUNCTION()
		void AILevel1();
	UFUNCTION()
		void  AILevel2();
	UFUNCTION(BlueprintCallable)
		void Die();
	UFUNCTION(BlueprintCallable)
		FString getState();
	UFUNCTION(BlueprintCallable)
		void EndStun();
	UFUNCTION()
		AWeapon* getWep();
	//handles reaction to attack
	UFUNCTION()
		void handleAttack(float dmg, FString stunType, float stunDuration, FVector force, float attackDirection);
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, 
		FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	APlayerController* ourPlayer = nullptr;
	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	UPROPERTY() TArray<float> LeftStack;
	UPROPERTY() TArray<float> RightStack;
	UPROPERTY() TArray<float> UpStack;
	UPROPERTY() TArray<float> DownStack;
	//threshold for dash
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float dashThreshold = .2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float dashForce = 700;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float dashCoolDown = .4;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float dashDuration= .3;

	//threshold for rocket
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float rocketThreshold = .4;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float rocketForce = 1000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float rocketUpForce = 1000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float rocketDuration = .3;
	//proper x value for our character.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float properX = 0;
	//threshold for being considered simultaneously pressed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float simulThreshold = 0.1;

	float prevUp, prevDown, prevLeft, prevRight, prevAttack = 0;
	float prevUp2, prevDown2, prevLeft2, prevRight2 = 0;


	float prevDash = 0;
	float prevJump = 0;
	bool upPressed = false;
	bool leftPressed = false;
	bool rightPressed = false;
	bool downPressed = false;
	bool canRocket = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
		class UAttackHandler* AttackHandle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		class UCharacterStats* Stats;
	UPROPERTY(VisibleAnywhere)
		class APassablePlatform* currPlat;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Animations")
		UAnimInstanceKisa* AnimInst;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
		TSubclassOf<class AWeapon> WeaponClass;
};
