// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "cppBasketball.generated.h"

UCLASS()
class BASKETBALLVR_API AcppBasketball : public AActor
{
	GENERATED_BODY()

		
	
public:	
	// Sets default values for this actor's properties
	AcppBasketball();
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* CollisionComponent;

	UPROPERTY(EditAnywhere)
		UPhysicalMaterial* BallPhysMaterial;
	
	UPROPERTY(EditANywhere, BlueprintReadWrite)
	bool bBallThrown{ false };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
