// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GradGame/System/GradGameplayTagStack.h"
#include "GradInventoryItemInstance.generated.h"

class UGradInventoryItemFragment;
class UGradInventoryItemDefinition;

/**
 * 
 */
UCLASS(BlueprintType)
class GRADGAME_API UGradInventoryItemInstance : public UObject
{
	GENERATED_BODY()
public:
	UGradInventoryItemInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, BlueprintPure = false, meta = (DeterminesOutputType = FragmentClass))
	const UGradInventoryItemFragment* FindFragmentByClass(TSubclassOf<UGradInventoryItemFragment> FragmentClass) const;

	template <typename ResultClass>
	const ResultClass* FindFragmentByClass() const
	{
		return (ResultClass*)FindFragmentByClass(ResultClass::StaticClass());
	}

	/** add/remove stack count to stat tag(=gameplay-tag stack) */
	UFUNCTION(BlueprintCallable, Category = Inventory)
	void AddStatTagStack(FGameplayTag Tag, int32 StackCount);
	UFUNCTION(BlueprintCallable, Category = Inventory)
	void RemoveStatTagStack(FGameplayTag Tag, int32 StackCount);

	/** whether stat tag has in StatTags */
	bool HasStatTag(FGameplayTag Tag) const;

	/** get the current count of gameplay-tag stack */
	UFUNCTION(BlueprintCallable, Category = Inventory)
	int32 GetStatTagStackCount(FGameplayTag Tag) const;

	/** gameplay-tag stacks for inventory item instance */
	UPROPERTY()
	FGradGameplayTagStackContainer StatTags;

	/** Inventory Item�� �ν��Ͻ����� �������� ���ǵǾ����� ��Ÿ Ŭ������ GradInventoryItemDefinition�� ��� �ִ� */
	UPROPERTY()
	TSubclassOf<UGradInventoryItemDefinition> ItemDef;
};
