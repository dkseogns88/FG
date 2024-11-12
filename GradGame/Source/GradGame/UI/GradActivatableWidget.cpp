// Fill out your copyright notice in the Description page of Project Settings.


#include "GradActivatableWidget.h"

UGradActivatableWidget::UGradActivatableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{}

TOptional<FUIInputConfig> UGradActivatableWidget::GetDesiredInputConfig() const
{
	// �ռ� ���� �ߴ� WidgetInputMode�� ����, InputConfig�� �������ش�
	// - ECommonInputMode�� ���� Input�� �帧�� Game/Menu Ȥ�� �Ѵٷ� ���ϴ� ���� �����ϴ�
	// - ���� ���, �츮�� Menu�� ���� ���, ���̻� Game�� Input�� ������ ���� ���� ��� �ſ� �����ϴ�:
	//   - ����غ���, Menu ����ε� Space�� �����ų� MouseClick���� �Ѿ��� �����ٸ�... �츮�� �ǵ��� ��Ȳ�� �ƴ� ���̴�
	switch (InputConfig)
	{
	case EGradWidgetInputMode::GameAndMenu:
		return FUIInputConfig(ECommonInputMode::All, GameMouseCaptureMode);
	case EGradWidgetInputMode::Game:
		return FUIInputConfig(ECommonInputMode::Game, GameMouseCaptureMode);
	case EGradWidgetInputMode::Menu:
		return FUIInputConfig(ECommonInputMode::Menu, GameMouseCaptureMode);
	case EGradWidgetInputMode::Default:
	default:
		return TOptional<FUIInputConfig>();
	}
}
