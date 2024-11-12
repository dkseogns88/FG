// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Animation/AnimInstance.h"
#include "GradAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class GRADGAME_API UGradAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:

	/**
	* UAnimInstance's interface
	*/
	virtual void NativeInitializeAnimation() override;

	/**
	 * member methods
	 */
	void InitializeWithAbilitySystem(UAbilitySystemComponent* ASC);

	/** �ش� �Ӽ����� Grad�� AnimBP���� ���Ǵ� ���̹Ƿ� ���������� */
	UPROPERTY(BlueprintReadOnly, Category = "Character State Data")
	float GroundDistance = -1.0f;

	/** GameplayTag�� AnimInstance�� �Ӽ����� �������ش� */
	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;
};
