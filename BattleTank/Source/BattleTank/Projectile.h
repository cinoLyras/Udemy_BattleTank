// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class BATTLETANK_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

  // Called every frame
  virtual void Tick(float DeltaTime) override;

  // Lauch the projectile 
  void LaucheProjectile(float speed);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
  
private:

  // Projectile movement
  UProjectileMovementComponent* ProjectileMovement = nullptr;

	
};
