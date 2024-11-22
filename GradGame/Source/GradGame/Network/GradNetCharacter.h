// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ModularCharacter.h"
#include "GradGame/GradGameplayTags.h"
#include "GradGame/AbilitySystem/Abilities/GradGameplayAbility.h"
#include "GradNetCharacter.generated.h"

class UGradAbilitySystemComponent;
class UGradHealthComponent;

UCLASS()
class GRADGAME_API AGradNetCharacter : public AModularCharacter
{
	GENERATED_BODY()

public:
	AGradNetCharacter();

	UFUNCTION(BlueprintImplementableEvent, Category = Equipment, meta = (DisplayName = "NetOnEquipped"))
	void K2_NetOnEquipped();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnDeathStarted(AActor* OwningActor);

	UFUNCTION()
	virtual void OnDeathFinished(AActor* OwningActor);

	void DisableMovementAndCollision();
	void DestroyDueToDeath();
	void UninitAndDestroy();

	// Called when the death sequence for the character has completed
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnDeathFinished"))
	void K2_OnDeathFinished();

	void HandleSkill(const FGameplayTag& InputTag);

	UGradAbilitySystemComponent* GetGradAbilitySystemComponent() const { return AbilitySystemComponent; }

	uint64 GetPlayerId();
public:
	UPROPERTY(VisibleAnywhere, Category = "Grad|NetCharacter")
	TObjectPtr<UGradAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grad|Character")
	TObjectPtr<UGradHealthComponent> HealthComponent;

public:
	// WeaponFire
	FTransform WeaponTransform = FTransform();
	
	// Dash
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EGradAbilityDashDirection DashDirection;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector MoveDirection;

	// Shield
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector ShieldLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FRotator ShieldRotator;
};
