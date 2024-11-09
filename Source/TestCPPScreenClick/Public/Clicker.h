// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <functional>
#include "GameFramework/Actor.h"
#include "Clicker.generated.h"

UCLASS()
class TESTCPPSCREENCLICK_API AClicker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AClicker();
	~AClicker();
	UFUNCTION(BlueprintCallable, Category="Clicker")
	void ReactClicking();
	void BindClickingEvent(std::function<void()> Callback);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	std::function<void()> ClickingEvent;
	
};
