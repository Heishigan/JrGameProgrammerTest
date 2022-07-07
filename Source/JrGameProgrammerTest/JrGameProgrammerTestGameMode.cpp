// Copyright Epic Games, Inc. All Rights Reserved.

#include "JrGameProgrammerTestGameMode.h"
#include "JrGameProgrammerTestHUD.h"
#include "JrGameProgrammerTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJrGameProgrammerTestGameMode::AJrGameProgrammerTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJrGameProgrammerTestHUD::StaticClass();
}
