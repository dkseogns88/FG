// Fill out your copyright notice in the Description page of Project Settings.


#include "GradAbilitySystemComponent.h"
#include "Abilities/GradGameplayAbility.h"
#include "GameFramework/Pawn.h"
#include "GradGame/Animation/GradAnimInstance.h"
#include "AbilitySystem/GradAbilityTagRelationshipMapping.h"
#include "GradLogChannels.h"

UGradAbilitySystemComponent::UGradAbilitySystemComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UGradAbilitySystemComponent::InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor)
{
	FGameplayAbilityActorInfo* ActorInfo = AbilityActorInfo.Get();
	check(ActorInfo);
	check(InOwnerActor);

	const bool bHasNewPawnAvatar = Cast<APawn>(InAvatarActor) && (InAvatarActor != ActorInfo->AvatarActor);

	Super::InitAbilityActorInfo(InOwnerActor, InAvatarActor);

	if (bHasNewPawnAvatar)
	{
		if (UGradAnimInstance* GradAnimInst = Cast<UGradAnimInstance>(ActorInfo->GetAnimInstance()))
		{
			GradAnimInst->InitializeWithAbilitySystem(this);
		}
	}
}

void UGradAbilitySystemComponent::CancelAbilitiesByFunc(TShouldCancelAbilityFunc ShouldCancelFunc, bool bReplicateCancelAbility)
{
	ABILITYLIST_SCOPE_LOCK();
	for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
	{
		if (!AbilitySpec.IsActive())
		{
			continue;
		}

		UGradGameplayAbility* GradAbilityCDO = Cast<UGradGameplayAbility>(AbilitySpec.Ability);
		if (!GradAbilityCDO)
		{
			UE_LOG(LogGrad, Error, TEXT("CancelAbilitiesByFunc: Non-GradGameplayAbility %s was Granted to ASC. Skipping."), *AbilitySpec.Ability.GetName());
			continue;
		}

		if (GradAbilityCDO->GetInstancingPolicy() != EGameplayAbilityInstancingPolicy::NonInstanced)
		{
			// Cancel all the spawned instances, not the CDO.
			TArray<UGameplayAbility*> Instances = AbilitySpec.GetAbilityInstances();
			for (UGameplayAbility* AbilityInstance : Instances)
			{
				UGradGameplayAbility* GradAbilityInstance = CastChecked<UGradGameplayAbility>(AbilityInstance);

				if (ShouldCancelFunc(GradAbilityInstance, AbilitySpec.Handle))
				{
					if (GradAbilityInstance->CanBeCanceled())
					{
						GradAbilityInstance->CancelAbility(AbilitySpec.Handle, AbilityActorInfo.Get(), GradAbilityInstance->GetCurrentActivationInfo(), bReplicateCancelAbility);
					}
					else
					{
						UE_LOG(LogGrad, Error, TEXT("CancelAbilitiesByFunc: Can't cancel ability [%s] because CanBeCanceled is false."), *GradAbilityInstance->GetName());
					}
				}
			}
		}
		else
		{
			// Cancel the non-instanced ability CDO.
			if (ShouldCancelFunc(GradAbilityCDO, AbilitySpec.Handle))
			{
				// Non-instanced abilities can always be canceled.
				check(GradAbilityCDO->CanBeCanceled());
				GradAbilityCDO->CancelAbility(AbilitySpec.Handle, AbilityActorInfo.Get(), FGameplayAbilityActivationInfo(), bReplicateCancelAbility);
			}
		}
	}
}

void UGradAbilitySystemComponent::SetTagRelationshipMapping(UGradAbilityTagRelationshipMapping* NewMapping)
{
	TagRelationshipMapping = NewMapping;
}

void UGradAbilitySystemComponent::GetAdditionalActivationTagRequirements(const FGameplayTagContainer& AbilityTags, FGameplayTagContainer& OutActivationRequired, FGameplayTagContainer& OutActivationBlocked) const
{
	if (TagRelationshipMapping)
	{
		TagRelationshipMapping->GetRequiredAndBlockedActivationTags(AbilityTags, &OutActivationRequired, &OutActivationBlocked);
	}
}

void UGradAbilitySystemComponent::AbilityInputTagPressed(const FGameplayTag& InputTag)
{
	if (InputTag.IsValid())
	{
		// ���� GameplayAbilitySpec�� ��ȸ
		for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
		{
			// Ability�� �����ϰ�, DynamicAbilityTags�� InputTag�� ���� ���, InputPressed/Held�� �־� Ability ó���� ����Ѵ�
			if (AbilitySpec.Ability && (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag)))
			{
				InputPressedSpecHandles.AddUnique(AbilitySpec.Handle);
				InputHeldSpecHandles.AddUnique(AbilitySpec.Handle);
			}
		}
	}
}

void UGradAbilitySystemComponent::AbilityInputTagReleased(const FGameplayTag& InputTag)
{
	if (InputTag.IsValid())
	{
		for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
		{
			if (AbilitySpec.Ability && (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag)))
			{
				// Released�� �߰��ϰ�, Held������ �������ش�
				InputReleasedSpecHandles.AddUnique(AbilitySpec.Handle);
				InputHeldSpecHandles.Remove(AbilitySpec.Handle);
			}
		}
	}
}

void UGradAbilitySystemComponent::ProcessAbilityInput(float DeltaTime, bool bGamePaused)
{
	TArray<FGameplayAbilitySpecHandle> AbilitiesToActivate;

	// InputHeldSpecHandles�� ���� Ability ó���� ���� AbilitiesToActivate�� �߰��Ѵ�
	for (const FGameplayAbilitySpecHandle& SpecHandle : InputHeldSpecHandles)
	{
		// FindAbilitySpecFromHandle Ȯ��:
		// - ActivatableAbilities�� Handle �� �񱳸� ���� GameplayAbilitySpec�� ��ȯ�Ѵ�
		if (const FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(SpecHandle))
		{
			if (AbilitySpec->Ability && !AbilitySpec->IsActive())
			{
				const UGradGameplayAbility* GradAbilityCDO = CastChecked<UGradGameplayAbility>(AbilitySpec->Ability);

				// ActivationPolicy�� WhileInputActive �Ӽ��̸� Ȱ��ȭ�� ���
				if (GradAbilityCDO->ActivationPolicy == EGradAbilityActivationPolicy::WhileInputActive)
				{
					AbilitiesToActivate.AddUnique(AbilitySpec->Handle);
				}
			}
		}
	}

	for (const FGameplayAbilitySpecHandle& SpecHandle : InputPressedSpecHandles)
	{
		if (FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(SpecHandle))
		{
			if (AbilitySpec->Ability)
			{
				AbilitySpec->InputPressed = true;

				if (AbilitySpec->IsActive())
				{
					// �̹� Ability�� Ȱ��ȭ�Ǿ� ���� ���, Input Event(InputPressed)�� ȣ��
					// - AbilitySpecInputPressed Ȯ��
					AbilitySpecInputPressed(*AbilitySpec);
				}
				else
				{
					const UGradGameplayAbility* GradAbilityCDO = CastChecked<UGradGameplayAbility>(AbilitySpec->Ability);

					// ActivationPolicy�� OnInputTriggered �Ӽ��̸� Ȱ��ȭ�� ���
					if (GradAbilityCDO->ActivationPolicy == EGradAbilityActivationPolicy::OnInputTriggered)
					{
						AbilitiesToActivate.AddUnique(AbilitySpec->Handle);
					}
				}
			}
		}
	}

	// ��ϵ� AbilitiesToActivate�� �Ѳ����� ��� ����:
	for (const FGameplayAbilitySpecHandle& AbilitySpecHandle : AbilitiesToActivate)
	{
		// ��� ���� �� ����Ǿ��ٸ�, CallActivate ȣ��� BP�� Activate ��尡 ����� ����
		TryActivateAbility(AbilitySpecHandle);
	}

	// �̹� �����ӿ� Release�Ǿ��ٸ�, ���� GameplayAbility ó��:
	for (const FGameplayAbilitySpecHandle& SpecHandle : InputReleasedSpecHandles)
	{
		if (FGameplayAbilitySpec* AbilitySpec = FindAbilitySpecFromHandle(SpecHandle))
		{
			if (AbilitySpec->Ability)
			{
				AbilitySpec->InputPressed = false;
				if (AbilitySpec->IsActive())
				{
					AbilitySpecInputReleased(*AbilitySpec);
				}
			}
		}
	}

	// InputHeldSpecHandles�� InputReleasedSpecHandles �߰��ɶ� ���ŵȴ�!
	InputPressedSpecHandles.Reset();
	InputReleasedSpecHandles.Reset();
}

bool UGradAbilitySystemComponent::IsActivationGroupBlocked(EGradAbilityActivationGroup Group) const
{
	bool bBlocked = false;

	switch (Group)
	{
	case EGradAbilityActivationGroup::Independent:
		// Independent abilities are never blocked.
		bBlocked = false;
		break;

	case EGradAbilityActivationGroup::Exclusive_Replaceable:
	case EGradAbilityActivationGroup::Exclusive_Blocking:
		// Exclusive abilities can activate if nothing is blocking.
		bBlocked = (ActivationGroupCounts[(uint8)EGradAbilityActivationGroup::Exclusive_Blocking] > 0);
		break;

	default:
		checkf(false, TEXT("IsActivationGroupBlocked: Invalid ActivationGroup [%d]\n"), (uint8)Group);
		break;
	}

	return bBlocked;
}

void UGradAbilitySystemComponent::AddAbilityToActivationGroup(EGradAbilityActivationGroup Group, UGradGameplayAbility* GradAbility)
{
	check(GradAbility);
	check(ActivationGroupCounts[(uint8)Group] < INT32_MAX);

	ActivationGroupCounts[(uint8)Group]++;

	const bool bReplicateCancelAbility = false;

	switch (Group)
	{
	case EGradAbilityActivationGroup::Independent:
		// Independent abilities do not cancel any other abilities.
		break;

	case EGradAbilityActivationGroup::Exclusive_Replaceable:
	case EGradAbilityActivationGroup::Exclusive_Blocking:
		CancelActivationGroupAbilities(EGradAbilityActivationGroup::Exclusive_Replaceable, GradAbility, bReplicateCancelAbility);
		break;

	default:
		checkf(false, TEXT("AddAbilityToActivationGroup: Invalid ActivationGroup [%d]\n"), (uint8)Group);
		break;
	}

	const int32 ExclusiveCount = ActivationGroupCounts[(uint8)EGradAbilityActivationGroup::Exclusive_Replaceable] + ActivationGroupCounts[(uint8)EGradAbilityActivationGroup::Exclusive_Blocking];
	if (!ensure(ExclusiveCount <= 1))
	{
		UE_LOG(LogGrad, Error, TEXT("AddAbilityToActivationGroup: Multiple exclusive abilities are running."));
	}
}

void UGradAbilitySystemComponent::RemoveAbilityFromActivationGroup(EGradAbilityActivationGroup Group, UGradGameplayAbility* GradAbility)
{
	check(GradAbility);
	check(ActivationGroupCounts[(uint8)Group] > 0);

	ActivationGroupCounts[(uint8)Group]--;
}

void UGradAbilitySystemComponent::CancelActivationGroupAbilities(EGradAbilityActivationGroup Group, UGradGameplayAbility* IgnoreGradAbility, bool bReplicateCancelAbility)
{
	auto ShouldCancelFunc = [this, Group, IgnoreGradAbility](const UGradGameplayAbility* GradAbility, FGameplayAbilitySpecHandle Handle)
		{
			return ((GradAbility->GetActivationGroup() == Group) && (GradAbility != IgnoreGradAbility));
		};

	CancelAbilitiesByFunc(ShouldCancelFunc, bReplicateCancelAbility);
}

void UGradAbilitySystemComponent::AbilitySpecInputPressed(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputPressed(Spec);

	// We don't support UGameplayAbility::bReplicateInputDirectly.
	// Use replicated events instead so that the WaitInputPress ability task works.
	if (Spec.IsActive())
	{
		// Invoke the InputPressed event. This is not replicated here. If someone is listening, they may replicate the InputPressed event to the server.
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, Spec.Handle, Spec.ActivationInfo.GetActivationPredictionKey());
	}
}

void UGradAbilitySystemComponent::AbilitySpecInputReleased(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputReleased(Spec);

	// We don't support UGameplayAbility::bReplicateInputDirectly.
	// Use replicated events instead so that the WaitInputRelease ability task works.
	if (Spec.IsActive())
	{
		// Invoke the InputReleased event. This is not replicated here. If someone is listening, they may replicate the InputReleased event to the server.
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, Spec.Handle, Spec.ActivationInfo.GetActivationPredictionKey());
	}
}

void UGradAbilitySystemComponent::ApplyAbilityBlockAndCancelTags(const FGameplayTagContainer& AbilityTags, UGameplayAbility* RequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& BlockTags, bool bExecuteCancelTags, const FGameplayTagContainer& CancelTags)
{
	FGameplayTagContainer ModifiedBlockTags = BlockTags;
	FGameplayTagContainer ModifiedCancelTags = CancelTags;

	if (TagRelationshipMapping)
	{
		// Use the mapping to expand the ability tags into block and cancel tag
		TagRelationshipMapping->GetAbilityTagsToBlockAndCancel(AbilityTags, &ModifiedBlockTags, &ModifiedCancelTags);
	}

	Super::ApplyAbilityBlockAndCancelTags(AbilityTags, RequestingAbility, bEnableBlockTags, ModifiedBlockTags, bExecuteCancelTags, ModifiedCancelTags);

	//@TODO: Apply any special logic like blocking input or movement
}
