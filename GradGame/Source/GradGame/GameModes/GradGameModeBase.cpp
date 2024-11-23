// Fill out your copyright notice in the Description page of Project Settings.


#include "GradGameModeBase.h"
#include "GradExperienceManagerComponent.h"
#include "GradGameState.h"
#include "GradGame/GradLogChannels.h"
#include "GradGame/Character/GradCharacter.h"
#include "GradGame/Player/GradPlayerController.h"
#include "GradGame/Player/GradPlayerState.h"
#include "GradGame/Character/GradPawnData.h"
#include "GradExperienceDefinition.h"
#include "GradGame/Character/GradPawnExtensionComponent.h"
#include "GradGame/UI/GradHUD.h"
#include "Kismet/GameplayStatics.h"
#include "GradWorldSettings.h"
#include "Network/NetworkManager.h"

AGradGameModeBase::AGradGameModeBase()
{
	GameStateClass = AGradGameState::StaticClass();
	PlayerControllerClass = AGradPlayerController::StaticClass();
	PlayerStateClass = AGradPlayerState::StaticClass();
	DefaultPawnClass = AGradCharacter::StaticClass();
	HUDClass = AGradHUD::StaticClass();
}

void AGradGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	// ���� GameInstance�� ����, �ʱ�ȭ �۾��� ����ǹǷ�, �� �����ӿ��� 
	// 
	// �� Concept�� Experience ó���� ������ �� ����:
	// - �̸� ó���ϱ� ����, �������� �ڿ� �̺�Ʈ�� �޾� ó���� �̾ �����Ѵ�
	// - Experience�� �ε��ϴ� ��ü�� ���� ��尡 �ƴ϶� ExperienceManagerComponent��.
	// - �ʹ� �� �ʹ��̶� ExperienceManagerComponent�� ������ �ȵž ���� �����ӿ� �����ϰڴ�.
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::HandleMatchAssignmentIfNotExpectingOne);
}

void AGradGameModeBase::InitGameState()
{
	Super::InitGameState();

	// Experience �񵿱� �ε��� ���� Delegate�� �غ��Ѵ�:
	UGradExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UGradExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	// OnExperienceLoaded ���
	// - ���� ���� Experience �ε��� �Ϸᰡ �Ǿ� �ִ� ������ �� ���� ���
	// - �ε��� �Ϸᰡ �Ǹ� �� �������� OnExperienceLoaded(�ε�)�� �����ϴ�.
	ExperienceManagerComponent->CallOrRegister_OnExperienceLoaded(FOnGradExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));

}

UClass* AGradGameModeBase::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	// GetPawnDataForController�� Ȱ���Ͽ�, PawnData�κ��� PawnClass(�츮�� ������ ��)�� ��������
	if (const UGradPawnData* PawnData = GetPawnDataForController(InController))
	{
		if (PawnData->PawnClass)
		{
			return PawnData->PawnClass;
		}
	}

	return Super::GetDefaultPawnClassForController_Implementation(InController);
}

PRAGMA_DISABLE_OPTIMIZATION
void AGradGameModeBase::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
	if (IsExperienceLoaded())
	{
		Super::HandleStartingNewPlayer_Implementation(NewPlayer);
	}
}

APawn* AGradGameModeBase::SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform)
{
	// - ���������� ���� ���忡 ��ȯ

	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Instigator = GetInstigator();
	SpawnInfo.ObjectFlags |= RF_Transient;
	SpawnInfo.bDeferConstruction = true;

	if (UClass* PawnClass = GetDefaultPawnClassForController(NewPlayer))
	{
		if (APawn* SpawnedPawn = GetWorld()->SpawnActor<APawn>(PawnClass, SpawnTransform, SpawnInfo))
		{
			// FindPawnExtensionComponent ����
			if (UGradPawnExtensionComponent* PawnExtComp = UGradPawnExtensionComponent::FindPawnExtensionComponent(SpawnedPawn))
			{
				if (const UGradPawnData* PawnData = GetPawnDataForController(NewPlayer))
				{
					PawnExtComp->SetPawnData(PawnData);
				}
			}

			SpawnedPawn->FinishSpawning(SpawnTransform);
			return SpawnedPawn;
		}
	}

	return nullptr;
}
PRAGMA_ENABLE_OPTIMIZATION

void AGradGameModeBase::HandleMatchAssignmentIfNotExpectingOne()
{
	// �� �Լ��� �������̽� ������ �´��� �ƴϸ� �������� �ɼ� ���� �Ӹ� �ƴ϶�
	// ���Ȱ������ �����ϴ� ��Ī ���� �� �׷� �͵��� ���� �˻��ؼ�
	// �´� �ָ� �������ִ� �Լ���.
	// ��, ������ Experience�� �ε��� �ٷ� ���ִ� �� �ƴ϶� HandleMatch�� �ִ� ���̴�.
	// �츮�� Experience �ε��� �����ϴ� �ܰ�θ� �� ���̴�.
	// TODO: ���⼭ ���� ������ ������ �� ��

	// �ش� �Լ������� �츮�� �ε��� Experience�� ���� PrimaryAssetId�� �����Ͽ�, OnMatchAssignmentGiven���� �Ѱ��ش�

	FPrimaryAssetId ExperienceId;

	// precedence order (highest wins)
	// - matchmaking assignment (if present)
	// - default experience

	UWorld* World = GetWorld();

	// �츮�� �ռ�, URL�� �Բ� ExtraArgs�� �Ѱ�� ������ OptionsString�� �����Ǿ� �ִ�.
	if (!ExperienceId.IsValid() && UGameplayStatics::HasOption(OptionsString, TEXT("Experience")))
	{
		// Experience�� Value�� �����ͼ�, PrimaryAssetId�� �������ش�: �̶�, HakExperienceDefinition�� Class �̸��� ����Ѵ�
		const FString ExperienceFromOptions = UGameplayStatics::ParseOption(OptionsString, TEXT("Experience"));
		ExperienceId = FPrimaryAssetId(FPrimaryAssetType(UGradExperienceDefinition::StaticClass()->GetFName()), FName(*ExperienceFromOptions));
	}

	if (!ExperienceId.IsValid())
	{
		if (AGradWorldSettings* TypedWorldSettings = Cast<AGradWorldSettings>(GetWorldSettings()))
		{
			ExperienceId = TypedWorldSettings->GetDefaultGameplayExperience();
		}
	}

	// fall back to the default experience
	// �ϴ� �⺻ �ɼ����� default�ϰ� B_GradDefaultExperience�� ��������
	if (!ExperienceId.IsValid())
	{
		ExperienceId = FPrimaryAssetId(FPrimaryAssetType("GradExperienceDefinition"), FName("B_GradDefaultExperience"));
		// - �ε��� �� �� �ƴϴ�. ��ĵ �Ǿ��ִ� �Ÿ� �����ϱ� ���ؼ� ������ �� ��
	}

	// ���ڰ� ������ HandleMatchAssignmentIfNotExpectingOne�� OnMatchAssignmentGiven()�� ���� ���������� �̸��� �ʹ��� �ʴ´ٰ� �����Ѵ�
	// - ����, ������� Grad�� �����Ǹ�, �ش� �Լ��� ���� �� ������ �� ���� ������ �����Ѵ�
	OnMatchAssignmentGiven(ExperienceId);
}

void AGradGameModeBase::OnMatchAssignmentGiven(FPrimaryAssetId ExperienceId)
{
	// �ش� �Լ��� ExperienceManagerComponent�� Ȱ���Ͽ� Experience�� �ε��ϱ� ����, ExperienceManagerComponent�� ServerSetCurrentExperience�� ȣ���Ѵ�

	check(ExperienceId.IsValid());

	UGradExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UGradExperienceManagerComponent>();
	check(ExperienceManagerComponent);
	ExperienceManagerComponent->ServerSetCurrentExperience(ExperienceId);
	// - ���� ��尡 Experience�� �ε��ϴ� �� �ƴ϶� ExperienceManagerComponent���� �ε�
}

bool AGradGameModeBase::IsExperienceLoaded() const
{
	check(GameState);
	UGradExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UGradExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	return ExperienceManagerComponent->IsExperienceLoaded();
}

void AGradGameModeBase::OnExperienceLoaded(const UGradExperienceDefinition* CurrentExperience)
{ 
	// PlayerController�� ��ȸ�ϸ�
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PC = Cast<APlayerController>(*Iterator);

		// PlayerController�� Pawn�� Possess���� �ʾҴٸ�, RestartPlayer�� ���� Pawn�� �ٽ� Spawn�Ѵ�
		// - �ѹ� OnPossess�� ������ ����:
		if (PC && PC->GetPawn() == nullptr)
		{
			if (PlayerCanRestart(PC))
			{
				RestartPlayer(PC);
			}
		}
	}
}

const UGradPawnData* AGradGameModeBase::GetPawnDataForController(const AController* InController) const
{
	// ���� ���߿� PawnData�� �������̵� �Ǿ��� ���, PawnData�� PlayerState���� �������� ��
	if (InController)
	{
		if (const AGradPlayerState* GradPS = InController->GetPlayerState<AGradPlayerState>())
		{
			// GetPawnData ����
			if (const UGradPawnData* PawnData = GradPS->GetPawnData<UGradPawnData>())
			{
				return PawnData;
			}
		}
	}

	// fall back to the default for the current experience
	// ���� PlayerState�� PawnData�� �����Ǿ� ���� ���� ���, ExperienceManagerComponent�� CurrentExperience�κ��� �����ͼ� ����
	check(GameState);
	UGradExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UGradExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	if (ExperienceManagerComponent->IsExperienceLoaded())
	{
		// GetExperienceChecked ����
		const UGradExperienceDefinition* Experience = ExperienceManagerComponent->GetCurrentExperienceChecked();
		if (Experience->DefaultPawnData)
		{
			return Experience->DefaultPawnData;
		}
	}

	// ��� ���̽����� �ڵ鸵 �ȵǾ����� nullptr
	return nullptr;
}
