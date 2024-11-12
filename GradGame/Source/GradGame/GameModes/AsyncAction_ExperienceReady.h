// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncAction_ExperienceReady.generated.h"

/** BP�� ���� UFunction���� ���ε��ϴ� Multicast Delegate: Dynamic! */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExperienceReadyAsyncDelegate);

/** forward declarations */
class AGameStateBase;
class UGradExperienceDefinition;

UCLASS()
class GRADGAME_API UAsyncAction_ExperienceReady : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UAsyncAction_ExperienceReady(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** UAsyncAction_ExperienceReady�� �����ϰ� ��ٸ��� BP ȣ�� */
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static UAsyncAction_ExperienceReady* WaitForExperienceReady(UObject* WorldContextObject);

	/**
	 * UBlueprintAsyncActionBase interface
	 */
	virtual void Activate() override;

	/**
	 * Step1 - Step4
	 */
	void Step1_HandleGameStateSet(AGameStateBase* GameState);
	void Step2_ListenToExperienceLoading(AGameStateBase* GameState);
	void Step3_HandleExperienceLoaded(const UGradExperienceDefinition* CurrentExperience);
	void Step4_BroadcastReady();

	/** BlueprintAssignable�� BP�󿡼� �Ҵ� ������ ������ �����Ѵ� */
	UPROPERTY(BlueprintAssignable)
	FExperienceReadyAsyncDelegate OnReady;

	/** WorldPtr�� �ܼ� ������ ĳ���ϴ� �뵵 */
	TWeakObjectPtr<UWorld> WorldPtr;
};
