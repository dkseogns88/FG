// Fill out your copyright notice in the Description page of Project Settings.

#include "GradCosmeticAnimationTypes.h"


TSubclassOf<UAnimInstance> FGradAnimLayerSelectionSet::SelectBestLayer(const FGameplayTagContainer& CosmeticTags) const
{
	for (const FGradAnimLayerSelectionEntry& Rule : LayerRules)
	{
		if ((Rule.Layer != nullptr) && CosmeticTags.HasAll(Rule.RequiredTags))
		{
			return Rule.Layer;
		}
	}
	return DefaultLayer;
}


USkeletalMesh* FGradAnimBodyStyleSelectionSet::SelectBestBodyStyle(const FGameplayTagContainer& CosmeticTags) const
{
	// MeshRule�� ��ȸ�ϸ�, CosmeticTags �䱸 ���ǿ� �´� MeshRule�� ã�� SkeletalMesh�� ��ȯ�Ѵ�
	for (const FGradAnimBodyStyleSelectionEntry& Rule : MeshRules)
	{
		if ((Rule.Mesh) && CosmeticTags.HasAll(Rule.RequiredTags))
		{
			return Rule.Mesh;
		}
	}
	
	return DefaultMesh;
}
