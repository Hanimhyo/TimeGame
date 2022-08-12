// Fill out your copyright notice in the Description page of Project Settings.


#include "InverseActor.h"
#include <Components/StaticMeshComponent.h>

// Sets default values
AInverseActor::AInverseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("meshComp"));
	//RootComponent = meshComp;
}

// Called when the game starts or when spawned
void AInverseActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInverseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

