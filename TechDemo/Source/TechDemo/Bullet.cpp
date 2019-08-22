// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Initialise collision component
	collisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	collisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
	collisionComponent->InitSphereRadius(15.f);
	RootComponent = collisionComponent;

	//Initialise Projectile Movement
	projectileMoveComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	projectileMoveComponent->SetUpdatedComponent(collisionComponent);
	projectileMoveComponent->InitialSpeed = 3000.f;
	projectileMoveComponent->MaxSpeed = 3000.f;
	projectileMoveComponent->bRotationFollowsVelocity = true;
	projectileMoveComponent->bShouldBounce = false;
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::FireInDirection(const FVector & fireDirection)
{
	projectileMoveComponent->Velocity = fireDirection * projectileMoveComponent->InitialSpeed;
}

