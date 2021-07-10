// Fill out your copyright notice in the Description page of Project Settings.

#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/World.h"
#include "PawnTank.h"

APawnTank::APawnTank()
{
  // Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
  PrimaryActorTick.bCanEverTick = true;
  SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
  SpringArm->SetupAttachment(RootComponent);

  Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
  Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void APawnTank::BeginPlay()
{
  Super::BeginPlay();

  PlayerControllerRef = Cast<APlayerController>(GetController());
}

void APawnTank::HandleDestruction()
{
  Super::HandleDestruction();
  bIsPlayerAlive = false;
  SetActorHiddenInGame(true);
  SetActorTickEnabled(false);
  //Hide Player. TODO : Create new function to handle this
}

bool APawnTank::GetIsPlayerAlive()
{
  return bIsPlayerAlive;
}

// Called every frame
void APawnTank::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  Rotate();
  Move();

  if (PlayerControllerRef)
  {
    FHitResult TraceHitResult;
    PlayerControllerRef->GetHitResultUnderCursor(ECC_Visibility, false, TraceHitResult);
    FVector HitLocation = TraceHitResult.ImpactPoint;

    RotateTurretFunction(HitLocation);
  }
}

// Called to bind functionality to input
void APawnTank::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
  Super::SetupPlayerInputComponent(PlayerInputComponent);
  PlayerInputComponent->BindAxis("MoveForward", this, &APawnTank::CalculateMoveInput);
  PlayerInputComponent->BindAxis("Turn", this, &APawnTank::CalculateRotateInput);
  PlayerInputComponent->BindAxis("Sprint", this, &APawnTank::CalculateSprint);
  PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APawnTank::Fire);
}

void APawnTank::CalculateMoveInput(float Value)
{
  MoveDirection = FVector(Value * MoveSpeed * GetWorld()->DeltaTimeSeconds, 0, 0);
}

void APawnTank::CalculateRotateInput(float Value)
{
  float RotateAmount = Value * RotateSpeed * GetWorld()->DeltaTimeSeconds;
  FRotator Rotation = FRotator(0, RotateAmount, 0);
  RotationDirection = FQuat(Rotation);
}

void APawnTank::CalculateSprint(float Value)
{
  if (Value != 0.0f)
  {
    MoveDirection = MoveDirection * Value;
  }
}

void APawnTank::Move()
{
  AddActorLocalOffset(MoveDirection, true);
}

void APawnTank::Rotate()
{
  AddActorLocalRotation(RotationDirection, true);
}
