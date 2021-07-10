// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGameModeBase.h"
#include "TimerManager.h"
#include "Engine/EngineTypes.h"
#include "ToonTanks/Controllers/PlayerControllerBase.h"
#include "ToonTanks/Pawns/PawnTank.h"
#include "ToonTanks/Pawns/PawnTurret.h"
#include "Kismet/GameplayStatics.h"

void ATankGameModeBase::BeginPlay()
{
  Super::BeginPlay();
  HandleGameStart();
  //Get references and game win/lose conditions
  //Call HandleGameStart() to initialize the start countdown, pawn check, turret activation etc.
}

void ATankGameModeBase::ActorDied(AActor *DeadActor)
{
  UE_LOG(LogTemp, Warning, TEXT("%s is dead"), *(DeadActor->GetName()));
  if (DeadActor == PlayerTank)
  {
    PlayerTank->HandleDestruction();
    HandleGameOver(false);

    if (PlayerControllerRef)
    {
      PlayerControllerRef->SetPlayerEnabledState(false);
    }
  }
  else if (APawnTurret *DestroyedTurret = Cast<APawnTurret>(DeadActor))
  {
    DestroyedTurret->HandleDestruction();
    if (--TargetTurrets <= 0)
    {
      HandleGameOver(true);
    }
  }

  //Check what type of actor is dead
  //If turret tally
  //If player  end game
}

void ATankGameModeBase::HandleGameStart()
{
  TargetTurrets = GetTargetTurretCount();
  PlayerTank = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
  PlayerControllerRef = Cast<APlayerControllerBase>(UGameplayStatics::GetPlayerController(this, 0));
  GameStart();
  if (PlayerControllerRef)
  {
    PlayerControllerRef->SetPlayerEnabledState(false);

    FTimerHandle PlayerEnableHandle;
    FTimerDelegate PlayerEnabledDelegate = FTimerDelegate::CreateUObject(PlayerControllerRef, &APlayerControllerBase::SetPlayerEnabledState, true);
    GetWorld()->GetTimerManager().SetTimer(PlayerEnableHandle, PlayerEnabledDelegate, StartDelay, false);
  }
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
  GameOver(PlayerWon);
}

int32 ATankGameModeBase::GetTargetTurretCount()
{
  TArray<AActor *> TurretActors;
  UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurret::StaticClass(), TurretActors);
  return TurretActors.Num();
}
