// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombie.h"
#include "ZombieCono.generated.h"

/**
 * 
 */
UCLASS()
class FACTORY_METHHHH_API AZombieCono : public AZombie
{
	GENERATED_BODY()
	public:
		AZombieCono();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// Elabora el zombie
	virtual void Elaboracion() override;
	//void Armar();


	
};
