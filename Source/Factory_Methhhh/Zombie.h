// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.generated.h"

UCLASS()
class FACTORY_METHHHH_API AZombie : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombie();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	// nombre del zombie
	FString NombreZombie;

	// vida del zombie
	int Vida;

	// Armadura del zombie
	FString Armadura;

	//material del zombie
	TArray<FString> Materiales;

public:

	// Arma el zombie 
	void Armar();

	//ELaborar el zombie
	virtual void Elaboracion();

	//libera el zombie
	void Liberar();


	// Devuelve el nombre del zombie
	FString getNombreZombie();





	AZombie * ZombieMeshComponent;

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ZombieMeshC;






	//atributo 
	float Velocidad = 10;

	
};
