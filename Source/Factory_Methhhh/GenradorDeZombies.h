// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.h"
#include "GenradorDeZombies.generated.h"

UCLASS()
class FACTORY_METHHHH_API AGenradorDeZombies : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenradorDeZombies();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//Crea un zombie y lo devuelve. es una funciona virtual pura así que no necesita implementacion
	virtual AZombie* ArmarZombies(FString ZombiesSKU)
		PURE_VIRTUAL(AGenradorDeZombies::ArmarZombies, return nullptr;);

	//Ordena, arma y devuelve un zombie
	AZombie* OrdenarZombies(FString Tipo);





};
