// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorZombieNormales.h"
#include "ZombieComun.h"
#include "ZombieCono.h"

AZombie* AGeneradorZombieNormales::ArmarZombies(FString ZombiesSKU)
{

  

    //Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
    if (ZombiesSKU.Equals("ZombieComun")) {
    	return GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass());
    }
    else if (ZombiesSKU.Equals("ZombieCono")) {
    	return GetWorld()->SpawnActor<AZombieCono>(AZombieCono::StaticClass());
    }
    else if (ZombiesSKU.Equals("ZombieCubo")) {

    	//Añadir otro zombie si se desea
    	return 	nullptr;
    }
    else
    	
    	return nullptr; //Returna null si el valor no es valido

    // quiero una logica donde ya no solo con mensajes si no mostrar asests en pantalla



}

