// Fill out your copyright notice in the Description page of Project Settings.

#include "GradHealthSet.h"
#include "GameplayEffectExtension.h"


#include "GameFramework/Character.h"
#include "AbilitySystem/GradAbilitySystemComponent.h"
#include "GradGameplayTags.h"
#include "AbilitySystem/Attributes/GradAttributeSet.h"

UGradHealthSet::UGradHealthSet() : Super(), Health(100), MaxHealth(100)
{
}

void UGradHealthSet::ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const
{
	// HealthAttribute�� [0,GetMaxHealth]�� ����
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	// MaxHealthAttribute�� [1.0, inf]�� ����:
	// - ��, MaxHealth�� 1�̸��� �� �� ����!
	else if (Attribute == GetMaxHealthAttribute())
	{
		NewValue = FMath::Max(NewValue, 1.0f);
	}
}

void UGradHealthSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);
	ClampAttribute(Attribute, NewValue);
}

void UGradHealthSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	ClampAttribute(Attribute, NewValue);
}
PRAGMA_DISABLE_OPTIMIZATION
bool UGradHealthSet::PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data)
{
	return Super::PreGameplayEffectExecute(Data);
}

void UGradHealthSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	float MinimumHealth = 0.0f;

	// *** Healing�� ������Ʈ �� ���, Healing�� Health�� �����ϰ�, Healing�� �ʱ�ȭ���ش�
	if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		float BeforeHelath = GetHealth();
		// Convert into -Health and then clamp
		SetHealth(FMath::Clamp(GetHealth() - GetDamage(), MinimumHealth, GetMaxHealth()));
		SetDamage(0.0f);
		float NewHelath = GetHealth();

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("BeforeHealth: %.f,  NewHealth: %.f"), BeforeHelath, NewHelath));
	}
	else if (Data.EvaluatedData.Attribute == GetHealingAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth() + GetHealing(), MinimumHealth, GetMaxHealth()));
		SetHealing(0.0f);
	}
	// Health ������Ʈ�� ���, [0,MaxHealth]�� ���߾�����
	else if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), MinimumHealth, GetMaxHealth()));
	}
}
PRAGMA_ENABLE_OPTIMIZATION