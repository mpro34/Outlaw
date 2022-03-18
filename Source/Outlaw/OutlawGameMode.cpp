// Copyright Epic Games, Inc. All Rights Reserved.

#include "OutlawGameMode.h"
#include "OutlawCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOutlawGameMode::AOutlawGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
