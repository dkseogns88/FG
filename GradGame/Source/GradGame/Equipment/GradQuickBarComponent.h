// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ControllerComponent.h"
#include "GradQuickBarComponent.generated.h"

class UGradEquipmentManagerComponent;
class UGradEquipmentInstance;
class UGradInventoryItemInstance;

/**
 * HUD�� QuckBar�� �����ϸ� �ȴ�:
 * - ���� MMORPG������ ShortCut HUD�� �����ϸ� �ȴ�
 *
 * �ش� Component�� ControllerComponent�μ�, PlayerController�� ���� ���۰� �� �ϳ��� �����ص� �ȴ�
 * - HUD(Slate)�� Inventory/Equipment(Gameplay)�� �ٸ�(Bridge) ��Ȱ�ϴ� Component�� ��������
 * - �ش� Component�� Grad�� HUD �� Slate Widget�� �ٷ�鼭 �ٽ� ���Ե� �����̴�
 */
UCLASS()
class GRADGAME_API UGradQuickBarComponent : public UControllerComponent
{
	GENERATED_BODY()
public:
	UGradQuickBarComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	* ControllerComponent interface
	*/
	virtual void BeginPlay() override;

	/**
	* member methods
	*/
	UGradEquipmentManagerComponent* FindEquipmentManager() const;
	void UnequipItemInSlot();
	void EquipItemInSlot();

	UFUNCTION(BlueprintCallable)
	void AddItemToSlot(int32 SlotIndex, UGradInventoryItemInstance* Item);

	UFUNCTION(BlueprintCallable, Category = "Grad")
	void SetActiveSlotIndex(int32 NewIndex);

	/** HUD QuickBar Slot ���� */
	UPROPERTY()
	int32 NumSlots = 3;

	/** HUD QuickBar Slot ����Ʈ */
	UPROPERTY()
	TArray<TObjectPtr<UGradInventoryItemInstance>> Slots;

	/** ���� Ȱ��ȭ�� Slot Index (�Ƹ� Grad�� �� �Ѱ��� Slot�� Ȱ��ȭ�Ǵ°�����?) */
	UPROPERTY()
	int32 ActiveSlotIndex = -1;

	/** ���� ������ ��� ���� */
	UPROPERTY()
	TObjectPtr<UGradEquipmentInstance> EquippedItem;
};
