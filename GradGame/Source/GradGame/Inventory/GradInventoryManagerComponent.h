
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GradInventoryManagerComponent.generated.h"

/** forward declarations */
class UGradInventoryItemInstance;
class UGradInventoryItemDefinition;

/** Inventory Item 단위 객체 */
USTRUCT(BlueprintType)
struct FGradInventoryEntry
{
	GENERATED_BODY()

	UPROPERTY()
	TObjectPtr<UGradInventoryItemInstance> Instance = nullptr;
};

/** Inventory Item 관리 객체 */
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
 * PlayerController의 Component로서 Inventory를 관리한다
 * - 사실 UActorComponent 상속이 아닌 UControllerComponent를 상속받아도 될거 같은데... 일단 Grad 기준으로 UActorComponent를 상속받고 있다
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GRADGAME_API UGradInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UGradInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** InventoryItemDefinition을 통해, InventoryList에 추가하여 관리하며, InventoryItemInstance를 반환한다 */
	UFUNCTION(BlueprintCallable, Category = Inventory)
	UGradInventoryItemInstance* AddItemDefinition(TSubclassOf<UGradInventoryItemDefinition> ItemDef);

	UFUNCTION(BlueprintCallable, Category = Inventory)
	void RemoveItemInstance(UGradInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintCallable, Category = Inventory, BlueprintPure = false)
	TArray<UGradInventoryItemInstance*> GetAllItems() const;

	UPROPERTY()
	FGradInventoryList InventoryList;
};
