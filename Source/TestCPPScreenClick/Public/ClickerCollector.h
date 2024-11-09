// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <functional>
#include "GameFramework/Actor.h"
#include "ClickerCollector.generated.h"

UCLASS()
class TESTCPPSCREENCLICK_API AClickerCollector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AClickerCollector();

	UFUNCTION(BlueprintCallable, Category="Collect")
	void BindClickerEvent();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
