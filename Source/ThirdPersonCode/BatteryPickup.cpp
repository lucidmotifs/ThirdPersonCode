// Fill out your copyright notice in the Description page of Project Settings.

#include "ThirdPersonCode.h"
#include "BatteryPickup.h"


ABatteryPickup::ABatteryPickup()
{
	PowerLevel = 100.f;
}

void ABatteryPickup::OnPickedUp_Implementation()
{
	// Call the parent implementation
	Super::OnPickedUp_Implementation();

	Destroy();
}