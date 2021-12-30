#pragma once
#include "CoreMinimal.h"
#include "ColorTexture.generated.h"

USTRUCT(BlueprintType)
struct FColorTexture
{
    GENERATED_USTRUCT_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD");
    UTexture* Texture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD");
    FLinearColor Color;

};