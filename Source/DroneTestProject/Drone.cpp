// Fill out your copyright notice in the Description page of Project Settings.

#include "DroneTestProject.h"
#include "UnrealNetwork.h"
#include "Drone.h"

//--------------------------------------------------------------------------------------------------
// Sets default values
ADrone::ADrone() :
_health(1.0f),
_engineSoundOn(false)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	GetCharacterMovement()->MaxFlySpeed = 10000.0f;
}
//--------------------------------------------------------------------------------------------------
// Called when the game starts or when spawned
void ADrone::BeginPlay()
{
	Super::BeginPlay();
	Initialize();
}
//--------------------------------------------------------------------------------------------------
// Called every frame
void ADrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//--------------------------------------------------------------------------------------------------
// Called to bind functionality to input
void ADrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
//--------------------------------------------------------------------------------------------------
/*override*/
void ADrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ADrone, _health);
	DOREPLIFETIME(ADrone, _engineSoundOn);
}
//--------------------------------------------------------------------------------------------------
void ADrone::Initialize()
{
	if (HasAuthority())
	{
		int a = 0;
	}

	int a = 1;
}
//--------------------------------------------------------------------------------------------------
void ADrone::OnRep_PlayEngineSound()
{
	int a = 0;
}
//--------------------------------------------------------------------------------------------------
float ADrone::GetHealth() const
{
	return _health;
}
//--------------------------------------------------------------------------------------------------
void ADrone::SetHealth(float value)
{
	_health = value;
}
//--------------------------------------------------------------------------------------------------