// Copyright Epic Games, Inc. All Rights Reserved.

#include "PizzaHotGameMode.h"
#include "PizzaHotCharacter.h"
#include "UObject/ConstructorHelpers.h"

APizzaHotGameMode::APizzaHotGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
