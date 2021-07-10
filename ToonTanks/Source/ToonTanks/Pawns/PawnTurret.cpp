// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "Math/Vector.h"
#include "Components/StaticMeshComponent.h"
#include "PawnTank.h"
#include "PawnTurret.h"

void APawnTurret::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  if (!PlayerPawn || ReturnDistance() > FireRange)
  {
    LazerMesh->SetVisibility(false, false);
    return;
  }
  LazerMesh->SetVisibility(true, false);
  RotateTurretFunction(PlayerPawn->GetActorLocation());
}

void APawnTurret::BeginPlay()
{
  Super::BeginPlay();
  GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);

  PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void APawnTurret::HandleDestruction()
{
  Super::HandleDestruction();
  Destroy();
}

void APawnTurret::CheckFireCondition()
{
  //If player is alive (Player == null)
  if (!PlayerPawn || !PlayerPawn->GetIsPlayerAlive())
  {
    return;
  }

  //If Player IS in range THEN FIRE
  if (ReturnDistance() <= FireRange)
  {
    Fire();
  }
  UE_LOG(LogTemp, Warning, TEXT("Fire Condition Checked"));
}

float APawnTurret::ReturnDistance()
{
  if (!PlayerPawn)
  {
    return 0.0f;
  }
  return FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
}
