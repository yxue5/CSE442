// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceKisa.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTEROICA_API UAnimInstanceKisa : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FString State = "Idle";	
	
};
