#pragma once
#include "CoreMinimal.h"

#include "Stats.generated.h"

USTRUCT(BlueprintType)
struct FStatistics
{
    GENERATED_USTRUCT_BODY()
public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Primary Stats");
    int Vitality;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Primary Stats");
    int Strength;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Primary Stats");
    int Dexterity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Primary Stats");
    int Intelligence;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Primary Stats");
    int Mind;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Primary Stats");
    int Luck;
};