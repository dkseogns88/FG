// Fill out your copyright notice in the Description page of Project Settings.


#include "GradEquipmentManagerComponent.h"
#include "GradEquipmentDefinition.h"
#include "GradEquipmentInstance.h"
#include "GradEquipmentInstance.h"
#include "GradGame/Character/GradCharacter.h"
#include "GradGame/Network/GradNetCharacter.h"
#include "GradGame/AbilitySystem/GradAbilitySystemComponent.h"

UGradEquipmentInstance* FGradEquipmentList::AddEntry(TSubclassOf<UGradEquipmentDefinition> EquipmentDefinition)
{
	UGradEquipmentInstance* Result = nullptr;
	check(EquipmentDefinition != nullptr);
	check(OwnerComponent);
	check(OwnerComponent->GetOwner()->HasAuthority());

	// EquipmentDefinition�� ��� �������� EditDefaultsOnly�� ���ǵǾ� �־� GetDefault�� ��� �͵� �츮���� �ʿ��� �͵��� ��� ����ִ�
	const UGradEquipmentDefinition* EquipmentCDO = GetDefault<UGradEquipmentDefinition>(EquipmentDefinition);

	TSubclassOf<UGradEquipmentInstance> InstanceType = EquipmentCDO->InstanceType;
	if (!InstanceType)
	{
		InstanceType = UGradEquipmentInstance::StaticClass();
	}

	// Entries�� �߰�������
	FGradAppliedEquipmentEntry& NewEntry = Entries.AddDefaulted_GetRef();
	NewEntry.EquipmentDefinition = EquipmentDefinition;
	NewEntry.Instance = NewObject<UGradEquipmentInstance>(OwnerComponent->GetOwner(), InstanceType);
	Result = NewEntry.Instance;

	UGradAbilitySystemComponent* ASC = GetAbilitySystemComponent();
	if(ASC)
	{
		for (const TObjectPtr<UGradAbilitySet> AbilitySet : EquipmentCDO->AbilitySetsToGrant)
		{
			AbilitySet->GiveToAbilitySystem(ASC, &NewEntry.GrantedHandles, Result);
		}
	}

	// ActorsToSpawn�� ����, Actor���� �ν��Ͻ�ȭ ������
	// - ���? EquipmentInstance��!
	Result->SpawnEquipmentActors(EquipmentCDO->ActorsToSpawn);

	return Result;
}

void FGradEquipmentList::RemoveEntry(UGradEquipmentInstance* Instance)
{
	// �ܼ��� �׳� Entries�� ��ȸ�ϸ�, Instance�� ã�Ƽ�
	for (auto EntryIt = Entries.CreateIterator(); EntryIt; ++EntryIt)
	{
		FGradAppliedEquipmentEntry& Entry = *EntryIt;
		if (Entry.Instance == Instance)
		{
			UGradAbilitySystemComponent* ASC = GetAbilitySystemComponent();
			check(ASC);
			{
				// TakeFromAbilitySystem�� GiveToAbilitySystem �ݴ� ��Ȱ��, ActivatableAbilities���� �����Ѵ�
				Entry.GrantedHandles.TakeFromAbilitySystem(ASC);
			}

			// Actor ���� �۾� �� iterator�� ���� �����ϰ� Array���� ���� ����
			Instance->DestroyEquipmentActors();
			EntryIt.RemoveCurrent();
		}
	}
}

UGradAbilitySystemComponent* FGradEquipmentList::GetAbilitySystemComponent() const
{
	check(OwnerComponent);
	AActor* OwningActor = OwnerComponent->GetOwner();
	if (UGradAbilitySystemComponent* ASC = OwningActor->FindComponentByClass<UGradAbilitySystemComponent>())
	{
		return ASC;
	}

	return nullptr;
}

UGradEquipmentManagerComponent::UGradEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
                                                                                                            , EquipmentList(this)
{
}

UGradEquipmentInstance* UGradEquipmentManagerComponent::EquipItem(TSubclassOf<UGradEquipmentDefinition> EquipmentDefinition)
{
	UGradEquipmentInstance* Result = nullptr;
	if (EquipmentDefinition)
	{
		Result = EquipmentList.AddEntry(EquipmentDefinition);
		if (Result)
		{
			Result->OnEquipped();
		}
	}
	return Result;
}

void UGradEquipmentManagerComponent::UnequipItem(UGradEquipmentInstance* ItemInstance)
{
	if (ItemInstance)
	{
		// �ش� �Լ��� BP�� Event��带 ȣ�����ش� (�ڼ��Ѱ� �ش� �Լ� �����ϸ鼭 ����)
		ItemInstance->OnUnequipped();

		// EquipementList�� �������ش�:
		// - �����ϴ� ������ ���� �߰��Ǿ��� Actor Instance�� ���Ÿ� �����Ѵ�
		EquipmentList.RemoveEntry(ItemInstance);
	}
}

UGradEquipmentInstance* UGradEquipmentManagerComponent::GetFirstInstanceOfType(TSubclassOf<UGradEquipmentInstance> InstanceType)
{
	for (FGradAppliedEquipmentEntry& Entry : EquipmentList.Entries)
	{
		if (UGradEquipmentInstance* Instance = Entry.Instance)
		{
			if (Instance->IsA(InstanceType))
			{
				return Instance;
			}
		}
	}
	return nullptr;
}

TArray<UGradEquipmentInstance*> UGradEquipmentManagerComponent::GetEquipmentInstancesOfType(TSubclassOf<UGradEquipmentInstance> InstanceType) const
{
	TArray<UGradEquipmentInstance*> Results;

	// EquipmentList�� ��ȸ�ϸ�
	for (const FGradAppliedEquipmentEntry& Entry : EquipmentList.Entries)
	{
		if (UGradEquipmentInstance* Instance = Entry.Instance)
		{
			// InstanceType�� �´� Class�̸� Results�� �߰��Ͽ� ��ȯ
			// - �츮�� ���, GradRangedWeaponInstance�� �ɰ���
			if (Instance->IsA(InstanceType))
			{
				Results.Add(Instance);
			}
		}
	}
	return Results;
}
