// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyTank.h"
#include "Components/StaticMeshComponent.h"
#include "PawnTank.h"

void AEnemyTank::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);
  if (!PlayerPawn)
  {
    return;
  }
  else if (ReturnDistance() <= MoveRange)
  {
    bIsActive = true;
  }
  if (bIsActive && ReturnDistance() > FireRange)
  {
    RotateMeshFunction(PlayerPawn->GetActorLocation());
    MoveMeshFunction();
  }
}

void AEnemyTank::BeginPlay()
{
  Super::BeginPlay();
}

void AEnemyTank::RotateMeshFunction(FVector LookAtTarget)
{
  FVector LookAtTargetCleaned = FVector(LookAtTarget.X, LookAtTarget.Y, BaseMesh->GetComponentLocation().Z);
  FVector StartLocation = BaseMesh->GetComponentLocation();
  FRotator MeshRotation = FVector(LookAtTargetCleaned - StartLocation).Rotation();
  SetActorRotation(MeshRotation);
  RotateTurretFunction(PlayerPawn->GetActorLocation());
}
void AEnemyTank::MoveMeshFunction()
{
  LazerMesh->SetVisibility(false);
  FVector MoveDirection = FVector(MoveSpeed * GetWorld()->DeltaTimeSeconds, 0, 0);
  AddActorLocalOffset(MoveDirection, true);
}
