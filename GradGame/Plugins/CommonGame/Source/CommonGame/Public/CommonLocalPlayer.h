// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "CommonLocalPlayer.generated.h"

/**
 *
 */
UCLASS()
class COMMONGAME_API UCommonLocalPlayer : public ULocalPlayer
{
	GENERATED_BODY()
public:
	/** player controller�� local player�� �Ҵ�(assign)�Ǿ��� ���� ������ Delegate */
	DECLARE_MULTICAST_DELEGATE_TwoParams(FPlayerControllerSetDelegate, UCommonLocalPlayer* LocalPlayer, APlayerController* PlayerController)
	FPlayerControllerSetDelegate OnPlayerControllerSet;

	/** player state�� local player�� �Ҵ�(assign)�Ǿ��� ���� ������ Delegate */
	DECLARE_MULTICAST_DELEGATE_TwoParams(FPlayerStateSetDelegate, UCommonLocalPlayer* LocalPlayer, APlayerState* PlayerState)
	FPlayerStateSetDelegate OnPlayerStateSet;

	FDelegateHandle CallAndRegister_OnPlayerStateSet(FPlayerStateSetDelegate::FDelegate Delegate);
};