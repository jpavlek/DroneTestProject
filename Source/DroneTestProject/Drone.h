// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Drone.generated.h"

UCLASS()
class DRONETESTPROJECT_API ADrone : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADrone();
	//ADrone(const FObjectInitializer& objectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	/**
	 * Drone states.
	 */
	void Initialize();

	UFUNCTION(BlueprintCallable, Category = "Drone")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Drone")
	void SetHealth(float value);

	UFUNCTION()
	void OnRep_PlayEngineSound();

private:
	UPROPERTY(Replicated)
	float _health;

	UPROPERTY(ReplicatedUsing = OnRep_PlayEngineSound)
	bool _engineSoundOn;
};
