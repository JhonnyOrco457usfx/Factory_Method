// Copyright Epic Games, Inc. All Rights Reserved.


#include "Factory_MethhhhGameModeBase.h"
#include "ZombieComun.h"
#include "Engine/World.h"
#include "Zombie.h"
#include "GeneradorZombieNormales.h"

AFactory_MethhhhGameModeBase::AFactory_MethhhhGameModeBase()
{

	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;


}

void AFactory_MethhhhGameModeBase::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);


}

void AFactory_MethhhhGameModeBase::BeginPlay()
{

	Super::BeginPlay();
	

	UWorld* const World = GetWorld();

	FVector SpawnLocationZombie = FVector(-920.0f, 400.0f, 22.0f);

	NuevoZombie = GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);


       FVector SpawnLocationZombiew = FVector(-920.0f, 200.0f, 22.0f);
	NuevoZombie2 = GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocationZombiew, FRotator::ZeroRotator);

	//NuevoZombie->Velocidad = FMath::FRandRange(0.1, 0.2);




	// Instanciando generador
	AGeneradorZombieNormales* GeneradorZombiesNormales = GetWorld()->SpawnActor<AGeneradorZombieNormales>(AGeneradorZombieNormales::StaticClass());
	// Creando base
	AZombie* Zombie1;
	Zombie1 = GeneradorZombiesNormales->ArmarZombies("ZombieCono");


	FVector SpawnLocation1 = FVector(400.0f, 200.0f, 100.0f);
	Zombie1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), FVector(SpawnLocation1), FRotator::ZeroRotator);

}
