// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TP_SideScrollerGameMode.h"
#include "TP_SideScrollerCharacter.h"
#include "UObject/ConstructorHelpers.h"

// set default pawn class to our Blueprinted character
ATP_SideScrollerGameMode::ATP_SideScrollerGameMode()
{	
	//  get default pawn class from "/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter", 
	//  if there is pawn created in default pawn class, then set default class as player pawn class 
	
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	
}

//comment done
