// Fill out your copyright notice in the Description page of Project Settings.


#include "GradInventoryManagerComponent.h"
#include "GradInventoryItemDefinition.h"
#include "GradInventoryItemInstance.h"

TArray<UGradInventoryItemInstance*> FGradInventoryList::GetAllItems() const
{
	TArray<UGradInventoryItemInstance*> Results;
	Results.Reserve(Entries.Num());
	for (const FGradInventoryEntry& Entry : Entries)
	{
		if (Entry.Instance != nullptr) //@TODO: Would prefer to not deal with this here and hide it further?
		{
			Results.Add(Entry.Instance);
		}
	}
	return Results;
}

UGradInventoryItemInstance* FGradInventoryList::AddEntry(TSubclassOf<UGradInventoryItemDefinition> ItemDef)
{
	UGradInventoryItemInstance* Result = nullptr;
	check(ItemDef);
	check(OwnerComponent);

	AActor* OwningActor = OwnerComponent->GetOwner(); // 오너는 컨트롤러
	check(OwningActor->HasAuthority());

	FGradInventoryEntry& NewEntry = Entries.AddDefaulted_GetRef();
	NewEntry.Instance = NewObject<UGradInventoryItemInstance>(OwningActor);
	NewEntry.Instance->ItemDef = ItemDef;

	// iterating fragments and call callback to OnInstanceCreated()
	for (const UGradInventoryItemFragment* Fragment : GetDefault<UGradInventoryItemDefinition>(ItemDef)->Fragments)
	{
		if (Fragment)
		{
			Fragment->OnInstanceCreated(NewEntry.Instance);
		}
	}

	Result = NewEntry.Instance;
	return Result;
}

void FGradInventoryList::RemoveEntry(UGradInventoryItemInstance* Instance)
{
	for (auto EntryIt = Entries.CreateIterator(); EntryIt; ++EntryIt)
	{
		FGradInventoryEntry& Entry = *EntryIt;
		if (Entry.Instance == Instance)
		{
			EntryIt.RemoveCurrent();
			// MarkArrayDirty();
		}
	}
}

UGradInventoryManagerComponent::UGradInventoryManagerComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, InventoryList(this)
{}

UGradInventoryItemInstance* UGradInventoryManagerComponent::AddItemDefinition(TSubclassOf<UGradInventoryItemDefinition> ItemDef)
{
	UGradInventoryItemInstance* Result = nullptr;
	if (ItemDef)
	{
		Result = InventoryList.AddEntry(ItemDef);
	}
	return Result;
}

void UGradInventoryManagerComponent::RemoveItemInstance(UGradInventoryItemInstance* ItemInstance)
{
	InventoryList.RemoveEntry(ItemInstance);

	if (ItemInstance && IsUsingRegisteredSubObjectList())
	{
		RemoveReplicatedSubObject(ItemInstance);
	}
}

TArray<UGradInventoryItemInstance*> UGradInventoryManagerComponent::GetAllItems() const
{
	return InventoryList.GetAllItems();
}
