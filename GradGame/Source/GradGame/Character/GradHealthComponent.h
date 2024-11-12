// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/GameFrameworkComponent.h"
#include "Delegates/Delegate.h"
#include "GradHealthComponent.generated.h"

/** forward declarations */
class UGradAbilitySystemComponent;
class UGradHealthSet;
class UGradHealthComponent;
class AActor;
struct FOnAttributeChangeData;


/** Health ��ȭ �ݹ��� ���� ��������Ʈ */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGradHealth_AttributeChanged, UGradHealthComponent*, HealthComponent, float, OldValue, float, NewValue, AActor*, Instigator);


/**
 * Character(Pawn)�� ���� ü�°��� ó���� ����ϴ� Component�̴�
 * - ����� �ش� Ŭ������ Blueprintable�̴�:
 * - �̴� ��������� Delegate�� UI���� ���ε��ϱ� �����̴� (�ڼ��Ѱ� Ŭ���ϸ鼭 �˾ƺ���)
 */
UCLASS()
class GRADGAME_API UGradHealthComponent : public UGameFrameworkComponent
{
	GENERATED_BODY()
public:
	UGradHealthComponent(const FObjectInitializer& ObjectInitializer);

	/** Actor(���� ACharacter/APawn)�� HealthComponent�� ��ȯ */
	UFUNCTION(BlueprintPure, Category = "Grad|Health")
	static UGradHealthComponent* FindHealthComponent(const AActor* Actor);

	/** �Ʒ��� UFUNCTION�� HealthSet�� Attribute�� �����ϱ� ���� BP Accessor �Լ��� */
	UFUNCTION(BlueprintCallable, Category = "Grad|Health")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Grad|Health")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Grad|Health")
	float GetHealthNormalized() const;

	/** ASC�� HealthSet �ʱ�ȭ */
	void InitializeWithAbilitySystem(UGradAbilitySystemComponent* InASC);
	void UninitializeWithAbilitySystem();

	/** ASC�� ����, HealthSet�� HealthAttribute ������ ������ ȣ���ϴ� �޼��� (���������� OnHealthChanged ȣ��) */
	void HandleHealthChanged(const FOnAttributeChangeData& ChangeData);

	/** HealthSet�� �����ϱ� ���� AbilitySystemComponent */
	UPROPERTY()
	TObjectPtr<UGradAbilitySystemComponent> AbilitySystemComponent;

	/** ĳ�̵� HealthSet ���۷��� */
	UPROPERTY()
	TObjectPtr<const UGradHealthSet> HealthSet;

	/** health ��ȭ�� ���� Delegate(Multicast) */
	UPROPERTY(BlueprintAssignable)
	FGradHealth_AttributeChanged OnHealthChanged;
};
