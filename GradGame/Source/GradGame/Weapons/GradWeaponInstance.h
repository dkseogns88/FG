// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GradGame/Cosmetics/GradCosmeticAnimationTypes.h"
#include "GradGame/Equipment/GradEquipmentInstance.h"
#include "GradWeaponInstance.generated.h"

/**
 * 
 */
UCLASS()
class GRADGAME_API UGradWeaponInstance : public UGradEquipmentInstance
{
	GENERATED_BODY()
public:
	UGradWeaponInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** Weapon�� ������ AnimLayer�� �����Ͽ� ��ȯ */
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = Animation)
	TSubclassOf<UAnimInstance> PickBestAnimLayer(bool bEquipped, const FGameplayTagContainer& CosmeticTags) const;


	/** Weapon�� Equip/Unequip�� ���� Animation Set ������ ��� �ִ� */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Animation)
	FGradAnimLayerSelectionSet EquippedAnimSet;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Animation)
	FGradAnimLayerSelectionSet UnequippedAnimSet;
};
