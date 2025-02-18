// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "GameFeaturePluginOperationResult.h"
#include "GradExperienceManagerComponent.generated.h"

class UGradExperienceDefinition;

enum class EGradExperienceLoadState
{
	Unloaded,
	Loading,
	LoadingGameFeatures,
	ExecutingActions,
	Loaded,
	Deactivating,
};

DECLARE_MULTICAST_DELEGATE_OneParam(FOnGradExperienceLoaded, const UGradExperienceDefinition*);

/**
 * GradExperienceManagerComponent
 * - 말 그대로, 해당 component는 game state를 owner로 가지면서, experience의 상태 정보를 가지고 있는 component이다
 * - 뿐만 아니라, manager라는 단어가 포함되어 있듯이, experience 로딩 상태 업데이트 및 이벤트를 관리한다
 */
UCLASS()
class GRADGAME_API UGradExperienceManagerComponent : public UGameStateComponent
{
	GENERATED_BODY()

public:
	/**
	 * member methods
	 */
	bool IsExperienceLoaded() { return (LoadState == EGradExperienceLoadState::Loaded) && (CurrentExperience != nullptr); }

	
	void CallOrRegister_OnExperienceLoaded_HighPriority(FOnGradExperienceLoaded::FDelegate&& Delegate);

	/**
	 * 아래의 OnExperienceLoaded에 바인딩하거나, 이미 Experience 로딩이 완료되었다면 바로 호출함
	 */
	void CallOrRegister_OnExperienceLoaded(FOnGradExperienceLoaded::FDelegate&& Delegate);

	void CallOrRegister_OnExperienceLoaded_LowPriority(FOnGradExperienceLoaded::FDelegate&& Delegate);


	void ServerSetCurrentExperience(FPrimaryAssetId ExperienceId);
	void StartExperienceLoad();
	void OnExperienceLoadComplete();
	void OnGameFeaturePluginLoadComplete(const UE::GameFeatures::FResult& Result);
	void OnExperienceFullLoadCompleted();
	const UGradExperienceDefinition* GetCurrentExperienceChecked() const;

public:
	// - 로딩이 완료되었는지는 모름(게임 모드에서 로딩해줘라고 부탁을 해야 함)
	UPROPERTY()
	TObjectPtr<const UGradExperienceDefinition> CurrentExperience;

	/** Experience의 로딩 상태를 모니터링 */
	EGradExperienceLoadState LoadState = EGradExperienceLoadState::Unloaded;

	FOnGradExperienceLoaded OnExperienceLoaded_HighPriority;

	/** Experience 로딩이 완료된 이후, Broadcasting Delegate */
	FOnGradExperienceLoaded OnExperienceLoaded;

	FOnGradExperienceLoaded OnExperienceLoaded_LowPriority;

	/** 활성화된 GameFeature Plugin들 */
	int32 NumGameFeaturePluginsLoading = 0;
	TArray<FString> GameFeaturePluginURLs;
};