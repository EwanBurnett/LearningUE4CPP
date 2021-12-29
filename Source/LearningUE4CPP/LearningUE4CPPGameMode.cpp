// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearningUE4CPPGameMode.h"
#include "LearningUE4CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearningUE4CPPGameMode::ALearningUE4CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
