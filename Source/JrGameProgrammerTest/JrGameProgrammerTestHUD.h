// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "JrGameProgrammerTestHUD.generated.h"

UCLASS()
class AJrGameProgrammerTestHUD : public AHUD
{
	GENERATED_BODY()

public:
	AJrGameProgrammerTestHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

