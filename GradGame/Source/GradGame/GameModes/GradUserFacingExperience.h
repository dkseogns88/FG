// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GradUserFacingExperience.generated.h"

class UCommonSession_HostSessionRequest;

UCLASS()
class GRADGAME_API UGradUserFacingExperience : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	/**
	* Map �ε� �� Experience ��ȯ�� ����, MapID�� ExperienceID�� Ȱ���Ͽ�, HostSessionRequest ����
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	UCommonSession_HostSessionRequest* CreateHostingRequest() const;

	/** the specific map to load */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Experience, meta = (AllowedTypes = "Map"))
	FPrimaryAssetId MapID;

	/** the gameplay expierence to load */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Experience, meta = (AllowedTypes = "GradExperienceDefinition"))
	FPrimaryAssetId ExperienceID;
};