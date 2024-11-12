// Fill out your copyright notice in the Description page of Project Settings.

#include "GradGameplayAbility_FromEquipment.h"
#include "GradEquipmentInstance.h"
#include "GradGame/Inventory/GradInventoryItemInstance.h"



#include "GradGame/Character/GradCharacter.h"
#include "GradGame/Network/GradNetworkComponent.h"
#include "GradGame/Network/NetworkManager.h"
#include "GradGame/Network/GradNetCharacter.h"

UGradEquipmentInstance* UGradGameplayAbility_FromEquipment::GetAssociatedEquipment() const
{
	// CurrentActorInfo�� AbilitySystemComponent�� CurrentSpecHandle�� Ȱ���Ͽ�, GameplayAbilitySpec�� ������:
	// - CurrentSpecHandle�� SetCurrentActorInfo() ȣ���� ��, Handle ���� �޾Ƽ� �����:
	// - CurrentSpecHandle�� CurrentActorInfo�� ���� ��
	// - FindAbilitySpecFromHandle�� GiveAbility�� ���� ActivatableAbilities�� ��ȸ�Ͽ� GameplayAbilitySpec�� ã�Ƴ�
	if (FGameplayAbilitySpec* Spec = UGameplayAbility::GetCurrentAbilitySpec())
	{
		// GameplayAbility_FromEquipment�� EquipmentInstance�κ��� GiveAbility�� ���������Ƿ�, SourceObject�� EquipmentInstance�� ����Ǿ� ����
		return Cast<UGradEquipmentInstance>(Spec->SourceObject.Get());
	}
	return nullptr;
}

UGradInventoryItemInstance* UGradGameplayAbility_FromEquipment::GetAssociatedItem() const
{
	if (UGradEquipmentInstance* Equipment = GetAssociatedEquipment())
	{
		// In 
		// , equipment is equipped by inventory item instance:
		// - so, equipment's instigator should be inventory item instance
		// - otherwise, it will return nullptr by failing casting to GradInventoryItemInstance
		return Cast<UGradInventoryItemInstance>(Equipment->GetInstigator());
	}
	return nullptr;
}

void UGradGameplayAbility_FromEquipment::TestReload()
{
	AGradCharacter* const AvatarPawn = Cast<AGradCharacter>(GetAvatarActorFromActorInfo());
	if (AvatarPawn)
	{
		if (UGradNetworkComponent* NCP = AvatarPawn->FindComponentByClass<UGradNetworkComponent>())
		{
			Protocol::PosInfo* PosInfo = NCP->GetPosInfo();

			Protocol::C_RELOAD ReloadPkt;
			ReloadPkt.set_object_id(PosInfo->object_id());

			for (auto World : GEngine->GetWorldContexts())
			{
				if (const UGameInstance* GameInstance = World.World()->GetGameInstance())
				{
					if (UNetworkManager* NetworkManager = GameInstance->GetSubsystem<UNetworkManager>())
					{
						NetworkManager->SendPacket(ReloadPkt);
						return;
					}
				}
			}
		}
	}
}
