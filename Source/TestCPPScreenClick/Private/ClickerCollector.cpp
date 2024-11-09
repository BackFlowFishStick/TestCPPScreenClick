// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickerCollector.h"
#include "Clicker.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AClickerCollector::AClickerCollector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AClickerCollector::BindClickerEvent()
{
	TArray<AActor*> Clickers;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AClicker::StaticClass(), Clickers);

	for(int i = 0; i < Clickers.Num(); ++i)
	{
		Cast<AClicker>(Clickers[i])->BindClickingEvent([=]() { GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Clickers[i]->GetName());});
	}
}

// Called when the game starts or when spawned
void AClickerCollector::BeginPlay()
{
	Super::BeginPlay();

	this->BindClickerEvent();
}

// Called every frame
void AClickerCollector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

