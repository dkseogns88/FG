// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CommonUserWidget.h"
#include "UObject/ObjectPtr.h"
#include "UObject/UObjectGlobals.h"
#include "GradWeaponUserInterface.generated.h"

/** forward declaration */
class UGradWeaponInstance;

/**
 * 
 */
UCLASS()
class GRADGAME_API UGradWeaponUserInterface : public UCommonUserWidget
{
	GENERATED_BODY()
public:
	UGradWeaponUserInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** Weapon ���Ͽ� ���� BP Event */
	UFUNCTION(BlueprintImplementableEvent)
	void OnWeaponChanged(UGradWeaponInstance* OldWeapon, UGradWeaponInstance* NewWeapon);

	/**
	 * UUserWidget's interface
	 */
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	/** ���� ������ WeaponInstance�� �����Ѵ� (NativeTick�� Ȱ���Ͽ� �ֱ��� ������Ʈ�Ѵ�) */
	UPROPERTY(Transient)
	TObjectPtr<UGradWeaponInstance> CurrentInstance;
};
