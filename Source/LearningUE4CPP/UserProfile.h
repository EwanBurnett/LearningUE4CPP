// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ColorTexture.h"
#include "EClassTypes.h"
#include "Stats.h"
#include "UserProfile.generated.h"

/**
 * 
 */

UCLASS(Blueprintable)
class LEARNINGUE4CPP_API UUserProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats");
	FString Name = "";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats");
	int Health = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats");
	int Mana = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats");
	FStatistics Substats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class");
	TEnumAsByte<EClassTypes> ClassType;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD");
	FColorTexture Texture;
	//User selectable dropdown of all classes derviving from UObject
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit");
	TSubclassOf<UObject> SpawnableObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MetaClass = "GameMode"), Category = Unit);
	FStringClassReference UClassGameMode;



	
};
