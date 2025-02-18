// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ModularCharacter.h"
#include "Network/Enum.pb.h"

#include "GradCharacter.generated.h"

class UGradPawnExtensionComponent;
class UGradCameraComponent;
class UGradAbilitySystemComponent;
class UGradHealthComponent;

UCLASS()
class GRADGAME_API AGradCharacter : public AModularCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGradCharacter();

	void OnAbilitySystemInitialized();
	void OnAbilitySystemUninitialized();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Begins the death sequence for the character (disables collision, disables movement, etc...)
	UFUNCTION()
	virtual void OnDeathStarted(AActor* OwningActor);

	// Ends the death sequence for the character (detaches controller, destroys pawn, etc...)
	UFUNCTION()
	virtual void OnDeathFinished(AActor* OwningActor);

	void DisableMovementAndCollision();
	void DestroyDueToDeath();
	void UninitAndDestroy();

	// Called when the death sequence for the character has completed
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnDeathFinished"))
	void K2_OnDeathFinished();

	UGradAbilitySystemComponent* GetGradAbilitySystemComponent() const { return AbilitySystemComponent; }

	UFUNCTION(BlueprintCallable)
	int64 GetPlayerId();
	Protocol::TeamType GetTeamType();

public:
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Grad|Character")
	TObjectPtr<UGradPawnExtensionComponent> PawnExtComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grad|Character")
	TObjectPtr<UGradCameraComponent> CameraComponent;

	UPROPERTY(VisibleAnywhere, Category = "Grad|Character")
	TObjectPtr<UGradAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grad|Character")
	TObjectPtr<UGradHealthComponent> HealthComponent;
};