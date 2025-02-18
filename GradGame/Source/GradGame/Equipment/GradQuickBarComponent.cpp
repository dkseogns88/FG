#include "GradQuickBarComponent.h"
#include "GradEquipmentDefinition.h"
#include "GradEquipmentInstance.h"
#include "GradEquipmentManagerComponent.h"
#include "GradGame/Inventory/GradInventoryFragment_EquippableItem.h"
#include "GradGame/Inventory/GradInventoryItemInstance.h"

UGradQuickBarComponent::UGradQuickBarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UGradQuickBarComponent::BeginPlay()
{
	// NumSlots에 따라 미리 Slots을 할당한다
	if (Slots.Num() < NumSlots)
	{
		Slots.AddDefaulted(NumSlots - Slots.Num());
	}

	// 반드시 BeginPlay() 불러주는 것을 까먹지 말자!
	Super::BeginPlay();
}

UGradEquipmentManagerComponent* UGradQuickBarComponent::FindEquipmentManager() const
{
	if (AController* OwnerController = Cast<AController>(GetOwner()))
	{
		if (APawn* Pawn = OwnerController->GetPawn())
		{
			return Pawn->FindComponentByClass<UGradEquipmentManagerComponent>();
		}
	}	

	return nullptr;
}

void UGradQuickBarComponent::UnequipItemInSlot()
{
	// 참고로 QuickBar는 Controller에 붙어있는 Component이지만, EquipmentManagerComponent는 Controller가 소유(Possess)하고 있는 Pawn의 Component이다
	if (UGradEquipmentManagerComponent* EquipmentManager = FindEquipmentManager())
	{
		// 현재 장착된 Item에 있다면,
		if (EquippedItem)
		{
			// EquipementManager를 통해, Pawn의 장비를 해제시킨다
			EquipmentManager->UnequipItem(EquippedItem);

			// 그리고 Controller에도 EquipItem의 상태를 없는 것으로 업데이트한다
			EquippedItem = nullptr;
		}
	}
}

void UGradQuickBarComponent::EquipItemInSlot()
{
	check(Slots.IsValidIndex(ActiveSlotIndex));
	check(EquippedItem == nullptr);
	
	// 현재 활성화된 ActiveSlotIndex를 활용하여 활성화된 InventoryItemInstance를 찾는다
	if (UGradInventoryItemInstance* SlotItem = Slots[ActiveSlotIndex])
	{
		// Slot Item을 통해 (InventoryItemInstance) InventoryFragment_EquippableItem의 Fragment를 찾는다:
		// - 찾는 것이 실패했다면, 장착할 수 없는 Inventory Item임을 의미한다
		if (const UGradInventoryFragment_EquippableItem* EquipInfo = SlotItem->FindFragmentByClass<UGradInventoryFragment_EquippableItem>())
		{
			// EquippableItem에서 EquipmentDefinition을 찾는다:
			// - EquipmentDefinition이 있어야, 장착할 수 있다
			TSubclassOf<UGradEquipmentDefinition> EquipDef = EquipInfo->EquipmentDefinition;
			if (EquipDef)
			{
				// 아래는 Unequip이랑 비슷하게 EquipmentManager를 통해 장착한다
				if (UGradEquipmentManagerComponent* EquipmentManager = FindEquipmentManager())
				{
					EquippedItem = EquipmentManager->EquipItem(EquipDef);

					if (EquippedItem)
					{
						// EquippedItem에는 앞서 보았던 Instiagor로 Slot을 대상으로 넣는다
						EquippedItem->Instigator = SlotItem;
					}
				}
			}
		}
	}
}

void UGradQuickBarComponent::AddItemToSlot(int32 SlotIndex, UGradInventoryItemInstance* Item)
{
	// 해당 로직을 보면, Slosts는 Add로 동적 추가가 아닌, Index에 바로 넣는다:
	// - 그럼 미리 Pre-size 했다는 것인데 이는 BeginPlay()에서 진행한다
	if (Slots.IsValidIndex(SlotIndex) && (Item != nullptr))
	{
		if (Slots[SlotIndex] == nullptr)
		{
			Slots[SlotIndex] = Item;
		}
	} 
}

void UGradQuickBarComponent::SetActiveSlotIndex(int32 NewIndex)
{
	if (Slots.IsValidIndex(NewIndex) && (ActiveSlotIndex != NewIndex))
	{
		// UnequipItem/EquipItem을 통해, NewIndex를 통해 할당된 Item을 창착 및 업데이트를 진행한다
		UnequipItemInSlot();
		ActiveSlotIndex = NewIndex;
		EquipItemInSlot();
	}
}

UGradInventoryItemInstance* UGradQuickBarComponent::RemoveItemFromSlot(int32 SlotIndex)
{
	UGradInventoryItemInstance* Result = nullptr;

	if (ActiveSlotIndex == SlotIndex)
	{
		UnequipItemInSlot();
		ActiveSlotIndex = -1;
	}

	if (Slots.IsValidIndex(SlotIndex))
	{
		Result = Slots[SlotIndex];

		if (Result != nullptr)
		{
			Slots[SlotIndex] = nullptr;
		}
	}

	return Result;
}
