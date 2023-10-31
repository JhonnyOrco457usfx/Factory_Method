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
    // Mensaje del tipo de elaboración
    //GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando zombie común"));

    // Aquí puedes agregar código adicional de elaboración específico para ZombieComun
}



//void AZombieComun::Armar()
//{
//    // Lógica de armado específica para ZombieComun
//
//    // Configura el mesh del zombie utilizando el aset cargado
//    static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/Shapes/Shape_Tube.Shape_Tube'"));
//    if (ZombieMeshAsset.Succeeded())
//    {
//        ZombieMeshC->SetStaticMesh(ZombieMeshAsset.Object);
//    }
//
//    // Puedes agregar aquí configuraciones adicionales del mesh o cualquier otra cosa que necesites
//}

