// Copyright Epic Games, Inc. All Rights Reserved.

#include "UI/Foundation/GradLoadingScreenSubsystem.h"

#include "Blueprint/UserWidget.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GradLoadingScreenSubsystem)

class UUserWidget;

//////////////////////////////////////////////////////////////////////
// UGradLoadingScreenSubsystem

UGradLoadingScreenSubsystem::UGradLoadingScreenSubsystem()
{
}

void UGradLoadingScreenSubsystem::SetLoadingScreenContentWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (LoadingScreenWidgetClass != NewWidgetClass)
	{
		LoadingScreenWidgetClass = NewWidgetClass;

		OnLoadingScreenWidgetChanged.Broadcast(LoadingScreenWidgetClass);
	}
}

TSubclassOf<UUserWidget> UGradLoadingScreenSubsystem::GetLoadingScreenContentWidget() const
{
	return LoadingScreenWidgetClass;
}

