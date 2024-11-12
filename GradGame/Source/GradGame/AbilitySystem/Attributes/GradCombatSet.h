// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GradAttributeSet.h"
#include "GradCombatSet.generated.h"

/**
 * CombatSet�� �̸� �״��, ������ ���õ� Attribute�� ��� �ִ� Set�̴�:
 * - ����� BaseHeal�� ������, BaseDamage�� �߰��Ͽ�, ������ CombatSet�� �ʿ��� AttributeSet�� ���� �����ϴ�
 */
UCLASS()
class GRADGAME_API UGradCombatSet : public UGradAttributeSet
{
	GENERATED_BODY()
public:
	UGradCombatSet();

	ATTRIBUTE_ACCESSORS(UGradCombatSet, BaseDamage);
	ATTRIBUTE_ACCESSORS(UGradCombatSet, BaseHeal);


	// The base amount of damage to apply in the damage execution.
	UPROPERTY(BlueprintReadOnly, Category = "Grad|Combat", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData BaseDamage;

	/**
	 * FGameplayAttribute�� �����ϴ� ���� AttributeSet�� �ִ� �������̴� (float���� �ش� Struct�� ����ϴ� ���� ��õ)
	 * - Healing�� ������ �ǹ��Ѵ�
	 * - e.g. 5.0f���, Period�� 5�� Healing�ȴٴ� �ǹ�
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Grad|Combat")
	FGameplayAttributeData BaseHeal;
};
