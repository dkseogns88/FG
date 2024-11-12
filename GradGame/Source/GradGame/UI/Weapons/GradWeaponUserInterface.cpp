// Fill out your copyright notice in the Description page of Project Settings.

#include "GradWeaponUserInterface.h"
#include "GradGame/Equipment/GradEquipmentManagerComponent.h"
#include "GradGame/Weapons/GradWeaponInstance.h"

UGradWeaponUserInterface::UGradWeaponUserInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{}

void UGradWeaponUserInterface::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	// Pawn�� ��������
	if (APawn* Pawn = GetOwningPlayerPawn())
	{
		// EquipmentManaterComponent�� Ȱ���Ͽ�, WeaponInstance�� ��������
		if (UGradEquipmentManagerComponent* EquipmentManager = Pawn->FindComponentByClass<UGradEquipmentManagerComponent>())
		{
			if (UGradWeaponInstance* NewInstance = EquipmentManager->GetFirstInstanceOfType<UGradWeaponInstance>())
			{
				if (NewInstance != CurrentInstance && NewInstance->GetInstigator() != nullptr)
				{
					// ���� ������Ʈ���ְ�, OnWeaponChanged ȣ�� ����
					UGradWeaponInstance* OldWeapon = CurrentInstance;
					CurrentInstance = NewInstance;
					OnWeaponChanged(OldWeapon, CurrentInstance);
				}
			}
		}
	}
}