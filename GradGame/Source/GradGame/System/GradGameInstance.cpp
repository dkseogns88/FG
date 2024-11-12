// Fill out your copyright notice in the Description page of Project Settings.


#include "GradGameInstance.h"
#include "Components/GameFrameworkComponentManager.h"
#include "GradGame/GradGameplayTags.h"

void UGradGameInstance::Init()
{
	Super::Init();

	// �ռ� ������ InitState�� GameplayTags ���:
	UGameFrameworkComponentManager* ComponentManager = GetSubsystem<UGameFrameworkComponentManager>(this);
	if (ensure(ComponentManager))
	{
		const FGradGameplayTags& GameplayTags = FGradGameplayTags::Get();

		ComponentManager->RegisterInitState(GameplayTags.InitState_Spawned, false, FGameplayTag());
		ComponentManager->RegisterInitState(GameplayTags.InitState_DataAvailable, false, GameplayTags.InitState_Spawned);
		ComponentManager->RegisterInitState(GameplayTags.InitState_DataInitialized, false, GameplayTags.InitState_DataAvailable);
		ComponentManager->RegisterInitState(GameplayTags.InitState_GameplayReady, false, GameplayTags.InitState_DataInitialized);
	}
}

void UGradGameInstance::Shutdown()
{
	Super::Shutdown();
}
