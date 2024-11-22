// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GradGameplayAbility.generated.h"

UENUM(BlueprintType)
enum class EGradAbilityActivationPolicy : uint8
{
	/** Input이 Trigger 되었을 경우 (Presssed/Released) */
	OnInputTriggered,
	/** Input이 Held되어 있을 경우 */
	WhileInputActive,
	/** avatar가 생성되었을 경우, 바로 할당 */
	OnSpawn,
};

/**
 * EGradAbilityActivationGroup
 *
 *	Defines how an ability activates in relation to other abilities.
 */
UENUM(BlueprintType)
enum class EGradAbilityActivationGroup : uint8
{
	// Ability runs independently of all other abilities.
	Independent,

	// Ability is canceled and replaced by other exclusive abilities.
	Exclusive_Replaceable,

	// Ability blocks all other exclusive abilities from activating.
	Exclusive_Blocking,

	MAX	UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EGradAbilityDashDirection : uint8
{
	Forward,
	Backward,
	Left,
	Right,
	None,
};

/** forward declarations */
class UGradAbilityCost;
class AGradCharacter;
class AGradNetCharacter;
class UGradCameraMode;
class UGradHeroComponent;
class AGradPlayerController;

/**
 * 
 */
UCLASS()
class GRADGAME_API UGradGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	UGradGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	UFUNCTION(BlueprintCallable, Category = "Grad|Ability")
	UGradAbilitySystemComponent* GetGradAbilitySystemComponentFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "Grad|Ability")
	AGradPlayerController* GetGradPlayerControllerFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "Grad|Ability")
	AController* GetControllerFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "Grad|Ability")
	AGradCharacter* GetGradCharacterFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "Grad|Ability")
	AGradNetCharacter* GetGradNetCharacterFromActorInfo() const;

	UFUNCTION(BlueprintCallable, Category = "Grad|Ability")
	UGradHeroComponent* GetHeroComponentFromActorInfo() const;

	EGradAbilityActivationPolicy GetActivationPolicy() const { return ActivationPolicy; }
	EGradAbilityActivationGroup GetActivationGroup() const { return ActivationGroup; }

	void TryActivateAbilityOnSpawn(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) const;


	// Tries to change the activation group.  Returns true if it successfully changed.
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Grad|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool CanChangeActivationGroup(EGradAbilityActivationGroup NewGroup) const;

	// Tries to change the activation group.  Returns true if it successfully changed.
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "Grad|Ability", Meta = (ExpandBoolAsExecs = "ReturnValue"))
	bool ChangeActivationGroup(EGradAbilityActivationGroup NewGroup);

	// Sets the ability's camera mode.
	UFUNCTION(BlueprintCallable, Category = "Grad|Ability")
	void SetCameraMode(TSubclassOf<UGradCameraMode> CameraMode);

	// Clears the ability's camera mode.  Automatically called if needed when the ability ends.
	UFUNCTION(BlueprintCallable, Category = "Grad|Ability")
	void ClearCameraMode();

	/**
	* UGameplayAbility interfaces
	*/
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const override;
	virtual bool CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual bool DoesAbilitySatisfyTagRequirements(const UAbilitySystemComponent& AbilitySystemComponent, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

	/** Called when this ability is granted to the ability system component. */
	UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityAdded")
	void K2_OnAbilityAdded();

	/** Called when this ability is removed from the ability system component. */
	UFUNCTION(BlueprintImplementableEvent, Category = Ability, DisplayName = "OnAbilityRemoved")
	void K2_OnAbilityRemoved();

	/** 언제 GA가 활성화될지 정책 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grad|AbilityActivation")
	EGradAbilityActivationPolicy ActivationPolicy;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Grad|Ability Activation")
	EGradAbilityActivationGroup ActivationGroup;

	/** ability costs to apply GradGameplayAbility separately */
	UPROPERTY(EditDefaultsOnly, Instanced, Category = "Grad|Costs")
	TArray<TObjectPtr<UGradAbilityCost>> AdditionalCosts;

	// Current camera mode set by the ability.
	TSubclassOf<UGradCameraMode> ActiveCameraMode;


	UFUNCTION(BlueprintCallable)
	void SendDash(EGradAbilityDashDirection DashDirection, FVector MoveDirection);

	UFUNCTION(BlueprintCallable)
	void SendShield(FVector SpawnLocation, FRotator SpawnRotator);

};
