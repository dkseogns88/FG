#include "GradFrontendStateComponent.h"


#include UE_INLINE_GENERATED_CPP_BY_NAME(GradFrontendStateComponent)


UGradFrontendStateComponent::UGradFrontendStateComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UGradFrontendStateComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UGradFrontendStateComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

}

bool UGradFrontendStateComponent::ShouldShowLoadingScreen(FString& OutReason) const
{

	return false;
}
