// Fill out your copyright notice in the Description page of Project Settings.


#include "GradExperienceDefinition.h"
#include "GameFeatureAction.h"

UGradExperienceDefinition::UGradExperienceDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

#if WITH_EDITORONLY_DATA
void UGradExperienceDefinition::UpdateAssetBundleData()
{
	// �츮�� UpdateAssetBundleData() �ڵ带 �ѹ� �����Ѵ�
	Super::UpdateAssetBundleData();

	for (UGameFeatureAction* Action : Actions)
	{
		if (Action)
		{
			// AddAddditionalAssetBundleData()�� UGameFeatureAction�� �޼����̴� 
			// - �츮�� ���������� ȣ���� ���� AssetBundleData�� �߰����ش�
			Action->AddAdditionalAssetBundleData(AssetBundleData);
		}
	}
}
#endif
