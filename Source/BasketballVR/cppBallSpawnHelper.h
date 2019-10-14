// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "cppBallSpawnHelper.generated.h"

/**
 * 
 */
UCLASS()
class BASKETBALLVR_API AcppBallSpawnHelper : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AcppBallSpawnHelper();


	//UPROPERTY(EditANywhere, BlueprintReadWrite)
		//UStaticMeshComponent* StaticMeshComponent;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
