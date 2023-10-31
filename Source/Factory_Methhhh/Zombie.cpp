// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include "GenradorDeZombies.h"

// Sets default values
AZombie::AZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Registra la función para la detección de colisiones
//OnActorBeginOverlap.AddDynamic(this, &AZombie::OnOverlapBegin);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	ZombieMeshC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZombieMesh"));
	//ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);
	//ZombieMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	//ZombieMeshComponent->SetSimulatePhysics(true);

	Materiales = TArray<FString>();

}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();



	
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	FVector LocalizacionObjetivo = FVector(50.0f, 80.0f, 160.0f); // Cambia la ubicación objetivo según tus necesidades
	// Calcula la dirección y distancia al objetivo
	FVector Direccion = LocalizacionObjetivo - FVector(200.0f, 40.0f, 16.0f);
	// Calcula la distancia de al objetivo
	//float DistanciaAlObjetivo = FVector::Dist(LocalizacionObjetivo, this->GetActorLocation());




	//// Calcula el desplazamiento en este frame
	//float DeltaMove = Velocidad * GetWorld()->DeltaTimeSeconds;

	//if (DeltaMove > DistanciaAlObjetivo)
	//{
	//	// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
	//	this->SetActorLocation(LocalizacionObjetivo);
	//	//this->SetActorRotation(NewRotation);
	//}
	//else
	//{
	//	// Mueve el objeto en la dirección calculada
	//	this->AddActorWorldOffset(Direccion * DeltaMove);

	//}

}


void AZombie::Armar()
{

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Armando %s"), *getNombreZombie()));

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Armando..."));

}

void AZombie::Elaboracion()
{
	//Muestra el procedimiento de elaboracion en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando..."));

}

void AZombie::Liberar()
{

	//Muestra el procedimiento de liberacion en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Liberando al zombie"));

}

FString AZombie::getNombreZombie()
{

	return NombreZombie;
}




