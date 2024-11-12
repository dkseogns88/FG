#include "GradExperienceActionSet.h"
#include "GameFeatureAction.h"

UGradExperienceActionSet::UGradExperienceActionSet()
{
}

#if WITH_EDITORONLY_DATA
void UGradExperienceActionSet::UpdateAssetBundleData()
{
	// �츮�� UpdateAssetBundleData() �ڵ带 �ѹ� �����Ѵ�
	Super::UpdateAssetBundleData();

	for (UGameFeatureAction* Action : Actions)
	{
		if (Action)
		{
			Action->AddAdditionalAssetBundleData(AssetBundleData);
		}
	}
}
#endif