// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieComun.h"

AZombieComun::AZombieComun()
{

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/Shapes/Shape_Tube.Shape_Tube'"));


    ZombieMeshC->SetStaticMesh(ZombieMesh.Object);
    RootComponent = ZombieMeshC;
}

void AZombieComun::BeginPlay()
{
    Super::BeginPlay();
    //Armar();
}
void AZombieComun::Elaboracion()
{
    // Mensaje del tipo de elaboraci�n
    //GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie com�n"));

    // Aqu� puedes agregar c�digo adicional de elaboraci�n espec�fico para ZombieComun
}



//void AZombieComun::Armar()
//{
//    // L�gica de armado espec�fica para ZombieComun
//
//    // Configura el mesh del zombie utilizando el aset cargado
//    static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/Shapes/Shape_Tube.Shape_Tube'"));
//    if (ZombieMeshAsset.Succeeded())
//    {
//        ZombieMeshC->SetStaticMesh(ZombieMeshAsset.Object);
//    }
//
//    // Puedes agregar aqu� configuraciones adicionales del mesh o cualquier otra cosa que necesites
//}

