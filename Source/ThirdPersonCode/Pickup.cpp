// Fill out your copyright notice in the Description page of Project Settings.

#include "ThirdPersonCode.h"
#include "Pickup.h"


// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Pickup is active on creation
	bIsActive = true;

	// Create the root SphereComponent to handle the pickup's collision
	BaseCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("BaseSphereComponent"));

	RootComponent = BaseCollisionComponent;

	// Create the static mesh component
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));

	// Turn on physics for the static mesh
	PickupMesh->SetSimulatePhysics(true);

	// Attach the static mesh component to the root component
	PickupMesh->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called when picked up
void APickup::OnPickedUp_Implementation()
{
	bIsActive = false;
}