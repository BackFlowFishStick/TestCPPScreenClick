// Fill out your copyright notice in the Description page of Project Settings.


#include "Clicker.h"

// Sets default values
AClicker::AClicker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AClicker::~AClicker()
{
	this->ClickingEvent = nullptr;
}

void AClicker::ReactClicking()
{
	if(this->ClickingEvent == nullptr) return;

	this->ClickingEvent();
}

void AClicker::BindClickingEvent(std::function<void()> Callback)
{
	this->ClickingEvent = Callback;
}

// Called when the game starts or when spawned
void AClicker::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClicker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

