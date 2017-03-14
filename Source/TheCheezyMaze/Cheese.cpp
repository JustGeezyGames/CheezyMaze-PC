// Copyright JustGeezy Games

#include "TheCheezyMaze.h"
#include "Cheese.h"


// Sets default values
ACheese::ACheese()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACheese::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheese::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FRotator rotation = FRotator(0.f, RotationSpeed, 0.0f);
	this->AddActorLocalRotation(rotation * DeltaTime, false);
}

