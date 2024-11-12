// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CommonUserWidget.h"
#include "UObject/ObjectPtr.h"
#include "UObject/UObjectGlobals.h"
#include "GradTeamInterface.generated.h"

class UNetworkManager;

UCLASS()
class GRADGAME_API UGradTeamInterface : public UCommonUserWidget
{
	GENERATED_BODY()
public:
	UGradTeamInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * UUserWidget's interface
	 */
	virtual void NativeConstruct() override;

	/** Team 인원 수 변겅에 따른 BP Event */
	void OnTeamChangedDelegate(TArray<int32> PlayerIDs, int32 TeamMembers);
	UFUNCTION(BlueprintImplementableEvent)
	void OnTeamChanged(const TArray<int32>& PlayerIDs, int32 TeamMembers);


private:
	UNetworkManager* NetworkManager = nullptr;
	int32 BeforeTeamMembers = -1;
};
