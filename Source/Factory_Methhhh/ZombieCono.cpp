// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCono.h"

AZombieCono::AZombieCono()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	ZombieMeshC->SetStaticMesh(ZombieMesh.Object);

	ZombieMeshC->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));

}

void AZombieCono::BeginPlay()
{
	Super::BeginPlay();
	FVector PosicionIncial = FVector(100.0f, 100.0f, 100.f);


//	//Cambias los atributos según lo que quieras
//
//
////Define sus atributos
//	NombreZombie = "Zombie de Tierra en globo";
//	Vida = FMath::FRandRange(100, 150);
//	Armadura = "Igual que la vida";
//	//Añade los materiales (opcional)
//	Materiales.Add("Un globo, un inflador");


}

void AZombieCono::Elaboracion()
{


	//Mensaje del tipo de elaboracion
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie en Cono"));

	//Añade codigo que quieras que haga el zombie


}

void AZombie::Tick(float DeltaTime)
{
	
	// Obtener posicion en X
	FVector Posicion = GetActorLocation();
	float PosicionX = Posicion.X;

	//Animar movimiento hacia x=0
	FVector UbicacionObjetivo = FVector(PosicionX, 550.0f, 100.0f);
	FVector Direccion = (UbicacionObjetivo - this->GetActorLocation()).GetSafeNormal();
	float DistanciaObjetivo = FVector::Dist(UbicacionObjetivo, this->GetActorLocation());
	float DeltaMove = Velocidad * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanciaObjetivo)
	{
		this->SetActorLocation(UbicacionObjetivo); //Actualiza instantaneamente la posicion del zombie a (UbicacionObjetivo)
	}
	else
	{
		this->AddActorWorldOffset(Direccion * DeltaMove); //Suma (Direccion * DeltaMove) a la posicion actual del zombie
	}
}

//void AZombieCono::Armar()
//{
//
//	// Lógica de armado específica para ZombieComun
//
//// Configura el mesh del zombie utilizando el aset cargado
//	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
//	if (ZombieMeshAsset.Succeeded())
//	{
//		ZombieMeshC->SetStaticMesh(ZombieMeshAsset.Object);
//	}
//
//	// Puedes agregar aquí configuraciones adicionales del mesh o cualquier otra cosa que necesites
//}

