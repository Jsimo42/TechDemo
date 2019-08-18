// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponGrabber.h"


#define OUT //Does Nothing Remind me its OUT variable


UWeaponGrabber::UWeaponGrabber()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UWeaponGrabber::BeginPlay()
{
	Super::BeginPlay();

	SetupPhysicsHandle();
	SetupInputComponent();
}


void UWeaponGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	FVector playerVPLoc;
	FRotator playerVPRot;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT playerVPLoc, OUT playerVPRot);

	FVector lineTraceEnd = playerVPLoc + playerVPRot.Vector() * armLength;

	///DrawDebugLine(GetWorld(), playerVPLoc, lineTraceEnd, FColor(255,0,0), false, 0.f, 0.f, 10.f);

	FCollisionQueryParams traceParams(FName(TEXT("")), false, GetOwner());

	FHitResult lineTraceHit;

	GetWorld()->LineTraceSingleByObjectType(OUT lineTraceHit, playerVPLoc, lineTraceEnd, FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), traceParams);

	AActor* actorHit = lineTraceHit.GetActor();

	if (actorHit)
	{
		lastActorHit = actorHit;
	}
}

bool UWeaponGrabber::GetWeaponAttached()
{
	if (lastActorHit == nullptr)
	{
		return false;
	}
	else
	{
		return true;
	}

	return false;
}

void UWeaponGrabber::Grab()
{
	onGrab.Broadcast();
}

void UWeaponGrabber::Drop()
{
	lastActorHit = nullptr;
}

void UWeaponGrabber::SetupPhysicsHandle()
{
	physicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	if (!physicsHandle)
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing physics Handle Componenet"), *GetOwner()->GetName())
	}
}

void UWeaponGrabber::SetupInputComponent()
{
	inputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	if (inputComponent)
	{
		inputComponent->BindAction("PickUp", IE_Pressed, this, &UWeaponGrabber::Grab);
		inputComponent->BindAction("Drop", IE_Pressed, this, &UWeaponGrabber::Drop);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing input Componenet"), *GetOwner()->GetName())
	}
}


