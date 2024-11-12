// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"
#include "GradGame/AbilitySystem/GradAbilitySet.h"
#include "GradEquipmentManagerComponent.generated.h"

/** forward declarations */
class UGradEquipmentDefinition;
class UGradEquipmentInstance;

USTRUCT(BlueprintType)
struct FGradAppliedEquipmentEntry
{
	GENERATED_BODY()

	/** �������� ���� ��Ÿ ������ */
	UPROPERTY()
	TSubclassOf<UGradEquipmentDefinition> EquipmentDefinition;

	/** EquipmentDefinition�� ���� ������ �ν��Ͻ� */
	UPROPERTY()
	TObjectPtr<UGradEquipmentInstance> Instance = nullptr;

	/** ���⿡ �Ҵ�� ��밡���� GameplayAbility */
	UPROPERTY()
	FGradAbilitySet_GrantedHandles GrantedHandles;
};

/**
 * ����� EquipmentInstance�� �ν��Ͻ��� Entry���� �����ϰ� �ִ�:
 * - GradEquipmentList�� ������ ��ü�� �����Ѵٰ� ���� �ȴ�
 */
USTRUCT(BlueprintType)
struct FGradEquipmentList
{
	GENERATED_BODY()

	FGradEquipmentList(UActorComponent* InOwnerComponent = nullptr)
		: OwnerComponent(InOwnerComponent)
	{}

	UGradEquipmentInstance* AddEntry(TSubclassOf<UGradEquipmentDefinition> EquipmentDefinition);
	void RemoveEntry(UGradEquipmentInstance* Instance);

	UGradAbilitySystemComponent* GetAbilitySystemComponent() const;

	/** �������� ���� ���� ����Ʈ */
	UPROPERTY()
	TArray<FGradAppliedEquipmentEntry> Entries;

	UPROPERTY()
	TObjectPtr<UActorComponent> OwnerComponent;
};

/**
 * Pawn�� Component�μ� �������� ���� ������ ����Ѵ�
 */
UCLASS()
class GRADGAME_API UGradEquipmentManagerComponent : public UPawnComponent
{
	GENERATED_BODY()
public:
	UGradEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	* Network methods
	*/
	static UGradEquipmentManagerComponent* FindEquipManagerComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UGradEquipmentManagerComponent>() : nullptr); }

	UGradEquipmentInstance* EquipItem(TSubclassOf<UGradEquipmentDefinition> EquipmentDefinition);
	void UnequipItem(UGradEquipmentInstance* ItemInstance);

	/** ������ �� ó�� ���� ��ȯ ������ NULL */
	UGradEquipmentInstance* GetFirstInstanceOfType(TSubclassOf<UGradEquipmentInstance> InstanceType);

	template <typename T>
	T* GetFirstInstanceOfType()
	{
		return (T*)GetFirstInstanceOfType(T::StaticClass());
	}

	UFUNCTION(BlueprintCallable)
	TArray<UGradEquipmentInstance*> GetEquipmentInstancesOfType(TSubclassOf<UGradEquipmentInstance> InstanceType) const;

	UPROPERTY()
	FGradEquipmentList EquipmentList;
};
