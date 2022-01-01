// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomMovementComponent.h"
#include "TestActor.generated.h"

UCLASS()
class LEARNINGUE4CPP_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMeshComponent* mesh;
	UPROPERTY() USceneComponent* root;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) URandomMovementComponent* rMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters");
	int ShotDelay = 5;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters");
	FString Name;

	UFUNCTION(BlueprintCallable)
	void Shoot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
