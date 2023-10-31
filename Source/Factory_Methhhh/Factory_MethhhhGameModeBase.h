// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Factory_MethhhhGameModeBase.generated.h"

/**
 * 
 */
class AZombie;
class AGeneradorDeZombies;
UCLASS()
class FACTORY_METHHHH_API AFactory_MethhhhGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	public:
	AFactory_MethhhhGameModeBase();

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:

	virtual void BeginPlay() override;

public:
	AGeneradorDeZombies* NuevoZombie;

	AGeneradorDeZombies* NuevoZombie2;


	
};






























