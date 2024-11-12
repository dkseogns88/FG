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
 * - �� �״��, �ش� component�� game state�� owner�� �����鼭, experience�� ���� ������ ������ �ִ� component�̴�
 * - �Ӹ� �ƴ϶�, manager��� �ܾ ���ԵǾ� �ֵ���, experience �ε� ���� ������Ʈ �� �̺�Ʈ�� �����Ѵ�
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

	/**
	 * �Ʒ��� OnExperienceLoaded�� ���ε��ϰų�, �̹� Experience �ε��� �Ϸ�Ǿ��ٸ� �ٷ� ȣ����
	 */
	void CallOrRegister_OnExperienceLoaded(FOnGradExperienceLoaded::FDelegate&& Delegate);

	void ServerSetCurrentExperience(FPrimaryAssetId ExperienceId);
	void StartExperienceLoad();
	void OnExperienceLoadComplete();
	void OnGameFeaturePluginLoadComplete(const UE::GameFeatures::FResult& Result);
	void OnExperienceFullLoadCompleted();
	const UGradExperienceDefinition* GetCurrentExperienceChecked() const;

public:
	// - �ε��� �Ϸ�Ǿ������� ��(���� ��忡�� �ε������� ��Ź�� �ؾ� ��)
	UPROPERTY()
	TObjectPtr<const UGradExperienceDefinition> CurrentExperience;

	/** Experience�� �ε� ���¸� ����͸� */
	EGradExperienceLoadState LoadState = EGradExperienceLoadState::Unloaded;

	/** Experience �ε��� �Ϸ�� ����, Broadcasting Delegate */
	FOnGradExperienceLoaded OnExperienceLoaded;

	/** Ȱ��ȭ�� GameFeature Plugin�� */
	int32 NumGameFeaturePluginsLoading = 0;
	TArray<FString> GameFeaturePluginURLs;
};
