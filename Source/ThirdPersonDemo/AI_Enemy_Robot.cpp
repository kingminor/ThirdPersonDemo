// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_Enemy_Robot.h"

// Sets default values
AAI_Enemy_Robot::AAI_Enemy_Robot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAI_Enemy_Robot::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAI_Enemy_Robot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

