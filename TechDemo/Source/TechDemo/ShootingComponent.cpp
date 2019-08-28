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
		inputComponent->BindAction("Fire", IE_Released, this, &UShootingComponent::StopFire);
		inputComponent->BindAction("Reload", IE_Pressed, this, &UShootingComponent::Reload);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing input Componenet"), *GetOwner()->GetName())
	}
}

void UShootingComponent::Fire()
{
	firing = true;

	//Check Player is aiming
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

			if (currentAmmo > 0)
			{
				if (weaponGrabber->GetLastActor()->GetHumanReadableName() == "Shotgun_C_0")
				{
					for (int i = 0; i < 3; i++)
					{
						ABullet* bullet = world->SpawnActor<ABullet>(projectileClass, muzzlePos, muzzleRot, spawnParams);

						//Randomise X and Y values
						int32 x = FMath::RandRange(muzzleRot.Roll - 5, muzzleRot.Roll + 5);
						int32 y = FMath::RandRange(muzzleRot.Pitch - 5, muzzleRot.Pitch + 5);

						FVector launchDirection = { (float)x, (float)y, muzzleRot.Vector().Z };
						Launch(bullet, launchDirection);

						currentAmmo--;

						UE_LOG(LogTemp, Warning, TEXT("Shotgun Fire"));
					}
				}
				else if (weaponGrabber->GetLastActor()->GetHumanReadableName() == "Pistol_C_0")
				{
					ABullet* bullet = world->SpawnActor<ABullet>(projectileClass, muzzlePos, muzzleRot, spawnParams);

					Launch(bullet, muzzleRot.Vector());

					currentAmmo--;
					UE_LOG(LogTemp, Warning, TEXT("Pistol Fire"));
				}
				else if (weaponGrabber->GetLastActor()->GetHumanReadableName() == "Rifle_C_0")
				{
					rifleFire.Broadcast();

					UE_LOG(LogTemp, Warning, TEXT("Rifle Fire"));
				}
			}
			else
			{
				return;
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No projectile class"))
	}
}

void UShootingComponent::Launch(ABullet* bulletIn, FVector launchDirectionIn)
{
	bulletIn->FireInDirection(launchDirectionIn);
}
