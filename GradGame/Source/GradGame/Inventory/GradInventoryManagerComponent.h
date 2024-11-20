
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GradInventoryManagerComponent.generated.h"

/** forward declarations */
class UGradInventoryItemInstance;
class UGradInventoryItemDefinition;

/** Inventory Item ���� ��ü */
USTRUCT(BlueprintType)
struct FGradInventoryEntry
{
	GENERATED_BODY()

	UPROPERTY()
	TObjectPtr<UGradInventoryItemInstance> Instance = nullptr;
};

/** Inventory Item ���� ��ü */
USTRUCT(BlueprintType)
struct FGradInventoryList
{
	GENERATED_BODY()

	FGradInventoryList(UActorComponent* InOwnerComponent = nullptr) : OwnerComponent(InOwnerComponent)
	{}
	TArray<UGradInventoryItemInstance*> GetAllItems() const;

	UGradInventoryItemInstance* AddEntry(TSubclassOf<UGradInventoryItemDefinition> ItemDef);

	void RemoveEntry(UGradInventoryItemInstance* Instance);

	UPROPERTY()
	TArray<FGradInventoryEntry> Entries;

	UPROPERTY()
	TObjectPtr<UActorComponent> OwnerComponent;
};

/**
 * PlayerController�� Component�μ� Inventory�� �����Ѵ�
 * - ��� UActorComponent ����� �ƴ� UControllerComponent�� ��ӹ޾Ƶ� �ɰ� ������... �ϴ� Grad �������� UActorComponent�� ��ӹް� �ִ�
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GRADGAME_API UGradInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UGradInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** InventoryItemDefinition�� ����, InventoryList�� �߰��Ͽ� �����ϸ�, InventoryItemInstance�� ��ȯ�Ѵ� */
	UFUNCTION(BlueprintCallable, Category = Inventory)
	UGradInventoryItemInstance* AddItemDefinition(TSubclassOf<UGradInventoryItemDefinition> ItemDef);

	UFUNCTION(BlueprintCallable, Category = Inventory)
	void RemoveItemInstance(UGradInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintCallable, Category = Inventory, BlueprintPure = false)
	TArray<UGradInventoryItemInstance*> GetAllItems() const;

	UPROPERTY()
	FGradInventoryList InventoryList;
};
