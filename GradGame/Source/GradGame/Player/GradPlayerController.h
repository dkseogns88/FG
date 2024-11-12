// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonPlayerController.h"
#include "GradPlayerController.generated.h"

class UNetworkManager;
class AGradCharacter;
class UGradAbilitySystemComponent;

UCLASS()
class GRADGAME_API AGradPlayerController : public ACommonPlayerController
{
	GENERATED_BODY()
public:
	AGradPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void OnPossess(APawn* InPawn) override;

	virtual void BeginPlay() override;
	virtual void PlayerTick(float DeltaTime) override;

	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;

	UGradAbilitySystemComponent* GetGradAbilitySystemComponent() const;

public:
	UNetworkManager* GetNetwork() { return NetworkManager; }

protected:
	const float MOVE_PACKET_SEND_DELAY = 0.04f;
	float MovePacketSendTimer = MOVE_PACKET_SEND_DELAY;

public:
	// Network Cache
	FVector2D DesiredInput;
	FVector DesiredMoveDirection;
	float DesiredYaw;
	float DesiredPitch;
	float DesiredRoll;

	// Dirty Flag Test
	FVector2D LastDesiredInput;

private:
	UNetworkManager* NetworkManager = nullptr;
};
