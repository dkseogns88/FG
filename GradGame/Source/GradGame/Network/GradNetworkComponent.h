// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"
#include "Protocol.pb.h"
#include "../Inventory/GradInventoryManagerComponent.h"
#include "GradNetworkComponent.generated.h"

class UGradEquipmentManagerComponent;
class UGradEquipmentInstance;


UCLASS(BlueprintType, Blueprintable, Meta = (BlueprintSpawnableComponent))
class GRADGAME_API UGradNetworkComponent : public UPawnComponent
{
	GENERATED_BODY()
public:
	UGradNetworkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	~UGradNetworkComponent();

	UGradEquipmentManagerComponent* FindEquipmentManager() const;
	void UnequipItemInSlot();
	void EquipItemInSlot();

	UFUNCTION(BlueprintCallable)
	void AddItemToSlot(int32 SlotIndex, UGradInventoryItemInstance* Item);

	UFUNCTION(BlueprintCallable, Category = "GradNet")
	void SetActiveSlotIndex(int32 NewIndex);

	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	TArray<UGradInventoryItemInstance*> GetSlots() const
	{
		return Slots;
	}

	UFUNCTION(BlueprintCallable)
	UGradInventoryItemInstance* RemoveItemFromSlot(int32 SlotIndex);

	void SetMoveState(Protocol::MoveState State);
	void SetObjectInfo(const Protocol::ObjectInfo& Info);
	void SetPosInfo(const Protocol::PosInfo& Info);
	void SetStatInfo(const Protocol::StatInfo& Info);

	Protocol::MoveState GetMoveState() { return PosInfo->move_state(); }
	Protocol::ObjectInfo* GetObjectInfo() { return ObjectInfo; }
	Protocol::PosInfo* GetPosInfo() { return PosInfo; }
	Protocol::StatInfo* GetStatInfo() { return StatInfo; }
	uint64 GetObjectId() { return ObjectInfo->pos_info().object_id(); }

public:
	class Protocol::ObjectInfo* ObjectInfo;
	class Protocol::PosInfo* PosInfo;
	class Protocol::StatInfo* StatInfo;

public:
	UPROPERTY()
	int32 NumSlots = 3;

	UPROPERTY()
	TArray<TObjectPtr<UGradInventoryItemInstance>> Slots;

	UPROPERTY()
	int32 ActiveSlotIndex = -1;

	/** 현재 장착한 장비 정보 */
	UPROPERTY()
	TObjectPtr<UGradEquipmentInstance> EquippedItem;

};
