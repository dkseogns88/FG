// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GradInventoryItemDefinition.generated.h"

class UGradInventoryItemInstance;

/**
 * Inventory�� ���� Fragment�� Ȯ �ʹ��� ���� �� �ִ�:
 * - Grad���� ����ϴ� ���ø� ���� �����غ���:
 *   - UGradInventoryFragment_EquippableItem�� EquipmentItemDefinition�� ������ ������, ���� ������ �������� �ǹ��Ѵ�
 *   - UGradInventoryFramgent_SetStats�� �����ۿ� ���� ������ ������ �ִ�
 *     - Rifle�� ���� SetStats���� �Ѿ�(Ammo)�� ���� ���� �ִ�ġ�� ���� ���� ��ź ���� ���÷� �� �� �ִ�
 *	 - ���...
 */
UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class UGradInventoryItemFragment : public UObject
{
	GENERATED_BODY()
public:
	/** interface to call when inventory item instance is added to UGradInventoryManagerComponent's InventoryList */
	virtual void OnInstanceCreated(UGradInventoryItemInstance* Instance) const {}
};

/**
 * 
 */
UCLASS(Blueprintable)
class GRADGAME_API UGradInventoryItemDefinition : public UObject
{
	GENERATED_BODY()
public:
	UGradInventoryItemDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	const UGradInventoryItemFragment* FindFragmentByClass(TSubclassOf<UGradInventoryItemFragment> FragmentClass) const;

	/** Inventory Item ����(��Ÿ) �̸� **/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Display)
	FText DisplayName;

	/** Inventory Item�� Component�� Fragment�� �ν��ϸ� �ȴ� */
	UPROPERTY(EditDefaultsOnly, Instanced, BlueprintReadOnly, Category = Display)
	TArray<TObjectPtr<UGradInventoryItemFragment>> Fragments;
};
