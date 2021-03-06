// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * Controls the turret on the tank.
 */
UCLASS(ClassGroup = (BattleTank), meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
	
public:
  void Rotate(float RelativeSpeed);

private:

  UPROPERTY(EditDefaultsOnly, Category = Setup)
  float MaxDegreePerSeconds = 25;
	
};
