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

	UE_LOG(LogTemp, Warning, TEXT("Grabber Here"));
	
}


void UWeaponGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	FVector playerVPLoc;
	FRotator playerVPRot;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT playerVPLoc, OUT playerVPRot);

	//UE_LOG(LogTemp, Warning, TEXT("Loc : %s, Rot : %s"), *playerVPLoc.ToString(), *playerVPRot.ToString());

	FVector lineTraceEnd = playerVPLoc + playerVPRot.Vector() * armLength;

	DrawDebugLine(GetWorld(), playerVPLoc, lineTraceEnd, FColor(255,0,0), false, 0.f, 0.f, 10.f);

	FCollisionQueryParams traceParams(FName(TEXT("")), false, GetOwner());

	FHitResult lineTraceHit;

	GetWorld()->LineTraceSingleByObjectType(OUT lineTraceHit, playerVPLoc, lineTraceEnd, FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), traceParams);

	AActor* actorHit = lineTraceHit.GetActor();

	if (actorHit)
	{
		UE_LOG(LogTemp, Warning, TEXT("Line Trace Hit: %s"), *(actorHit->GetName()))
	}
	
}

