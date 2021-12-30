// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UserProfile.h"
#include "PlayerBase.generated.h"

UCLASS()
class LEARNINGUE4CPP_API APlayerBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerBase();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Properties");
	TSubclassOf<UUserProfile> Profile;

	UFUNCTION(BlueprintCallable, Category = "Properties")
	FString PrintInfo();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
