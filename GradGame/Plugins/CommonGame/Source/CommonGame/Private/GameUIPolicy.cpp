#include "GameUIPolicy.h"
#include "CommonLocalPlayer.h"
#include "PrimaryGameLayout.h"

UPrimaryGameLayout* UGameUIPolicy::GetRootLayout(const UCommonLocalPlayer* LocalPlayer) const
{
	const FRootViewportLayoutInfo* LayoutInfo = RootViewportLayouts.FindByKey(LocalPlayer);
	return LayoutInfo ? LayoutInfo->RootLayout : nullptr;
}

TSubclassOf<UPrimaryGameLayout> UGameUIPolicy::GetLayoutWidgetClass(UCommonLocalPlayer* LocalPlayer)
{
	return LayoutClass.LoadSynchronous();
}

void UGameUIPolicy::CreateLayoutWidget(UCommonLocalPlayer* LocalPlayer)
{
	// PlayerController�� �Ҵ�Ǿ��� ���, LayoutWidget�� �����Ѵ�
	if (APlayerController* PlayerController = LocalPlayer->GetPlayerController(GetWorld()))
	{
		// LayoutWidgetClass�� ���� ��� (��! UPrimaryGameLayout�� Abstract�̰� �̸� ��ӹ޴� Class���� �Ѵ�)
		TSubclassOf<UPrimaryGameLayout> LayoutWidgetClass = GetLayoutWidgetClass(LocalPlayer);
		if (ensure(LayoutWidgetClass && !LayoutWidgetClass->HasAnyClassFlags(CLASS_Abstract)))
		{
			// PlayerController�� �����Ѵٴ� �ǹ̿��� Owner�� �����Ѵ�
			UPrimaryGameLayout* NewLayoutObject = CreateWidget<UPrimaryGameLayout>(PlayerController, LayoutWidgetClass);

			// FRootViewportLayoutInfo�� Constructor�� ��������:
			RootViewportLayouts.Emplace(LocalPlayer, NewLayoutObject, true);

			AddLayoutToViewport(LocalPlayer, NewLayoutObject);
		}
	}
}

void UGameUIPolicy::AddLayoutToViewport(UCommonLocalPlayer* LocalPlayer, UPrimaryGameLayout* Layout)
{
	// CommonUserWidget�� PlayerContext�� ����
	Layout->SetPlayerContext(FLocalPlayerContext(LocalPlayer));

	// �ش� Layout�� �켱������ ���� �����Ѵ� (1000)
	// - AddToPlayerScreen�� ���� Widget�� ���δ�
	Layout->AddToPlayerScreen(1000);
}

void UGameUIPolicy::RemoveLayoutFromViewport(UCommonLocalPlayer* LocalPlayer, UPrimaryGameLayout* Layout)
{
	// UCommonUserWidget�� SlateWidget�� �����ͼ� Parent�� ������� ���� ���´�
	TWeakPtr<SWidget> LayoutSlateWidget = Layout->GetCachedWidget();
	if (LayoutSlateWidget.IsValid())
	{
		Layout->RemoveFromParent();
	}
}

void UGameUIPolicy::NotifyPlayerAdded(UCommonLocalPlayer* LocalPlayer)
{
	// PlayerController�� ������Ʈ�Ǹ� GameLayout�� ������Ʈ���ֱ� ���� Delegate�� �߰��Ѵ�
	LocalPlayer->OnPlayerControllerSet.AddWeakLambda(this, [this](UCommonLocalPlayer* LocalPlayer, APlayerController* PlayerController)
		{
			// �켱 �߰��� Player�� ������, ��������
			NotifyPlayerRemoved(LocalPlayer);

			// RootViewportLayouts�� ��ȸ�ϸ� �˻��Ѵ�:
			// - FRootViewportLayoutInfo�� operator==�� �����ؾ� �Ѵ�
			if (FRootViewportLayoutInfo* LayoutInfo = RootViewportLayouts.FindByKey(LocalPlayer))
			{
				// Layout�� ������Ʈ ���ش�
				AddLayoutToViewport(LocalPlayer, LayoutInfo->RootLayout);
				LayoutInfo->bAddedToViewport = true;
			}
			else
			{
				// Layout�� �����ϰ� Ȱ��ȭ�Ѵ�
				CreateLayoutWidget(LocalPlayer);
			}
		});

	if (FRootViewportLayoutInfo* LayoutInfo = RootViewportLayouts.FindByKey(LocalPlayer))
	{
		AddLayoutToViewport(LocalPlayer, LayoutInfo->RootLayout);
		LayoutInfo->bAddedToViewport = true;
	}
	else
	{
		CreateLayoutWidget(LocalPlayer);
	}
}

void UGameUIPolicy::NotifyPlayerRemoved(UCommonLocalPlayer* LocalPlayer)
{
	if (FRootViewportLayoutInfo* LayoutInfo = RootViewportLayouts.FindByKey(LocalPlayer))
	{
		RemoveLayoutFromViewport(LocalPlayer, LayoutInfo->RootLayout);

		// ��Ȱ��ȭ Ȯ���� �� �뵵�� ����
		LayoutInfo->bAddedToViewport = false;
	}
}

void UGameUIPolicy::NotifyPlayerDestroyed(UCommonLocalPlayer* LocalPlayer)
{
	NotifyPlayerRemoved(LocalPlayer);

	// Player�� Destroy�ǹǷ�, OnPlayerControllerSet���� ��������
	LocalPlayer->OnPlayerControllerSet.RemoveAll(this);

	// RootViewportLayouts���� ��������
	const int32 LayoutInfoIdx = RootViewportLayouts.IndexOfByKey(LocalPlayer);
	if (LayoutInfoIdx != INDEX_NONE)
	{
		// ���� PrimaryGameLayout�� ������, Viewport������ �����Ѵ�
		UPrimaryGameLayout* Layout = RootViewportLayouts[LayoutInfoIdx].RootLayout;
		RootViewportLayouts.RemoveAt(LayoutInfoIdx);
		RemoveLayoutFromViewport(LocalPlayer, Layout);
	}
}