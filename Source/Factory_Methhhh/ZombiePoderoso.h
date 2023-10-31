// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombie.h"
#include "ZombiePoderoso.generated.h"

/**
 * 
 */
UCLASS()
class FACTORY_METHHHH_API AZombiePoderoso : public AZombie
{
	GENERATED_BODY()

public:
	AZombiePoderoso();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Elabora el zombie
	virtual void Elaboracion() override;

	
};
