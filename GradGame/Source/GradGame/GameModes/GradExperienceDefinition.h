// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GradExperienceDefinition.generated.h"

class UGradExperienceActionSet;
class UGameFeatureAction;
class UGradPawnData;

/**
 * 
 */
UCLASS()
class GRADGAME_API UGradExperienceDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UGradExperienceDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

#if WITH_EDITORONLY_DATA
	virtual void UpdateAssetBundleData() override;
#endif

	/**
	 * member variables
	 */
	UPROPERTY(EditDefaultsOnly, Category = Gameplay)
	TObjectPtr<UGradPawnData> DefaultPawnData;

	/**
	 * �ش� property�� �ܼ��� ��ŷ �� �������� ���ܵд�
	 * - ���� ��忡 ���� GameFeature plugin�� �ε��ϴµ� �̿� ���� ������� �����ϸ� �ȴ�
	 * - ���� ShooterCore ���� Plugin �۾��� ���, �����ϰ� �� �����̴�
	 */
	UPROPERTY(EditDefaultsOnly, Category = Gameplay)
	TArray<FString> GameFeaturesToEnable; // ������ ���� ����ȭ

	/** ExperienceActionSet�� UGameFeatureAction�� Set�̸�, Gameplay �뵵�� �°� �з��� �������� ����Ѵ� */
	UPROPERTY(EditDefaultsOnly, Category = Gameplay)
	TArray<TObjectPtr<UGradExperienceActionSet>> ActionSets;

	/** �Ϲ����� GameFeatureAction���μ� �߰� */
	UPROPERTY(EditDefaultsOnly, Category = "Actions")
	TArray<TObjectPtr<UGameFeatureAction>> Actions;
};
