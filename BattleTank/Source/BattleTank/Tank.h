// Copyright ciN.

#pragma once

#include "GameFramework/Pawn.h"
#include "Tank.generated.h"



UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
  
  // Sets default values for this pawn's properties
  ATank();

protected:

  // Properties
  // ------------------


  // Methods
  // ------------------
  virtual void BeginPlay() override;


};
