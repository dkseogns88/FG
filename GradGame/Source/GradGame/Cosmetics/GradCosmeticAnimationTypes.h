// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GradCosmeticAnimationTypes.generated.h"

USTRUCT(BlueprintType)
struct FGradAnimLayerSelectionEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAnimInstance> Layer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer RequiredTags;
};

USTRUCT(BlueprintType)
struct FGradAnimLayerSelectionSet
{
	GENERATED_BODY()

	/** CosmeticTags ����Ͽ�, ������ AnimLayer�� ��ȯ�Ѵ� */
	TSubclassOf<UAnimInstance> SelectBestLayer(const FGameplayTagContainer& CosmeticTags) const;

	/** �ռ� ���Ҵ� GradAnimBodyStyleSelection�� MeshRule�� ���� AnimInstance�� Rule�� ���� LayerRules�� �����ϸ� �� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGradAnimLayerSelectionEntry> LayerRules;

	/** ����Ʈ Layer */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAnimInstance> DefaultLayer;
};

USTRUCT(BlueprintType)
struct FGradAnimBodyStyleSelectionEntry
{
	GENERATED_BODY()

	/** AnimLayer�� ������ ��� SkeletalMesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USkeletalMesh> Mesh = nullptr;

	/** Cosmetic Tag��� �����ϸ� �� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Categories = "Cosmetic"))
	FGameplayTagContainer RequiredTags;
};

USTRUCT(BlueprintType)
struct FGradAnimBodyStyleSelectionSet
{
	GENERATED_BODY()

	/** GameplayTag�� ���� (CosmeticTags), Mesh Rules�� ���� �˸��� BodyStyle�� ��ȯ�Ѵ� */
	USkeletalMesh* SelectBestBodyStyle(const FGameplayTagContainer& CosmeticTags) const;

	/** AnimLayer ������ SkeletalMesh�� ��� ���� -> Animation-Mesh�� Rules�� MeshRules��� �����ϸ� �� */
	/*   - Cosmetic#1 25�� ����    */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGradAnimBodyStyleSelectionEntry> MeshRules;

	/** �׳� ����Ʈ�� ������ SkeletalMesh */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USkeletalMesh> DefaultMesh = nullptr;

	/** Physics Asset�� �ϳ��� ������ -> �� ��� Animation�� Physics �Ӽ��� ������ */
	UPROPERTY(EditAnywhere)
	TObjectPtr<UPhysicsAsset> ForcedPhysicsAsset = nullptr;
};