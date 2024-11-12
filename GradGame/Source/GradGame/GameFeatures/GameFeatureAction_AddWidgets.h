// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "UIExtensionSystem.h"
#include "GameFeatureAction_WorldActionBase.h"
#include "GameFeatureAction_AddWidgets.generated.h"

/** forward declarations */
struct FComponentRequestHandle;

/** HUD�� Layout ��û */
USTRUCT()
struct FGradHUDLayoutRequest
{
	GENERATED_BODY()

	/** UI�� ���̾ƿ����� CommonActivatableWidget�� ��� */
	UPROPERTY(EditAnywhere, Category = UI, meta = (AssetBundles = "Client"))
	TSoftClassPtr<UCommonActivatableWidget> LayoutClass;

	/** �ռ� ���Ҵ� PrimaryGameLayout�� LayerID�� �ǹ� */
	UPROPERTY(EditAnywhere, Category = UI)
	FGameplayTag LayerID;
};

USTRUCT()
struct FGradHUDElementEntry
{
	GENERATED_BODY()

	/** GradHUDLayout ���� �ø� ����� �Ǵ� Widget Class */
	UPROPERTY(EditAnywhere, Category = UI, meta = (AssetBundles = "Client"))
	TSoftClassPtr<UUserWidget> WidgetClass;

	/** SlotID�� GradHUDLayoutRequest�� �ø� LayoutClass�� ���ǵ� Slot(GameplayTag)�� �ǹ� */
	UPROPERTY(EditAnywhere, Category = UI)
	FGameplayTag SlotID;
};

UCLASS()
class GRADGAME_API UGameFeatureAction_AddWidgets : public UGameFeatureAction_WorldActionBase
{
	GENERATED_BODY()
public:
	struct FPerContextData
	{
		TArray<TSharedPtr<FComponentRequestHandle>> ComponentRequests;
		TArray<TWeakObjectPtr<UCommonActivatableWidget>> LayoutsAdded;

		/** 
		���� HUDElement�� UIExtension���� �����ȴ�. */
		TArray<FUIExtensionHandle> ExtensionHandles;
	};

	void AddWidgets(AActor* Actor, FPerContextData& ActiveData);
	void RemoveWidgets(AActor* Actor, FPerContextData& ActiveData);

	/**
	* UGameFeatureAction's interface
	 */
	virtual void OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context) override;

	/**
	 * UGameFeatureAction_WorldActionBase's interface
	 */
	virtual void AddToWorld(const FWorldContext& WorldContext, const FGameFeatureStateChangeContext& ChangeContext) override;

	void HandleActorExtension(AActor* Actor, FName EventName, FGameFeatureStateChangeContext ChangeContext);

	/** GFA Add/Remove ���� ���� */
	TMap<FGameFeatureStateChangeContext, FPerContextData> ContextData;
	
	/**
	 * GFA_AddWidget�� ���¸� �����ϴ� Layout�� Layout ���� �ø� Widget ��ü�� Widgets���� �����ȴ�
	 */
	UPROPERTY(EditAnywhere, Category = UI)
	TArray<FGradHUDLayoutRequest> Layout;

	UPROPERTY(EditAnywhere, Category = UI)
	TArray<FGradHUDElementEntry> Widgets;

};
