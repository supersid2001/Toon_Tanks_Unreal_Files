// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTurret.generated.h"

/**
 * 
 */

class APawnTank;
UCLASS()
class TOONTANKS_API APawnTurret : public APawnBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float FireRate = 2.0f;

	FTimerHandle FireRateTimerHandle;

	void CheckFireCondition();

public:
	//APawnTurret();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void HandleDestruction() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	APawnTank *PlayerPawn;

	float ReturnDistance();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float FireRange = 500.0f;
};
