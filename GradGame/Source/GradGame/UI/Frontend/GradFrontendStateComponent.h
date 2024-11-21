#pragma once

#include "Components/GameStateComponent.h"
#include "ControlFlowNode.h"
#include "LoadingProcessInterface.h"

#include "GradFrontendStateComponent.generated.h"

UCLASS(Abstract)
class UGradFrontendStateComponent : public UGameStateComponent, public ILoadingProcessInterface
{
	GENERATED_BODY()

public:
	UGradFrontendStateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual bool ShouldShowLoadingScreen(FString& OutReason) const override;

private:
	bool bShouldShowLoadingScreen = true;

};