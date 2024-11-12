// Fill out your copyright notice in the Description page of Project Settings.

#include "AsyncAction_ExperienceReady.h"
#include "GradExperienceManagerComponent.h"

UAsyncAction_ExperienceReady::UAsyncAction_ExperienceReady(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{}

UAsyncAction_ExperienceReady* UAsyncAction_ExperienceReady::WaitForExperienceReady(UObject* WorldContextObject)
{
	UAsyncAction_ExperienceReady* Action = nullptr;
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		Action = NewObject<UAsyncAction_ExperienceReady>();
		Action->WorldPtr = World;
		Action->RegisterWithGameInstance(World);
	}
	return Action;
}

void UAsyncAction_ExperienceReady::Activate()
{
	if (UWorld* World = WorldPtr.Get())
	{
		// GameState�� �̹� World�� �غ�Ǿ� ������, Step1�� ��ŵ�ϰ� �ٷ� Step2�� �����Ѵ�
		if (AGameStateBase* GameState = World->GetGameState())
		{
			Step2_ListenToExperienceLoading(GameState);
		}
		else
		{
			// ���� �غ�Ǿ� ���� ������, UWorld::GameStateSetEvent�� Step1_HandleGameStateSet�� Delegate�� ���ε���Ų��
			// - Step1���� ������ ���̴�
			World->GameStateSetEvent.AddUObject(this, &ThisClass::Step1_HandleGameStateSet);
		}
	}
	else
	{
		// ���� AsyncAction ����̾��� World�� ���̻� Valid���� �����Ƿ�, ���� ����
		// - �ڵ带 ����������, GameInstance���� ���۷��� ������� ���Ž�Ų��
		// - UAsyncAction�� ĳ�� ��ġ�� GameInstance���� �� �� �ִ�
		SetReadyToDestroy();
	}
}

void UAsyncAction_ExperienceReady::Step1_HandleGameStateSet(AGameStateBase* GameState)
{
	if (UWorld* World = WorldPtr.Get())
	{
		World->GameStateSetEvent.RemoveAll(this);
	}

	Step2_ListenToExperienceLoading(GameState);
}

void UAsyncAction_ExperienceReady::Step2_ListenToExperienceLoading(AGameStateBase* GameState)
{
	check(GameState);
	// ���⼭ �� �츮�� GameStateSetEvent�� Delegate�� ���ε����״��� ������ ���´�:
	// - Expierence �ε� ���� ������ GameState�� �پ��ִ� ExperienceManagerComponent���� ������ �� �ֱ� �����̴�!
	UGradExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UGradExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	// ���� �̹� Experience�� �غ�Ǿ��ٸ�, Step3�� ��ŵ�ϰ� Step4�� ����
	if (ExperienceManagerComponent->IsExperienceLoaded())
	{
		UWorld* World = GameState->GetWorld();
		check(World);

		// ĳ������ Mesh�� PawnComponent_CharacterParts�� ���ؼ� ������ �ȴ�.
		// ��Ȯ�ϰ� ���ϸ� ControllerComponent_CharacterParts���� ������ Character Part�� ������ ���� Mesh�� �����ؼ� �������ش�.
		// ControllerComponent_CharacterParts�� �����ϴ� �������� Pawn�� Possess���� �ʱ� ������ UPawnComponent_CharacterParts�� ȣ���� �� ��� ��������� Mesh ������ �Ұ����ϴ�.
		// �׷��� ControllerComponent_CharacterParts�� OnPossessedPawnChanged ��������Ʈ�� ���� Possess�Ǵ� ������ �ߵ��ϵ��� �����ϴµ�
		// ���⼭ ������ �߻��ϰ� �ȴ� �ֳĸ� Possess �Լ��� ���������� OnPossessedPawnChanged ��������Ʈ�� Possess ���� ������ �ܰ�� ȣ���ϱ� ������
		// ���� ĳ������ PossessedBy�� ���� ȣ���ϰ� �ȴ� �׷��� �Ǹ� Mesh�� ������ �Ǿ� ���� �ʾƼ� ������ ������ �� AnimLayer �׸��� ��� ������ ������ �Ұ����ϴ�.
		// �׷��� �ذ� ������� �� �������� �ƴ� �����ϰ� ���� �����ӿ��� ó���ϵ��� �ؼ� OnPossessedPawnChanged�� ���� ȣ�� �ǵ��� �����Ѵ�.
		// �ƹ� Experience�� �غ�Ǿ��ٰ� �ص�, ���� �غ���� ���� ���°� ���� ���� ������ (Ȥ�� �������̶����?) �׷��� �׳� ���� Tick�� ����ǵ��� Timer�� ���ε���Ų��
		World->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateUObject(this, &ThisClass::Step4_BroadcastReady));
	}
	else
	{
		// �غ� �ȵǾ��ٸ�, OnExperienceLoaded�� ���ε���Ų�� (���� �ε� ������ Step3���� ������ �� ���̴�)
		ExperienceManagerComponent->CallOrRegister_OnExperienceLoaded(FOnGradExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::Step3_HandleExperienceLoaded));
	}
}

void UAsyncAction_ExperienceReady::Step3_HandleExperienceLoaded(const UGradExperienceDefinition* CurrentExperience)
{
	// ���� ���� ExperienceDefinition�� ���� ó���� ������ ����

	Step4_BroadcastReady();
}

void UAsyncAction_ExperienceReady::Step4_BroadcastReady()
{
	// ���ε��� BP Ȥ�� UFUNCTION�� ȣ�����ش�
	OnReady.Broadcast();
	SetReadyToDestroy();
}