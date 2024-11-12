

#include "GameFeatureAction_AddWidgets.h"
#include "CommonUIExtensions.h"
#include "Components/GameFrameworkComponentManager.h"
#include "GradGame/UI/GradHUD.h"

void UGameFeatureAction_AddWidgets::AddWidgets(AActor* Actor, FPerContextData& ActiveData)
{
	AGradHUD* HUD = CastChecked<AGradHUD>(Actor);

	// HUD�� ����, LocalPlayer�� ��������
	if (ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(HUD->GetOwningPlayerController()->Player))
	{
		// Layout�� ��û�� ��ȸ���� (���� �ϳ��� �� �ֱ��ϴ�)
		for (const FGradHUDLayoutRequest& Entry : Layout)
		{
			if (TSubclassOf<UCommonActivatableWidget> ConcreteWidgetClass = Entry.LayoutClass.Get())
			{
				ActiveData.LayoutsAdded.Add(UCommonUIExtensions::PushContentToLayer_ForPlayer(LocalPlayer, Entry.LayerID, ConcreteWidgetClass));
			}
		}

		// Widget�� ��ȸ�ϸ�, UIExtensionSubsystem�� Extension�� �߰��Ѵ�
		UUIExtensionSubsystem* ExtensionSubsystem = HUD->GetWorld()->GetSubsystem<UUIExtensionSubsystem>();
		for (const FGradHUDElementEntry& Entry : Widgets)
		{
			ActiveData.ExtensionHandles.Add(ExtensionSubsystem->RegisterExtensionAsWidgetForContext(Entry.SlotID, LocalPlayer, Entry.WidgetClass.Get(), -1));
		}
	}
}

void UGameFeatureAction_AddWidgets::RemoveWidgets(AActor* Actor, FPerContextData& ActiveData)
{
	AGradHUD* HUD = CastChecked<AGradHUD>(Actor);

	// GradHUD�� �߰��� CommonActivatableWidget�� ��ȸ�ϸ�, Deativate �����ش�
	for (TWeakObjectPtr<UCommonActivatableWidget>& AddedLayout : ActiveData.LayoutsAdded)
	{
		if (AddedLayout.IsValid())
		{
			AddedLayout->DeactivateWidget();
		}
	}
	ActiveData.LayoutsAdded.Reset();

	// UIExtension�� ���� ��ȸ�ϸ�, Unregister() �Ѵ�
	for (FUIExtensionHandle& Handle : ActiveData.ExtensionHandles)
	{
		// Unregister()�� UUIExtensionSystem���� ���Ű� �ùٸ��� �Ǿ� �Ѵ�
		Handle.Unregister();
	}
	ActiveData.ExtensionHandles.Reset();
}

void UGameFeatureAction_AddWidgets::OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context)
{
	Super::OnGameFeatureDeactivating(Context);
}

void UGameFeatureAction_AddWidgets::AddToWorld(const FWorldContext& WorldContext, const FGameFeatureStateChangeContext& ChangeContext)
{
	UWorld* World = WorldContext.World();
	UGameInstance* GameInstance = WorldContext.OwningGameInstance;
	FPerContextData& ActiveData = ContextData.FindOrAdd(ChangeContext);

	// GameFrameworkComponentManager�� ������ GameInstance�� World�� GameWorld���� �Ѵ�
	if ((GameInstance != nullptr) && (World != nullptr) && World->IsGameWorld())
	{
		// GameFrameworkComponentManager�� ������
		if (UGameFrameworkComponentManager* ComponentManager = UGameInstance::GetSubsystem<UGameFrameworkComponentManager>(GameInstance))
		{
			// �⺻������ Widget�� �߰��� ������� AGradHUD�� �����Ѵ�
			TSoftClassPtr<AActor> HUDActorClass = AGradHUD::StaticClass();

			// GFA_WorldBase�� ���������� HandleActorExtension�� �ݹ����� �޵��� ����
			TSharedPtr<FComponentRequestHandle> ExtensionRequestHandle = ComponentManager->AddExtensionHandler(
				HUDActorClass,
				UGameFrameworkComponentManager::FExtensionHandlerDelegate::CreateUObject(this, &ThisClass::HandleActorExtension, ChangeContext));

			ActiveData.ComponentRequests.Add(ExtensionRequestHandle);
		}
	}
}

void UGameFeatureAction_AddWidgets::HandleActorExtension(AActor* Actor, FName EventName, FGameFeatureStateChangeContext ChangeContext)
{
	FPerContextData& ActiveData = ContextData.FindOrAdd(ChangeContext);

	// Receiver�� AGradHUD�� Removed/Added�� ���� Widget�� �߰�/���� ���ش�
	if ((EventName == UGameFrameworkComponentManager::NAME_ExtensionRemoved) || (EventName == UGameFrameworkComponentManager::NAME_ReceiverRemoved))
	{
		RemoveWidgets(Actor, ActiveData);
	}
	else if ((EventName == UGameFrameworkComponentManager::NAME_ExtensionAdded) || (EventName == UGameFrameworkComponentManager::NAME_GameActorReady))
	{
		AddWidgets(Actor, ActiveData);
	}
}
