// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTrack.h"




void UTankTrack::SetThrottle(float Throttle) {

  FMath::Clamp<float>(Throttle, -1, 1);
  FVector ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
  FVector ForceLocation = GetComponentLocation();

  auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
  TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);

}