// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/InputComponent.h"
#include "GameFrameWork/Actor.h"
#include "Math/UnrealMathUtility.h"
#include "WeaponGrabber.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShootingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TECHDEMO_API UShootingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UShootingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UInputComponent* inputComponent = nullptr;
	UWeaponGrabber* weaponGrabber = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector muzzleOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
		int32 maxAmmo = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
		int32 currentAmmo = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
		TSubclassOf<class ABullet> projectileClass;

	void SetupInputComponent();

	void Fire();
	void Reload() { currentAmmo = maxAmmo; }
};
