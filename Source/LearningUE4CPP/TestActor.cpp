// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//SetLifeSpan(10);
	root = CreateDefaultSubobject<USceneComponent>("Root");
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	rMove = CreateDefaultSubobject<URandomMovementComponent>("Random Movement");

	auto meshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	if(meshAsset.Object != nullptr)
	{
		mesh->SetStaticMesh(meshAsset.Object);
	}

	auto meshMaterial = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("Material'/Game/Learning/m_Sphere.m_Sphere'"));
	if(meshMaterial.Object != nullptr)
	{
		mesh->SetMaterial(0, meshMaterial.Object);
	}

	
	SetRootComponent(root);

	mesh->SetupAttachment(root);
	
	

}

void ATestActor::Shoot()
{
}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

