// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ClickerController.generated.h"

/**
 * 
 */
UCLASS()
class TESTCPPSCREENCLICK_API AClickerController : public APlayerController
{
	GENERATED_BODY()
private:
	void CursorTrace();

public:
	virtual void PlayerTick(float DeltaTime) override;
};
