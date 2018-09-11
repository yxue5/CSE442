// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectEroicaGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "AI_Kisa.h"
#include "GameSparks/Public/GameSparksModule.h"

AProjectEroicaGameModeBase::AProjectEroicaGameModeBase() {
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AProjectEroicaGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//creates gamesparks object which we'll use to connect to the gamesparks service
	gameSparks = NewObject<UGameSparksComponent>(this, FName("GameSparks Component"));

	//check to see if gameparks module is available
	if (!UGameSparksModule::GetModulePtr()->IsInitialized()) {
		//add delegate for handling connection/disconnection
		gameSparks->OnGameSparksAvailableDelegate.AddDynamic(this, &AProjectEroicaGameModeBase::OnGameSparksAvailable);

		//always safe to force a d/c before attempting to connect
		gameSparks->Disconnect();
		//connect to gamesparks using our api key and api secret
		gameSparks->Connect(FString("V348501joM6M"), FString("rWrv4qywuWzbrUP5Ld3zEo9mBar5KSC5"), true, false);
	}
}

void AProjectEroicaGameModeBase::EndPlay(EEndPlayReason::Type reason)
{
	Super::EndPlay(reason);

	if (gameSparks) {
		gameSparks->Disconnect();
	}
}

void AProjectEroicaGameModeBase::OnGameSparksAvailable(bool available)
{
	if (available) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::MakeRandomColor(), TEXT("Gamesparks available"));
		}
	}
	else {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::MakeRandomColor(), TEXT("Gamesparks connection lost"));
		}
	}
}

void AProjectEroicaGameModeBase::activateAI()
{
	EnemyAI->isAIMode = !EnemyAI->isAIMode;
}

void AProjectEroicaGameModeBase::setAISpeed(float speed)
{
	EnemyAI->reactionTime = speed;
}
