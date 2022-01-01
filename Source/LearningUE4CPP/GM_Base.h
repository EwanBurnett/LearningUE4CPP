// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestActor.h"
#include "NewGameState.h"
#include "GM_Base.generated.h"

/**
 * 
 */
UCLASS()
class LEARNINGUE4CPP_API AGM_Base : public AGameModeBase
{
	GENERATED_BODY()
public:
		AGM_Base();

		ATestActor* actor;

	UFUNCTION(BlueprintCallable)
		void DestroyActor();

private:
	virtual void BeginPlay() override;
	
};
