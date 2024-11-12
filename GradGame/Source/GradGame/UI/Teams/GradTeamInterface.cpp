// Fill out your copyright notice in the Description page of Project Settings.


#include "GradTeamInterface.h"
#include "../../Network/NetworkManager.h"
#include "../../Player/GradPlayerController.h"

UGradTeamInterface::UGradTeamInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{}

void UGradTeamInterface::NativeConstruct()
{
	Super::NativeConstruct();

	if (APlayerController* PC = GetOwningPlayer())
	{
		if (AGradPlayerController* MyPC = Cast<AGradPlayerController>(PC))
		{
			NetworkManager = MyPC->GetNetwork();
			NetworkManager->OnTeamMembersChanged.BindUObject(this, &UGradTeamInterface::OnTeamChangedDelegate);
		}
	}
}


void UGradTeamInterface::OnTeamChangedDelegate(TArray<int32> PlayerIDs, int32 TeamMembers)
{
	if (TeamMembers != BeforeTeamMembers)
	{
		OnTeamChanged(PlayerIDs, TeamMembers);
		BeforeTeamMembers = TeamMembers;
		return;
	}
}