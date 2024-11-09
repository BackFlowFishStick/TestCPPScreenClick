// Fill out your copyright notice in the Description page of Project Settings.


#include "ClickerController.h"

#include "Clicker.h"

void AClickerController::CursorTrace()
{
	FHitResult CursorHit;
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);

	if(!CursorHit.IsValidBlockingHit()) return;

	auto clicker = Cast<AClicker>(CursorHit.GetActor());

	if(clicker == nullptr) return;

	clicker->ReactClicking();
}

void AClickerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();
}
