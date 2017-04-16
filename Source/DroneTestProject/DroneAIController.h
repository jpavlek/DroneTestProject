// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "DroneAIController.generated.h"

//--------------------------------------------------------------------------------------------------
/**
* Drone & DroneAIController States.
*/
UENUM(BlueprintType)
enum class EState : uint8
{
	Initial,
	TurnedOn,
	TakingOff,
	Hovering,
	SearchingTarget,
	SelectingTarget,
	TrackingTarget,
	Observing,
	Landing,
	TurnedOff,
	Sleeping,
	Shot,
	Fleeing,
	SeverelyDamaged,
	Repaired,
	Dead
};

/**
 * 
 */
UCLASS()
class DRONETESTPROJECT_API ADroneAIController : public AAIController
{
	GENERATED_BODY()
	
	
	
	
};
