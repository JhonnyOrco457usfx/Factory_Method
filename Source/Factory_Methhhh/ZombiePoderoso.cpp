// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombiePoderoso.h"

AZombiePoderoso::AZombiePoderoso()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	ZombieMeshC->SetStaticMesh(ZombieMesh.Object);


}

void AZombiePoderoso::BeginPlay()
{

	//Cambias los atributos según lo que quieras


//Define sus atributos
	NombreZombie = "Zombie de Agua Buzo";
	Vida = 200;
	Armadura = "Sin armadura";
	//Añade los materiales (opcional)
	Materiales.Add("Un Respirador");
}

void AZombiePoderoso::Elaboracion()
{
	//Mensaje del tipo de elaboracion
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie Buzo"));

	//Añade codigo que quieras que haga el zombie
}


