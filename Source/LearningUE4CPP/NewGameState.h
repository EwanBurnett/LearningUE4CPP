// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "NewGameState.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGUE4CPP_API ANewGameState : public AGameState
{
	GENERATED_BODY()
public:
	ANewGameState();


	UFUNCTION(BlueprintCallable) void SetScore(int32 score);
	UFUNCTION(BlueprintCallable) int32 GetScore() const;

private:
	UPROPERTY(EditAnywhere) int32 m_CurrentScore;

	
};
