// MyActor.cpp

#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;
}


void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play! Yeah!!"));

	UE_LOG(LogTemp, Warning, TEXT("AMyActor::BeginPlay() has been called."));

}


void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking! Great!"));

	UE_LOG(LogTemp, Warning, TEXT("AMyActor::Tick(float DeltaTime) has been called."));

}

