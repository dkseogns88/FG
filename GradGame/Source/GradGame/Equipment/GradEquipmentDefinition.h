// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GradEquipmentDefinition.generated.h"

class UGradEquipmentInstance;
class UGradAbilitySet;

USTRUCT()
struct FGradEquipmentActorToSpawn
{
	GENERATED_BODY()

	/** Spawn�� ��� Actor Ŭ���� (== Actor�� ��ӹ��� Asset���� �����ص� ��) */
	UPROPERTY(EditAnywhere, Category = Equipment)
	TSubclassOf<AActor> ActorToSpawn;

	/** ��� Bone Socket�� ������ �����Ѵ� */
	UPROPERTY(EditAnywhere, Category = Equipment)
	FName AttachSocket;

	/** Socket���� ������� Transformation�� ���Ұ����� ����: (Rotation, Position, Scale) */
	UPROPERTY(EditAnywhere, Category = Equipment)
	FTransform AttachTransform;
};

/**
 * GradEquipementDefinition�� ���� �����ۿ� ���� ���� Ŭ����(��Ÿ ������)�̴�
 */
UCLASS(Blueprintable)
class GRADGAME_API UGradEquipmentDefinition : public UObject
{
	GENERATED_BODY()
public:
	UGradEquipmentDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** �ش� ��Ÿ �����͸� ����ϸ�, � �ν��Ͻ��� Spawn���� �����ϴ� Ŭ���� */
	UPROPERTY(EditDefaultsOnly, Category = Equipment)
	TSubclassOf<UGradEquipmentInstance> InstanceType;

	/** �ش� ���� �������� ����ϸ�, � Actor�� Spawn�� �Ǵ��� ������ ��� �ִ� */
	/** - �ϳ��� �������� �����ص� ���� ���� ��ȯ�� �� �־ Array ���´� */
	UPROPERTY(EditDefaultsOnly, Category = Equipment)
	TArray<FGradEquipmentActorToSpawn> ActorsToSpawn;

	/** ������ ���� �ο� ������ Ability Set */
	UPROPERTY(EditDefaultsOnly, Category = Equipment)
	TArray<TObjectPtr<UGradAbilitySet>> AbilitySetsToGrant;
};
