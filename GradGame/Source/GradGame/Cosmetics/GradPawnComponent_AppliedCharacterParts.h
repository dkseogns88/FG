// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GradCharacterPartTypes.h"
#include "GradCosmeticAnimationTypes.h"
#include "Components/PawnComponent.h"
#include "GradPawnComponent_AppliedCharacterParts.generated.h" 

class UGradPawnComponent_AppliedCharacterParts;

/** �ν��Ͻ�ȭ �� Character Part�� ���� */
USTRUCT()
struct FGradAppliedCharacterPartEntry
{
	GENERATED_BODY()

	/** Character Part�� ����(��Ÿ ������) */
	UPROPERTY()
	FGradCharacterPart Part;

	/** GradCharacterPartList���� �Ҵ� ���� Part �ڵ鰪 (FGradControllerCharacterPartEntry�� Handle ���� ���ƾ� �� -> ������ ���� Part) */
	UPROPERTY()
	int32 PartHandle = INDEX_NONE;

	/** �ν��Ͻ�ȭ �� Character Part�� Actor */
	UPROPERTY()
	TObjectPtr<UChildActorComponent> SpawnedComponent = nullptr;
};

/** GradPawnComponent_CharacterParts���� ������ Character Parts�� �����ϴ� Ŭ���� */
USTRUCT(BlueprintType)
struct FGradCharacterPartList
{
	GENERATED_BODY()

	FGradCharacterPartList()
		: OwnerComponent(nullptr)
	{}

	FGradCharacterPartList(UGradPawnComponent_AppliedCharacterParts* InOwnerComponent)
		: OwnerComponent(InOwnerComponent)
	{}

	bool SpawnActorForEntry(FGradAppliedCharacterPartEntry& Entry);
	void DestroyActorForEntry(FGradAppliedCharacterPartEntry& Entry);

	FGradCharacterPartHandle AddEntry(FGradCharacterPart NewPart);
	void RemoveEntry(FGradCharacterPartHandle Handle);

	FGameplayTagContainer CollectCombinedTags() const;

	/** ���� �ν��Ͻ�ȭ�� Character Part */
	UPROPERTY()
	TArray<FGradAppliedCharacterPartEntry> Entries;

	/** �ش� GradCharacterPartList�� Owner�� PawnComponent */
	UPROPERTY()
	TObjectPtr<UGradPawnComponent_AppliedCharacterParts> OwnerComponent;

	/** �ռ� ���Ҵ� PartHandle�� ���� �Ҵ� �� �����ϴ� ���� */
	int32 PartHandleCounter = 0;
};

/**
 * 
 */
UCLASS()
class GRADGAME_API UGradPawnComponent_AppliedCharacterParts : public UPawnComponent
{
	GENERATED_BODY()
public:
	UGradPawnComponent_AppliedCharacterParts(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	USkeletalMeshComponent* GetParentMeshComponent() const;
	USceneComponent* GetSceneComponentToAttachTo() const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = Cosmetics)
	FGameplayTagContainer GetCombinedTags(FGameplayTag RequiredPrefix) const;
	void BroadcastChanged();

	FGradCharacterPartHandle AddCharacterPart(const FGradCharacterPart& NewPart);
	void RemoveCharacterPart(FGradCharacterPartHandle Handle);

	/** �ν��Ͻ�ȭ �� Character Parts */
	UPROPERTY()
	FGradCharacterPartList CharacterPartList;

	/** �ִϸ��̼� ������ ���� �޽ÿ� ����� */
	UPROPERTY(EditAnywhere, Category = Cosmetics)
	FGradAnimBodyStyleSelectionSet BodyMeshes;
};
