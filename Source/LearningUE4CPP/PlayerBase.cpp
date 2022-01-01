// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBase.h"

#include <string>

// Sets default values
APlayerBase::APlayerBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerBase::BeginPlay()
{
	Super::BeginPlay();

	UUserProfile* profile = NewObject<UUserProfile>(GetTransientPackage(), UUserProfile::StaticClass());
	profile->Substats.Strength = 50;
}

FString APlayerBase::PrintInfo()
{
	return FString("I am a warrior named  !");
}

// Called every frame
void APlayerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

