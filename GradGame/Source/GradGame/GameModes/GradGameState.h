// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularGameState.h"
#include "GradGameState.generated.h"

class UGradExperienceManagerComponent;

/**
 *
 */
UCLASS()
class GRADGAME_API AGradGameState : public AModularGameStateBase
{
	GENERATED_BODY()
public:
	AGradGameState();

public:
	UPROPERTY()
	TObjectPtr<UGradExperienceManagerComponent> ExperienceManagerComponent;
};
