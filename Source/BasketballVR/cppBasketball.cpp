// Fill out your copyright notice in the Description page of Project Settings.


#include "cppBasketball.h"

// Sets default values
AcppBasketball::AcppBasketball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("BallCollisionComponent"));
	if (CollisionComponent) {
		RootComponent = CollisionComponent;
		CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		CollisionComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	}

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	if (StaticMeshComponent) {
		
		StaticMeshComponent->SetupAttachment(RootComponent);
	}
	

	
}

// Called when the game starts or when spawned
void AcppBasketball::BeginPlay()
{
	Super::BeginPlay();
	
	CollisionComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	CollisionComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldDynamic, ECollisionResponse::ECR_Overlap);

	CollisionComponent->SetSimulatePhysics(true);
	CollisionComponent->SetPhysMaterialOverride(BallPhysMaterial);
	
}

// Called every frame
void AcppBasketball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

