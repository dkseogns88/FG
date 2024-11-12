// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GradPlayerState.generated.h"

class UGradPawnData;
class UGradExperienceDefinition;

UCLASS()
class GRADGAME_API AGradPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	/**
	* AActor's interface
	*/
	virtual void PostInitializeComponents() final;

	/**
	 * member methods
	 */
	template <class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }
	void OnExperienceLoaded(const UGradExperienceDefinition* CurrentExperience);
	void SetPawnData(const UGradPawnData* InPawnData);

	// - ���⼭ PawnData�� �ִ� ������ ���ʿ��� �˾ƺ���.
	UPROPERTY()
	TObjectPtr<const UGradPawnData> PawnData;
};
