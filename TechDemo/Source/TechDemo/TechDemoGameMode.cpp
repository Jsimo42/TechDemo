// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TechDemoGameMode.h"
#include "TechDemoHUD.h"
#include "TechDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATechDemoGameMode::ATechDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATechDemoHUD::StaticClass();
}
