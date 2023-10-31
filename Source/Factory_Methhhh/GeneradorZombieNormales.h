// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GenradorDeZombies.h"
#include "GeneradorZombieNormales.generated.h"

/**
 * 
 */
UCLASS()
class FACTORY_METHHHH_API AGeneradorZombieNormales : public AGenradorDeZombies
{
	GENERATED_BODY()
public:

	//Concoct the selected potion

	virtual AZombie* ArmarZombies(FString ZombiesSKU) override;
	
public:
	AGeneradorZombieNormales* GeneradorZombiesNormales;
};
