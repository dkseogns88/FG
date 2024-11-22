// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "NativeGameplayTags.h"
#include "Abilities/GradGameplayAbility.h"
#include "GradAbilitySystemComponent.generated.h"

class UGradAbilityTagRelationshipMapping;

UCLASS()
class GRADGAME_API UGradAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	UGradAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * AbilitySystemComponent's interface
	 */
	virtual void InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor) override;

	typedef TFunctionRef<bool(const UGradGameplayAbility* GradAbility, FGameplayAbilitySpecHandle Handle)> TShouldCancelAbilityFunc;
	void CancelAbilitiesByFunc(TShouldCancelAbilityFunc ShouldCancelFunc, bool bReplicateCancelAbility);


	/** Sets the current tag relationship mapping, if null it will clear it out */
	void SetTagRelationshipMapping(UGradAbilityTagRelationshipMapping* NewMapping);

	/** Looks at ability tags and gathers additional required and blocking tags */
	void GetAdditionalActivationTagRequirements(const FGameplayTagContainer& AbilityTags, FGameplayTagContainer& OutActivationRequired, FGameplayTagContainer& OutActivationBlocked) const;

	/**
	 * member methods
	 */
	void AbilityInputTagPressed(const FGameplayTag& InputTag);
	void AbilityInputTagReleased(const FGameplayTag& InputTag);

	void ProcessAbilityInput(float DeltaTime, bool bGamePaused);

	bool IsActivationGroupBlocked(EGradAbilityActivationGroup Group) const;
	void AddAbilityToActivationGroup(EGradAbilityActivationGroup Group, UGradGameplayAbility* GradAbility);
	void RemoveAbilityFromActivationGroup(EGradAbilityActivationGroup Group, UGradGameplayAbility* GradAbility);
	void CancelActivationGroupAbilities(EGradAbilityActivationGroup Group, UGradGameplayAbility* IgnoreGradAbility, bool bReplicateCancelAbility);


protected:
	virtual void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) override;
	virtual void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) override;
	
	virtual void ApplyAbilityBlockAndCancelTags(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& BlockTags, bool bExecuteCancelTags, const FGameplayTagContainer& CancelTags) override;


protected:
	// If set, this table is used to look up tag relationships for activate and cancel
	UPROPERTY()
	TObjectPtr<UGradAbilityTagRelationshipMapping> TagRelationshipMapping;

	/** Ability Input Ã³¸®ÇÒ Pending Queue */
	TArray<FGameplayAbilitySpecHandle> InputPressedSpecHandles;
	TArray<FGameplayAbilitySpecHandle> InputReleasedSpecHandles;
	TArray<FGameplayAbilitySpecHandle> InputHeldSpecHandles;

	// Number of abilities running in each activation group.
	int32 ActivationGroupCounts[(uint8)EGradAbilityActivationGroup::MAX];
};
