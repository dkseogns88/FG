// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/WorldSettings.h"
#include "GradWorldSettings.generated.h"

class UGradExperienceDefinition;

UCLASS()
class GRADGAME_API AGradWorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:

	AGradWorldSettings(const FObjectInitializer& ObjectInitializer);

#if WITH_EDITOR
	virtual void CheckForErrors() override;
#endif

public:
	FPrimaryAssetId GetDefaultGameplayExperience() const;

protected:
	
	UPROPERTY(EditDefaultsOnly, Category=GameMode)
	TSoftClassPtr<UGradExperienceDefinition> DefaultGameplayExperience;
};
