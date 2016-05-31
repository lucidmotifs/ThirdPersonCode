// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class THIRDPERSONCODE_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pickup)
	bool bIsActive;

	/** Simple collision primitive to use as the root component. */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Pickup)
	class USphereComponent* BaseCollisionComponent;

	/** StaticMeshComponent to represent the pickup in the level. */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Pickup)
	class UStaticMeshComponent* PickupMesh;

	/** Function to call when the Pickup is collected */
	UFUNCTION(BlueprintNativeEvent)
	void OnPickedUp();
};
