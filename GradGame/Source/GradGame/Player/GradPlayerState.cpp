// Fill out your copyright notice in the Description page of Project Settings.


#include "GradPlayerState.h"
#include "GradGame/GameModes/GradExperienceManagerComponent.h"
#include "GradGame/GameModes/GradGameModeBase.h"
#include "GradGame/Character/GradCharacter.h"
#include "GradGame/Character/GradPawnData.h"
#include "GradGame/AbilitySystem/GradAbilitySystemComponent.h"
#include "GradGame/AbilitySystem/GradAbilitySet.h"
#include "GradLogChannels.h"



void AGradPlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	const AGameStateBase* GameState = GetWorld()->GetGameState();
	check(GameState);

	UGradExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UGradExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	ExperienceManagerComponent->CallOrRegister_OnExperienceLoaded(FOnGradExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
}

void AGradPlayerState::BeginPlay()
{
	Super::BeginPlay();

}
void AGradPlayerState::OnExperienceLoaded(const UGradExperienceDefinition* CurrentExperience)
{
	// CurrentExperience�� �ִµ� �� ���� ���� �Ѿ�� ������ �ñ�? 2���� ����
	// 1. ������ �˻�
	// 2. �� �����͸� ������ ���� �Լ��� �ϳ��� �Լ��� �����ϱ� ����
	//   - Experience Load#4 5���� ����

	if (AGradGameModeBase* GameMode = GetWorld()->GetAuthGameMode<AGradGameModeBase>())
	{
		// AGradGameMode���� GetPawnDataForController�� �����ؾ� ��
		// - GetPawnDataForController���� �츮�� ���� PawnData�� �������� �ʾ����Ƿ�, ExperienceMangerComponent�� DefaultPawnData�� �����Ѵ�
		if (const UGradPawnData* NewPawnData = GameMode->GetPawnDataForController(GetOwningController()))
		{
			SetPawnData(NewPawnData);
		}
		else
		{
			UE_LOG(LogGrad, Error, TEXT("ALyraPlayerState::OnExperienceLoaded(): Unable to find PawnData to initialize player state [%s]!"), *GetNameSafe(this));
		}
	}
}

void AGradPlayerState::SetPawnData(const UGradPawnData* InPawnData)
{
	check(InPawnData);

	// PawnData�� �ι� �����Ǵ� ���� ������ ����!
	check(!PawnData);

	PawnData = InPawnData;

	/*AController* Controller = GetOwner<AController>();
	if (Controller)
	{
		APawn* PlayerPawn = Controller->GetPawn();
		if (PlayerPawn)
		{
			AGradCharacter* Pawn= Cast<AGradCharacter>(PlayerPawn);
			if (UGradAbilitySystemComponent* AbilitySystemComponent = Pawn->FindComponentByClass<UGradAbilitySystemComponent>())
			{
				for (UGradAbilitySet* AbilitySet : PawnData->AbilitySets)
				{
					if (AbilitySet)
					{
						AbilitySet->GiveToAbilitySystem(AbilitySystemComponent, nullptr);
					}
				}
			}
		}
	}*/
}