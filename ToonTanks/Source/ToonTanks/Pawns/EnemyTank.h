// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnTurret.h"
#include "EnemyTank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API AEnemyTank : public APawnTurret
{
	GENERATED_BODY()

private:
	FRotator RotationDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float MoveRange = 1000.0f;
	bool bIsActive = false;
	float MoveSpeed = 600.0f;

	void RotateMeshFunction(FVector LookAtTarget);
	void MoveMeshFunction();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
