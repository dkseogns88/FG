// Fill out your copyright notice in the Description page of Project Settings.


#include "GradGameplayAbility.h"
#include "GradAbilityCost.h"
#include "Player/GradPlayerController.h"
#include "Character/GradHeroComponent.h"
#include "Character/GradCharacter.h"
#include "AbilitySystem/GradAbilitySystemComponent.h"
#include "Camera/GradCameraMode.h"
#include "GradGameplayTags.h"
#include "AbilitySystemGlobals.h"
#include "GradGame/Network/NetworkManager.h"
#include "GradGame/Network/GradNetworkComponent.h"
#include "GradGame/Network/GradNetCharacter.h"

UGradGameplayAbility::UGradGameplayAbility(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	ActivationPolicy = EGradAbilityActivationPolicy::OnInputTriggered;
	
	ActivationGroup = EGradAbilityActivationGroup::Independent;

}

UGradAbilitySystemComponent* UGradGameplayAbility::GetGradAbilitySystemComponentFromActorInfo() const
{
	return (CurrentActorInfo ? Cast<UGradAbilitySystemComponent>(CurrentActorInfo->AbilitySystemComponent.Get()) : nullptr);
}

AGradPlayerController* UGradGameplayAbility::GetGradPlayerControllerFromActorInfo() const
{
	return (CurrentActorInfo ? Cast<AGradPlayerController>(CurrentActorInfo->PlayerController.Get()) : nullptr);
}

AController* UGradGameplayAbility::GetControllerFromActorInfo() const
{
	if (CurrentActorInfo)
	{
		if (AController* PC = CurrentActorInfo->PlayerController.Get())
		{
			return PC;
		}
		// Look for a player controller or pawn in the owner chain.
		AActor* TestActor = CurrentActorInfo->OwnerActor.Get();
		while (TestActor)
		{
			if (AController* C = Cast<AController>(TestActor))
			{
				return C;
			}

			if (APawn* Pawn = Cast<APawn>(TestActor))
			{
				return Pawn->GetController();
			}

			TestActor = TestActor->GetOwner();
		}
	}
	return nullptr;
}

AGradCharacter* UGradGameplayAbility::GetGradCharacterFromActorInfo() const
{
	return (CurrentActorInfo ? Cast<AGradCharacter>(CurrentActorInfo->AvatarActor.Get()) : nullptr);
}

AGradNetCharacter* UGradGameplayAbility::GetGradNetCharacterFromActorInfo() const
{
	return (CurrentActorInfo ? Cast<AGradNetCharacter>(CurrentActorInfo->AvatarActor.Get()) : nullptr);
}

UGradHeroComponent* UGradGameplayAbility::GetHeroComponentFromActorInfo() const
{
	return (CurrentActorInfo ? UGradHeroComponent::FindHeroComponent(CurrentActorInfo->AvatarActor.Get()) : nullptr);
}

void UGradGameplayAbility::TryActivateAbilityOnSpawn(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) const
{
	const bool bIsPredicting = (Spec.ActivationInfo.ActivationMode == EGameplayAbilityActivationMode::Predicting);
	// Try to activate if activation policy is on spawn.
	if (ActorInfo && !Spec.IsActive() && !bIsPredicting && (ActivationPolicy == EGradAbilityActivationPolicy::OnSpawn))
	{
		UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get();
		const AActor* AvatarActor = ActorInfo->AvatarActor.Get();

		// If avatar actor is torn off or about to die, don't try to activate until we get the new one.
		if (ASC && AvatarActor && !AvatarActor->GetTearOff() && (AvatarActor->GetLifeSpan() <= 0.0f))
		{
			ASC->TryActivateAbility(Spec.Handle);
		}
	}
}

bool UGradGameplayAbility::CanChangeActivationGroup(EGradAbilityActivationGroup NewGroup) const
{
	return false;
}

bool UGradGameplayAbility::ChangeActivationGroup(EGradAbilityActivationGroup NewGroup)
{
	if (!CanChangeActivationGroup(NewGroup))
	{
		return false;
	}

	if (ActivationGroup != NewGroup)
	{
		UGradAbilitySystemComponent* GradASC = GetGradAbilitySystemComponentFromActorInfo();
		check(GradASC);

		GradASC->RemoveAbilityFromActivationGroup(ActivationGroup, this);
		GradASC->AddAbilityToActivationGroup(NewGroup, this);

		ActivationGroup = NewGroup;
	}

	return true;
}

void UGradGameplayAbility::SetCameraMode(TSubclassOf<UGradCameraMode> CameraMode)
{
	if (UGradHeroComponent* HeroComponent = GetHeroComponentFromActorInfo())
	{
		HeroComponent->SetAbilityCameraMode(CameraMode, CurrentSpecHandle);
		ActiveCameraMode = CameraMode;
	}
}

void UGradGameplayAbility::ClearCameraMode()
{
	if (ActiveCameraMode)
	{
		if (UGradHeroComponent* HeroComponent = GetHeroComponentFromActorInfo())
		{
			HeroComponent->ClearAbilityCameraMode(CurrentSpecHandle);
		}

		ActiveCameraMode = nullptr;
	}
}


bool UGradGameplayAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!ActorInfo || !ActorInfo->AbilitySystemComponent.IsValid())
	{
		return false;
	}

	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	//@TODO Possibly remove after setting up tag relationships
	UGradAbilitySystemComponent* GradASC = CastChecked<UGradAbilitySystemComponent>(ActorInfo->AbilitySystemComponent.Get());
	if (GradASC->IsActivationGroupBlocked(ActivationGroup))
	{
		if (OptionalRelevantTags)
		{
			OptionalRelevantTags->AddTag(FGradGameplayTags::Get().Ability_ActivateFail_ActivationGroup);
		}
		return false;
	}

	return true;
}

bool UGradGameplayAbility::CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CheckCost(Handle, ActorInfo, OptionalRelevantTags) || !ActorInfo)
	{
		return false;
	}

	// verify AdditionalCosts defined in GradGameplayAbility to activate GameplayAbility:
	for (TObjectPtr<UGradAbilityCost> AdditionalCost : AdditionalCosts)
	{
		if (AdditionalCost != nullptr)
		{
			if (!AdditionalCost->CheckCost(this, Handle, ActorInfo, OptionalRelevantTags))
			{
				return false;
			}
		}
	}

	// all cost requipements are meet! ready to activate!
	return true;
}

void UGradGameplayAbility::ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
	check(ActorInfo);

	// pay any additional cost
	for (TObjectPtr<UGradAbilityCost> AdditionalCost : AdditionalCosts)
	{
		if (AdditionalCost != nullptr)
		{
			AdditionalCost->ApplyCost(this, Handle, ActorInfo, ActivationInfo);
		}
	}
}

void UGradGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	K2_OnAbilityAdded();

	TryActivateAbilityOnSpawn(ActorInfo, Spec);
}

void UGradGameplayAbility::OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	K2_OnAbilityRemoved();

	Super::OnRemoveAbility(ActorInfo, Spec);
}

bool UGradGameplayAbility::DoesAbilitySatisfyTagRequirements(const UAbilitySystemComponent& AbilitySystemComponent, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	// Specialized version to handle death exclusion and AbilityTags expansion via ASC

	bool bBlocked = false;
	bool bMissing = false;

	UAbilitySystemGlobals& AbilitySystemGlobals = UAbilitySystemGlobals::Get();
	const FGameplayTag& BlockedTag = AbilitySystemGlobals.ActivateFailTagsBlockedTag;
	const FGameplayTag& MissingTag = AbilitySystemGlobals.ActivateFailTagsMissingTag;

	// Check if any of this ability's tags are currently blocked
	if (AbilitySystemComponent.AreAbilityTagsBlocked(AbilityTags))
	{
		bBlocked = true;
	}

	const UGradAbilitySystemComponent* 
		GradASC = Cast<UGradAbilitySystemComponent>(&AbilitySystemComponent);
	static FGameplayTagContainer AllRequiredTags;
	static FGameplayTagContainer AllBlockedTags;

	AllRequiredTags = ActivationRequiredTags;
	AllBlockedTags = ActivationBlockedTags;

	// Expand our ability tags to add additional required/blocked tags
	if (GradASC)
	{
		GradASC->GetAdditionalActivationTagRequirements(AbilityTags, AllRequiredTags, AllBlockedTags);
	}

	// Check to see the required/blocked tags for this ability
	if (AllBlockedTags.Num() || AllRequiredTags.Num())
	{
		static FGameplayTagContainer AbilitySystemComponentTags;

		AbilitySystemComponentTags.Reset();
		AbilitySystemComponent.GetOwnedGameplayTags(AbilitySystemComponentTags);

		if (AbilitySystemComponentTags.HasAny(AllBlockedTags))
		{
			if (OptionalRelevantTags && AbilitySystemComponentTags.HasTag(FGradGameplayTags::Get().Status_Death))
			{
				// If player is dead and was rejected due to blocking tags, give that feedback
				OptionalRelevantTags->AddTag(FGradGameplayTags::Get().Ability_ActivateFail_IsDead);
			}

			bBlocked = true;
		}

		if (!AbilitySystemComponentTags.HasAll(AllRequiredTags))
		{
			bMissing = true;
		}
	}

	if (SourceTags != nullptr)
	{
		if (SourceBlockedTags.Num() || SourceRequiredTags.Num())
		{
			if (SourceTags->HasAny(SourceBlockedTags))
			{
				bBlocked = true;
			}

			if (!SourceTags->HasAll(SourceRequiredTags))
			{
				bMissing = true;
			}
		}
	}

	if (TargetTags != nullptr)
	{
		if (TargetBlockedTags.Num() || TargetRequiredTags.Num())
		{
			if (TargetTags->HasAny(TargetBlockedTags))
			{
				bBlocked = true;
			}

			if (!TargetTags->HasAll(TargetRequiredTags))
			{
				bMissing = true;
			}
		}
	}

	if (bBlocked)
	{
		if (OptionalRelevantTags && BlockedTag.IsValid())
		{
			OptionalRelevantTags->AddTag(BlockedTag);
		}
		return false;
	}
	if (bMissing)
	{
		if (OptionalRelevantTags && MissingTag.IsValid())
		{
			OptionalRelevantTags->AddTag(MissingTag);
		}
		return false;
	}

	return true;
}

void UGradGameplayAbility::SendDash(EGradAbilityDashDirection DashDirection, FVector MoveDirection)
{
	AGradCharacter* const AvatarPawn = Cast<AGradCharacter>(GetAvatarActorFromActorInfo());
	if (AvatarPawn)
	{
		if (UGradNetworkComponent* NCP = AvatarPawn->FindComponentByClass<UGradNetworkComponent>())
		{
			Protocol::PosInfo* PosInfo = NCP->GetPosInfo();

			Protocol::C_DASH DashPkt;
			DashPkt.set_object_id(NCP->GetObjectId());

			switch (DashDirection)
			{
			case EGradAbilityDashDirection::Forward:
				DashPkt.set_dash_type(Protocol::DASH_DIRECTION_TYPE_FORWARD);
				break;
			case EGradAbilityDashDirection::Backward:
				DashPkt.set_dash_type(Protocol::DASH_DIRECTION_TYPE_BACKWARD);
				break;
			case EGradAbilityDashDirection::Left:
				DashPkt.set_dash_type(Protocol::DASH_DIRECTION_TYPE_LEFT);
				break;
			case EGradAbilityDashDirection::Right:
				DashPkt.set_dash_type(Protocol::DASH_DIRECTION_TYPE_RIGHT);
				break;
			default:
				DashPkt.set_dash_type(Protocol::DASH_DIRECTION_TYPE_NONE);
				break;
			}
			DashPkt.set_move_direction_x(MoveDirection.X);
			DashPkt.set_move_direction_y(MoveDirection.Y);
			DashPkt.set_move_direction_z(MoveDirection.Z);


			for (auto World : GEngine->GetWorldContexts())
			{
				if (const UGameInstance* GameInstance = World.World()->GetGameInstance())
				{
					if (UNetworkManager* NetworkManager = GameInstance->GetSubsystem<UNetworkManager>())
					{
						NetworkManager->SendPacket(DashPkt);
						return;
					}
				}
			}
		}
	}
}