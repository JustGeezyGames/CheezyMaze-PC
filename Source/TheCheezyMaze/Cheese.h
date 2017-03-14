// Copyright JustGeezy Games

#pragma once

#include "GameFramework/Actor.h"
#include "Cheese.generated.h"

UCLASS()
class THECHEEZYMAZE_API ACheese : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheese();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditDefaultsOnly, Category = Powerup)
	float RotationSpeed = 5;
	
	
};
