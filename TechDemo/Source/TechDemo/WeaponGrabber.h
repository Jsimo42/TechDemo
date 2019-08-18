// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/InputComponent.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponGrabber.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGrab);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TECHDEMO_API UWeaponGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* lastActorHit = nullptr;

	UPROPERTY(BlueprintAssignable)
		FOnGrab onGrab;

	bool GetWeaponAttached();

private:

	UPROPERTY(EditAnywhere)
	float armLength = 100.f;

	UPhysicsHandleComponent* physicsHandle = nullptr;
	UInputComponent* inputComponent = nullptr;

	void Grab();
	void Drop();

	void SetupPhysicsHandle();
	void SetupInputComponent();

};
