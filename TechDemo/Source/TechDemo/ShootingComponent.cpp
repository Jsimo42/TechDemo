// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingComponent.h"
#include "Bullet.h"

// Sets default values for this component's properties
UShootingComponent::UShootingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UShootingComponent::BeginPlay()
{
	Super::BeginPlay();

	weaponGrabber = GetOwner()->FindComponentByClass<UWeaponGrabber>();

	if (!weaponGrabber)
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing weapon Grabber Componenet"), *GetOwner()->GetName())
	}

	SetupInputComponent();
	
}


// Called every frame
void UShootingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UShootingComponent::SetupInputComponent()
{
	inputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (inputComponent)
	{
		inputComponent->BindAction("Fire", IE_Pressed, this, &UShootingComponent::Fire);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing input Componenet"), *GetOwner()->GetName())
	}
}

void UShootingComponent::Fire()
{
	//UE_LOG(LogTemp, Warning, TEXT("Bang!"))

	if (!weaponGrabber->GetWeaponAttached() || !weaponGrabber->GetIsAiming())
	{
		UE_LOG(LogTemp, Error, TEXT("No weapon"))
		return;
	}

	if (projectileClass)
	{
		FVector cameraPos;
		FRotator cameraRot;
		GetOwner()->GetActorEyesViewPoint(cameraPos, cameraRot);

		FVector muzzlePos = cameraPos + FTransform(cameraRot).TransformVector(muzzleOffset);
		FRotator muzzleRot = cameraRot;

		muzzleRot.Pitch += 10.f;
		UWorld* world = GetWorld();

		if (world)
		{
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = GetOwner();
			spawnParams.Instigator = GetOwner()->Instigator;

			ABullet* bullet = world->SpawnActor<ABullet>(projectileClass, muzzlePos, muzzleRot, spawnParams);

			if (bullet)
			{
				if (weaponGrabber->GetLastActor()->GetHumanReadableName() == "Shotgun_C_0")
				{
					ABullet* bullet1 = world->SpawnActor<ABullet>(projectileClass, muzzlePos, muzzleRot, spawnParams);
					ABullet* bullet2 = world->SpawnActor<ABullet>(projectileClass, muzzlePos, muzzleRot, spawnParams);

					//Randomise X and Y values
					int32 x = FMath::RandRange(muzzleRot.Roll - 5, muzzleRot.Roll + 5);
					int32 y = FMath::RandRange(muzzleRot.Pitch - 5, muzzleRot.Pitch + 5);

					FVector launchDirection = { (float)x, (float)y, muzzleRot.Vector().Z };
					bullet->FireInDirection(launchDirection);

					x = FMath::RandRange(muzzleRot.Roll - 5, muzzleRot.Roll + 5);
					y = FMath::RandRange(muzzleRot.Pitch - 5, muzzleRot.Pitch + 5);

					launchDirection = { (float)x, (float)y, muzzleRot.Vector().Z };;
					bullet1->FireInDirection(launchDirection);

					x = FMath::RandRange(muzzleRot.Roll - 5, muzzleRot.Roll + 5);
					y = FMath::RandRange(muzzleRot.Pitch - 5, muzzleRot.Pitch + 5);

					launchDirection = { (float)x, (float)y, muzzleRot.Vector().Z };;
					bullet2->FireInDirection(launchDirection);
				}
				else if (weaponGrabber->GetLastActor()->GetHumanReadableName() == "Pistol_C_0")
				{
					FVector launchDirection = muzzleRot.Vector();
					bullet->FireInDirection(launchDirection);
				}
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No projectile class"))
	}
}

