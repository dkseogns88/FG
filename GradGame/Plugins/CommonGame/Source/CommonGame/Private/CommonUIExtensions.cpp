// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUIExtensions.h"
#include "CommonActivatableWidget.h"
#include "CommonLocalPlayer.h"
#include "GameUIManagerSubsystem.h"
#include "GameUIPolicy.h"
#include "PrimaryGameLayout.h"

UCommonActivatableWidget* UCommonUIExtensions::PushContentToLayer_ForPlayer(const ULocalPlayer* LocalPlayer, FGameplayTag LayerName, TSubclassOf<UCommonActivatableWidget> WidgetClass)
{
	// LocalPlayer�� ����, GameUIManagerSubsystem�� ������
	if (UGameUIManagerSubsystem* UIManager = LocalPlayer->GetGameInstance()->GetSubsystem<UGameUIManagerSubsystem>())
	{
		// UIManager���� ���� Ȱ��ȭ�� UIPolicy�� ��������
		if (UGameUIPolicy* Policy = UIManager->GetCurrentUIPolicy())
		{
			// Policy���� LocalPlayer�� �´� PrimaryGameLayout�� �����´�
			if (UPrimaryGameLayout* RootLayout = Policy->GetRootLayout(CastChecked<UCommonLocalPlayer>(LocalPlayer)))
			{
				// �׸��� PrimaryGameLayout, W_OverallUILayout�� LayerName�� Stack���� WidgetClass(UCommonActivatableWidget)�� �־��ش�
				return RootLayout->PushWidgetToLayerStack(LayerName, WidgetClass);
			}
		}
	}
	return nullptr;
}