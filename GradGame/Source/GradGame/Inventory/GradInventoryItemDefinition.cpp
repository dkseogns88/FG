// Fill out your copyright notice in the Description page of Project Settings.


#include "GradInventoryItemDefinition.h"

UGradInventoryItemDefinition::UGradInventoryItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

const UGradInventoryItemFragment* UGradInventoryItemDefinition::FindFragmentByClass(TSubclassOf<UGradInventoryItemFragment> FragmentClass) const
{
	if (FragmentClass)
	{
		// Fragments�� ��ȸ�ϸ�, IsA()�� ���� �ش� Ŭ������ ������ �ִ��� Ȯ���Ѵ�:
		for (UGradInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment && Fragment->IsA(FragmentClass))
			{
				return Fragment;
			}
		}
	}

	return nullptr;
}
