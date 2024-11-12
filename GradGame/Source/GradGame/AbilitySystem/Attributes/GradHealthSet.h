// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GradAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GradHealthSet.generated.h"

/**
 * 
 */
UCLASS()
class GRADGAME_API UGradHealthSet : public UGradAttributeSet
{
	GENERATED_BODY()
public:
	UGradHealthSet();

	/**
	* �ռ� GradAttributeSet���� �����ߴ�, ATTRIBUTE_ACCESSORS�� ����, �Ʒ� ������ �⺭������ �Ȱ��� �̸��� �����Ѵ�
	* - ATTRIBUTE_ACCESSORS�� Macro�� ���Ǻκ��� �ѹ� ���캸��	
	*/
	ATTRIBUTE_ACCESSORS(UGradHealthSet, Health);
	ATTRIBUTE_ACCESSORS(UGradHealthSet, MaxHealth);
	ATTRIBUTE_ACCESSORS(UGradHealthSet, Healing);
	ATTRIBUTE_ACCESSORS(UGradHealthSet, Damage);

	/**
	* Attribute�� ���� ClampAttribute()�� Ȱ���Ͽ�, ���� ������ ���������ֱ� ����
	* PreAttributeBaseChange�� PreAttributeChange �������̵�
	*/
	void ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const;
	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	/**
	* GameplayEffect�� HealthSet�� Attribute�� �����ϱ� ���� �Ҹ��� �ݹ��Լ��̴�:
	* - �̴� AttributeSet�� �ּ����� �� �����ֵ���, Healing�� ������Ʈ�Ǹ�, Health�� Healing�� �����Ͽ� ������Ʈ �����ϴ�
	*/
	virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	/** ���� ü�� */
	UPROPERTY(BlueprintReadOnly, Category = "Grad|Health")
	FGameplayAttributeData Health;

	/** ü�� �ִ�ġ */
	UPROPERTY(BlueprintReadOnly, Category = "Grad|Health")
	FGameplayAttributeData MaxHealth;

	/** ü�� ȸ��ġ */
	UPROPERTY(BlueprintReadOnly, Category = "Grad|Health")
	FGameplayAttributeData Healing;

	// Incoming damage. This is mapped directly to -Health
	UPROPERTY(BlueprintReadOnly, Category = "Grad|Health", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData Damage;
};
