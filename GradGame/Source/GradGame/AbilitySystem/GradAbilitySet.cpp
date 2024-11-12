// Fill out your copyright notice in the Description page of Project Settings.

#include "GradAbilitySet.h"
#include "GradAbilitySystemComponent.h"
#include "Abilities/GradGameplayAbility.h"

void FGradAbilitySet_GrantedHandles::AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle)
{
	if (Handle.IsValid())
	{
		AbilitySpecHandles.Add(Handle);
	}
}

void FGradAbilitySet_GrantedHandles::TakeFromAbilitySystem(UGradAbilitySystemComponent* GradASC)
{
	if (!GradASC->IsOwnerActorAuthoritative())
	{
		return;
	}

	for (const FGameplayAbilitySpecHandle& Handle : AbilitySpecHandles)
	{
		if (Handle.IsValid())
		{
			// ActivatableAbilities���� �����Ѵ�:
			// - ClearAbility() �Լ��� ��� ���� ����
			GradASC->ClearAbility(Handle);
		}
	}
}

UGradAbilitySet::UGradAbilitySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{}

void UGradAbilitySet::GiveToAbilitySystem(UGradAbilitySystemComponent* GradASC, FGradAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject)
{
	check(GradASC);

	if (!GradASC->IsOwnerActorAuthoritative())
	{
		return;
	}

	// gameplay abilities�� ���:
	for (int32 AbilityIndex = 0; AbilityIndex < GrantedGameplayAbilities.Num(); ++AbilityIndex)
	{
		const FGradAbilitySet_GameplayAbility& AbilityToGrant = GrantedGameplayAbilities[AbilityIndex];
		if (!IsValid(AbilityToGrant.Ability))
		{
			continue;
		}

		// GiveAbility()���� ���� EGameplayAbilityInstancingPolicy::InstancedPerActor���, ���������� Instance�� ���������� �׷��� ������ CDO�� �Ҵ��Ѵ�
		// - �̸� ���� UObject ������ �ٿ� UObject�� �þ�� ���� �þ�� ������/�޸��� ���ϸ� ���� �� �ִ�
		UGradGameplayAbility* AbilityCDO = AbilityToGrant.Ability->GetDefaultObject<UGradGameplayAbility>();

		// AbilitySpec�� GiveAbility�� ���޵Ǿ�, ActivatbleAbilities�� �߰��ȴ�
		FGameplayAbilitySpec AbilitySpec(AbilityCDO, AbilityToGrant.AbilityLevel);
		AbilitySpec.SourceObject = SourceObject;
		AbilitySpec.DynamicAbilityTags.AddTag(AbilityToGrant.InputTag);

		// GiveAbility()�� ��� ���캸���� ����:
		const FGameplayAbilitySpecHandle AbilitySpecHandle = GradASC->GiveAbility(AbilitySpec);
		if (OutGrantedHandles)
		{
			OutGrantedHandles->AddAbilitySpecHandle(AbilitySpecHandle);
		}
	}
}