// Copyright Epic Games, Inc. All Rights Reserved.

#include "GradGameplayAbility_Death.h"

#include "AbilitySystem/Abilities/GradGameplayAbility.h"
#include "AbilitySystem/GradAbilitySystemComponent.h"
#include "Character/GradHealthComponent.h"
#include "GradGameplayTags.h"
#include "GradLogChannels.h"
#include "Trace/Trace.inl"
#include "Network/GradNetworkComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GradGameplayAbility_Death)

UGradGameplayAbility_Death::UGradGameplayAbility_Death(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	bAutoStartDeath = true;

	// Add the ability trigger tag as default to the CDO.
	FAbilityTriggerData TriggerData;
	TriggerData.TriggerTag = FGradGameplayTags::Get().GameplayEvent_Death;
	TriggerData.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
	AbilityTriggers.Add(TriggerData);

}

void UGradGameplayAbility_Death::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	check(ActorInfo);


	UGradAbilitySystemComponent* GradASC = CastChecked<UGradAbilitySystemComponent>(ActorInfo->AbilitySystemComponent.Get());

	FGameplayTagContainer AbilityTypesToIgnore;
	AbilityTypesToIgnore.AddTag(FGradGameplayTags::Get().Ability_Behavior_SurvivesDeath);

	// Cancel all abilities and block others from starting.
	GradASC->CancelAbilities(nullptr, &AbilityTypesToIgnore, this);

	SetCanBeCanceled(false);

	if (!ChangeActivationGroup(EGradAbilityActivationGroup::Exclusive_Blocking))
	{
		UE_LOG(LogGrad, Error, TEXT("UGradGameplayAbility_Death::ActivateAbility: Ability [%s] failed to change activation group to blocking."), *GetName());
	}

	if (bAutoStartDeath)
	{
		if (UGradHealthComponent* HealthComponent = UGradHealthComponent::FindHealthComponent(GetAvatarActorFromActorInfo()))
		{
			if (HealthComponent->GetDeathState() == EGradDeathState::NotDead)
			{
				HealthComponent->StartDeath();
			}
		}
	}

	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UGradGameplayAbility_Death::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{	
	check(ActorInfo);

	// Always try to finish the death when the ability ends in case the ability doesn't.
	// This won't do anything if the death hasn't been started.
	if (UGradHealthComponent* HealthComponent = UGradHealthComponent::FindHealthComponent(GetAvatarActorFromActorInfo()))
	{
		if (HealthComponent->GetDeathState() == EGradDeathState::DeathStarted)
		{
			HealthComponent->FinishDeath();
		}
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
