// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayAbilitySpec.h"
#include "GradAbilitySet.generated.h"

class UGradAbilitySystemComponent;
class UGradGameplayAbility;

/**
 * GameplayAbility�� Wrapper Ŭ����
 * - �߰����� Ŀ���͸���¡�� ������
 */
USTRUCT(BlueprintType)
struct FGradAbilitySet_GameplayAbility
{
	GENERATED_BODY()
public:
	/** ���� GameplayAbility */
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGradGameplayAbility> Ability = nullptr;

	/** Input ó���� ���� GameplayTag */   /* Tag�� ���ؼ� Ability�� ������ �� �� �ִ� */
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag InputTag;

	/** Ability�� ��� ���� (Level) */
	UPROPERTY(EditDefaultsOnly)
	int32 AbilityLevel = 1;
};

USTRUCT(BlueprintType)
struct FGradAbilitySet_GrantedHandles
{
	GENERATED_BODY()

	void AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle);
	void TakeFromAbilitySystem(UGradAbilitySystemComponent* GradASC);

protected:
	/** ���� GameplayAbilitySpecHandle(int32) */
	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;
};

/**
 * 
 */
UCLASS()
class GRADGAME_API UGradAbilitySet : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UGradAbilitySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** ASC�� ��밡���� Ability�� �߰��Ѵ� */
	void GiveToAbilitySystem(UGradAbilitySystemComponent* GradASC, FGradAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject = nullptr);

	/** ���� GameplayAbilities */
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Abilities")
	TArray<FGradAbilitySet_GameplayAbility> GrantedGameplayAbilities;
};
