// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Initialize the new location vector to the starting position of the platform
	FVector NewLocation = MyVector;

	// Update the Z component of the new location vector based on the current time
	float Time = GetWorld()->GetTimeSeconds();
	NewLocation.Z = 4055.0f + FMath::Sin(Time * 2.0f * PI / 3.0f) * 150.0f;

	// Set the new location of the platform
	SetActorLocation(NewLocation);
}
