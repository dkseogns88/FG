// Fill out your copyright notice in the Description page of Project Settings.


#include "GradAbilitySystemComponent.h"
#include "Abilities/GradGameplayAbility.h"
#include "GameFramework/Pawn.h"
#include "GradGame/Animation/GradAnimInstance.h"
#include "AbilitySystem/GradAbilityTagRelationshipMapping.h"

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
