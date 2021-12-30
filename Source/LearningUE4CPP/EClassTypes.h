#pragma once
#include "EClassTypes.generated.h"

UENUM(BlueprintType)
enum EClassTypes
{
    Warrior     UMETA(DisplayName = "Warrior"),
    Rogue       UMETA(DisplayName = "Rogue"),
    Cleric      UMETA(DisplayName = "Cleric"),
    Ranger      UMETA(DisplayName = "Ranger"),
};