// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory_princicpal.h"
#include "GeneradorZombieNormales.h"
#include "AGeneradorZombieEspeciales.h"
#include "ZombieComun.h"
#include "Zombie.h"

// Sets default values
AFactory_princicpal::AFactory_princicpal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFactory_princicpal::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void AFactory_princicpal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

