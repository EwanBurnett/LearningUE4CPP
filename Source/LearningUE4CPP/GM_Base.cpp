// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_Base.h"

AGM_Base::AGM_Base()
{
    //GameStateClass = ANewGameState::StaticClass();
}

void AGM_Base::DestroyActor()
{
    if(actor != nullptr)
    {
        GEngine->AddOnScreenDebugMessage(-30, -20, FColor::Green, TEXT("Goodbye!"));
        actor->Destroy();
    }
}

void AGM_Base::BeginPlay()
{
    Super::BeginPlay();

    GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Blue, TEXT("Spawning Actor"));

    FTransform SpawnLocation;
    //()->SpawnActor<ATestActor>(ATestActor::StaticClass(), &SpawnLocation);
    actor = GetWorld()->SpawnActor<ATestActor>(ATestActor::StaticClass(), SpawnLocation);

    FTimerHandle timer;
    GetWorldTimerManager().SetTimer(timer, this, &AGM_Base::DestroyActor, actor->ShotDelay);
        
}
