// Fill out your copyright notice in the Description page of Project Settings.


#include "UIExtensionPointWidget.h"
#include "CommonLocalPlayer.h"
#include "GameFramework/PlayerState.h"

#define LOCTEXT_NAMESPACE "UIExtension"

UUIExtensionPointWidget::UUIExtensionPointWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UUIExtensionPointWidget::ResetExtensionPoint()
{
	// UDynamicEntryBoxBase::ResetInternal() ȣ��
	ResetInternal();

	// UUserWidget�� �˾Ƽ� GC �� ���̴� �׳� �����̳ʸ� Reset()
	ExtensionMapping.Reset();

	// ExtensionPointHandle�� ��ȸ�ϸ�, UUIExtensionSystem���� ����(Unregister)
	for (FUIExtensionPointHandle& Handle : ExtensionPointHandles)
	{
		Handle.Unregister();
	}
	ExtensionPointHandles.Reset();
}

void UUIExtensionPointWidget::RegisterExtensionPoint()
{
	if (UUIExtensionSubsystem* ExtensionSubsystem = GetWorld()->GetSubsystem<UUIExtensionSubsystem>())
	{
		// UUserWidget�� �����Ͽ�, AllowedDataClasses�� ����
		TArray<UClass*> AllowedDataClasses;
		AllowedDataClasses.Add(UUserWidget::StaticClass());
		AllowedDataClasses.Append(DataClasses);

		// nullptr�� (ContextObject) ExtensionPoint ����
		ExtensionPointHandles.Add(ExtensionSubsystem->RegisterExtensionPoint(
			ExtensionPointTag, ExtensionPointTagMatch, AllowedDataClasses,
			FExtendExtensionPointDelegate::CreateUObject(this, &ThisClass::OnAddOrRemoveExtension)
		));

		// LocalPlayer�� (ContextObject) ExtensionPoint ����
		ExtensionPointHandles.Add(ExtensionSubsystem->RegisterExtensionPointForContext(
			ExtensionPointTag, GetOwningLocalPlayer(), ExtensionPointTagMatch, AllowedDataClasses,
			FExtendExtensionPointDelegate::CreateUObject(this, &ThisClass::OnAddOrRemoveExtension)
		));
	}
}

void UUIExtensionPointWidget::RegisterExtensionPointForPlayerState(UCommonLocalPlayer* LocalPlayer, APlayerState* PlayerState)
{
	// RegisterExtensionPoint�� ���� ������ ����
	if (UUIExtensionSubsystem* ExtensionSubsystem = GetWorld()->GetSubsystem<UUIExtensionSubsystem>())
	{
		TArray<UClass*> AllowedDataClasses;
		AllowedDataClasses.Add(UUserWidget::StaticClass());
		AllowedDataClasses.Append(DataClasses);

		ExtensionPointHandles.Add(ExtensionSubsystem->RegisterExtensionPointForContext(
			ExtensionPointTag, PlayerState, ExtensionPointTagMatch, AllowedDataClasses,
			FExtendExtensionPointDelegate::CreateUObject(this, &ThisClass::OnAddOrRemoveExtension)
		));
	}
}

void UUIExtensionPointWidget::OnAddOrRemoveExtension(EUIExtensionAction Action, const FUIExtensionRequest& Request)
{
	if (Action == EUIExtensionAction::Added)
	{
		UObject* Data = Request.Data;

		// Data�� �ռ� �̾߱��ߵ��� WidgetClass�̴�
		TSubclassOf<UUserWidget> WidgetClass(Cast<UClass>(Data));
		if (WidgetClass)
		{
			// WidgetClass�� Ȱ���Ͽ�, UDynamicEntryBoxBase::CreateEntryInternal ȣ��� Child Widget�� �����
			UUserWidget* Widget = CreateEntryInternal(WidgetClass);

			// ������ ���, Tracking�� ���� ExtensionMapping �߰�
			ExtensionMapping.Add(Request.ExtensionHandle, Widget);
		}
		// DataClasses ó�� (����)
	}
	else
	{
		// ExtensionMapping�� Ȱ���Ͽ�, �����ϰ� UDynamicEntryBoxBase::RemoveEntryInternal�� ����
		if (UUserWidget* Extension = ExtensionMapping.FindRef(Request.ExtensionHandle))
		{
			RemoveEntryInternal(Extension);
			ExtensionMapping.Remove(Request.ExtensionHandle);
		}
	}
}

TSharedRef<SWidget> UUIExtensionPointWidget::RebuildWidget()
{
	// ���� InGame �������� ��, ����ȴ�
	if (!IsDesignTime() && ExtensionPointTag.IsValid())
	{
		// UIExtensionPointWidget ���� UDynamicEntryBoxBase::Child ��� ����
		ResetExtensionPoint();

		// �ٽ� ExtensionPointWidget�� ����ϱ� ���� Delegate �� Handle �߰�
		RegisterExtensionPoint();

		// PlayerState ������ ���� Delegate�� ���� ExtensionPointWidget �߰��� ���� ȣ�� Ȯ��
		FDelegateHandle Handle = GetOwningLocalPlayer<UCommonLocalPlayer>()->CallAndRegister_OnPlayerStateSet(
			UCommonLocalPlayer::FPlayerStateSetDelegate::FDelegate::CreateUObject(this, &UUIExtensionPointWidget::RegisterExtensionPointForPlayerState)
		);
	}

	// ����� UMG Editor���� ����ɶ� ����Ǵ� �����̴� (�̸� IsDesignTime()���� ���� ����)
	if (IsDesignTime())
	{
		auto GetExtensionPointText = [this]()
			{
				// ExtensionPoint
				// {ExtensionPointTag} 
				// - ���� ���� ���·� ǥ���ɰŴ�
				return FText::Format(LOCTEXT("DesignTime_ExtensionPointLabel", "ExtensionPoint\n{0}"), FText::FromName(ExtensionPointTag.GetTagName()));
			};

		// MessageBox��� ������, �׳� Editor HUD��� �����ϸ� �ȴ� (SOverlay)
		TSharedRef<SOverlay> MessageBox = SNew(SOverlay);
		MessageBox->AddSlot()
			.Padding(0.5f)
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				// ��� ���ķ� GetExtensionPointText �־��ش�
				SNew(STextBlock)
					.Justification(ETextJustify::Center)
					.Text_Lambda(GetExtensionPointText)
			];
		return MessageBox;
	}
	else
	{
		return Super::RebuildWidget();
	}
}