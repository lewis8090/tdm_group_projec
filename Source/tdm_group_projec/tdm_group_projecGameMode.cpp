// Copyright Epic Games, Inc. All Rights Reserved.

#include "tdm_group_projecGameMode.h"
#include "tdm_group_projecCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atdm_group_projecGameMode::Atdm_group_projecGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
