// Fill out your copyright notice in the Description page of Project Settings.

#include "GradPawnExtensionComponent.h"
#include "Components/GameFrameworkComponentManager.h"
#include "GradGame/GradGameplayTags.h"
#include "GradGame/GradLogChannels.h"
#include "GradGame/AbilitySystem/GradAbilitySystemComponent.h"
#include "GradGame/Character/GradPawnData.h"
#include "GradGame/Player/GradPlayerState.h"

/** feature name�� component �����ϱ� component�� ���� pawn extension�� ���� ���� Ȯ���� �� �ִ� */
const FName UGradPawnExtensionComponent::NAME_ActorFeatureName("PawnExtension");

UGradPawnExtensionComponent::UGradPawnExtensionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;
}

PRAGMA_DISABLE_OPTIMIZATION
void UGradPawnExtensionComponent::SetPawnData(const UGradPawnData* InPawnData)
{
	// Pawn�� ���� Authority�� ���� ���, SetPawnData�� �������� ����
	APawn* Pawn = GetPawnChecked<APawn>();
	if (Pawn->GetLocalRole() != ROLE_Authority)
	{
		return;
	}

	if (PawnData)
	{
		return;
	}

	// PawnData ������Ʈ
	PawnData = InPawnData;
}

void UGradPawnExtensionComponent::SetupPlayerInputComponent()
{
	// ForceUpdate�� �ٽ� InitState ���� ��ȯ ���� (���� ��)
	CheckDefaultInitialization();
}

void UGradPawnExtensionComponent::InitializeAbilitySystem(UGradAbilitySystemComponent* InASC, AActor* InOwnerActor, APlayerState* GradPS)
{
	check(InASC && InOwnerActor);

	if (AbilitySystemComponent == InASC)
	{
		return;
	}

	if (AbilitySystemComponent)
	{
		UninitializeAbilitySystem();
	}

	APawn* Pawn = GetPawnChecked<APawn>();
	//AActor* ExistingAvatar = InASC->GetAvatarActor();
	//check(!ExistingAvatar);

	// ASC�� ������Ʈ�ϰ�, InitAbilityActorInfo�� Pawn�� ���� ȣ���Ͽ�, AvatarActor�� Pawn���� ������Ʈ ���ش�
	AbilitySystemComponent = InASC;
	AbilitySystemComponent->InitAbilityActorInfo(GradPS, Pawn);
	//AbilitySystemComponent->InitAbilityActorInfo(InOwnerActor, Pawn);

	if (PawnData)
	{
		InASC->SetTagRelationshipMapping(PawnData->TagRelationshipMapping);
	}

	// OnAbilitySystemInitialized�� ���ε��� Delegate ȣ��
	OnAbilitySystemInitialized.Broadcast();
}

void UGradPawnExtensionComponent::UninitializeAbilitySystem()
{
	if (!AbilitySystemComponent)
	{
		return;
	}


	if (AbilitySystemComponent->GetAvatarActor() == GetOwner())
	{
		// OnAbilitySystemUninitialized�� ���ε��� Delegate ȣ��
		OnAbilitySystemUninitialized.Broadcast();
	}

	AbilitySystemComponent = nullptr;
}

void UGradPawnExtensionComponent::OnAbilitySystemInitialized_RegisterAndCall(FSimpleMulticastDelegate::FDelegate Delegate)
{
	// OnAbilitySystemInitialized�� UObject�� ���ε��Ǿ� ���� ������ �߰� (Uniqueness)
	if (!OnAbilitySystemInitialized.IsBoundToObject(Delegate.GetUObject()))
	{
		OnAbilitySystemInitialized.Add(Delegate);
	}

	// �̹� ASC�� �����Ǿ�����, Delegate�� �߰��ϴ°� �ƴ� �ٷ� ȣ�� (�̹� �ʱ�ȭ�Ǿ� �����ϱ�!)
	if (AbilitySystemComponent)
	{
		Delegate.Execute();
	}
}

void UGradPawnExtensionComponent::OnAbilitySystemUninitialized_Register(FSimpleMulticastDelegate::FDelegate Delegate)
{
	if (!OnAbilitySystemUninitialized.IsBoundToObject(Delegate.GetUObject()))
	{
		OnAbilitySystemUninitialized.Add(Delegate);
	}
}

void UGradPawnExtensionComponent::OnRegister()
{
	Super::OnRegister();

	// OnRegister: �� �ʹݿ� �Ͼ. OnRegister �ܰ迡�� ������Ʈ���� ���� ��Ų��. 

	// �ùٸ� Actor�� ��ϵǾ����� Ȯ��:
	{
		if (!GetPawn<APawn>())
		{
			UE_LOG(LogGrad, Error, TEXT("this component has been added to a BP whose base class is not a Pawn!"));
			return;
		}
	}

	// GameFrameworkComponentManager�� InitState ����� ���� ��� ����:
	// - ����� ��ӹ޾Ҵ� IGameFrameworkInitStateInterface �޼��� RegisterInitStateFeature()�� Ȱ��
	// - �ش� �Լ��� ������ ����
	RegisterInitStateFeature();

	// ������� ���� �Լ�
	UGameFrameworkComponentManager* Manager = UGameFrameworkComponentManager::GetForActor(GetOwningActor());
}
PRAGMA_ENABLE_OPTIMIZATION

void UGradPawnExtensionComponent::BeginPlay()
{
	Super::BeginPlay();

	// FeatureName�� NAME_None�� ������, Actor�� ��ϵ� Feature Component�� InitState ���¸� �����ϰڴٴ� �ǹ�:
	// 1. ������ ��� ��� -> �츮�� ��� ���
	// 2. �Ѿ�� ���¿� ���� ��� -> �츮�� ��� ����
	// 3. �߿����� ����
	BindOnActorInitStateChanged(NAME_None, FGameplayTag(), false);

	// InitState_Spawned�� ���� ��ȯ:
	// - TryToChangeInitState�� �Ʒ��� ���� ����ȴ�:
	//   1. CanChangeInitState�� ���� ��ȯ ���ɼ� ���� �Ǵ�
	//   2. HandleChangeInitState�� ���� ���� ���� (Feature Component)
	//   3. BindOnActorInitStateChanged�� Bind�� Delegate�� ���ǿ� �°� ȣ���� ��
	//      - GradPawnExtensionComponent�� ���, ��� Actor�� Feature ���� ��ȭ�� ���� OnActorInitStateChanged()�� ȣ���
	ensure(TryToChangeInitState(FGradGameplayTags::Get().InitState_Spawned));

	// �ش� �Լ��� �츮�� �������̵� �Ѵ�:
	// - �� �Լ��� ForceUpdateInitState�� ���� �������� �������ָ� �ȴ� 
	// - ���� ���� ������Ʈ ���� (���� CanChangeInitState�� HandleChangleInitState�� �������ش�)
	CheckDefaultInitialization();
}

void UGradPawnExtensionComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// �ռ�, OnRegister�� RegisterInitStateFeature()�� ���� ���߾�����
	// - ���帮�� ��� ������ �ȴ�.
	UnregisterInitStateFeature();

	Super::EndPlay(EndPlayReason);
}

void UGradPawnExtensionComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{
	if (Params.FeatureName != NAME_ActorFeatureName)
	{
		// GradPawnExtensionComponent�� �ٸ� Feature Component���� ���°� DataAvailable�� �����Ͽ�, Sync�� ���ߴ� ������ �־��� (CanChangeInitState)
		// - �̸� �������ϱ� ����, OnActorInitStateChanged������ DataAvailable�� ���� ���������� CheckDefaultInitialization�� ȣ���Ͽ�, ���¸� Ȯ���Ѵ�
		const FGradGameplayTags& InitTags = FGradGameplayTags::Get();
		if (Params.FeatureState == InitTags.InitState_DataAvailable)
		{
			CheckDefaultInitialization();
		}
	}
}

bool UGradPawnExtensionComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const
{
	check(Manager);

	APawn* Pawn = GetPawn<APawn>();
	const FGradGameplayTags& InitTags = FGradGameplayTags::Get();

	// InitState_Spawned �ʱ�ȭ
	if (!CurrentState.IsValid() && DesiredState == InitTags.InitState_Spawned)
	{
		// Pawn�� �� ���ø� �Ǿ������� �ٷ� Spawned�� �Ѿ!
		if (Pawn)
		{
			return true;
		}
	}

	// Spawned -> DataAvailable
	if (CurrentState == InitTags.InitState_Spawned && DesiredState == InitTags.InitState_DataAvailable)
	{
		// �Ƹ� PawnData�� ������ �����ϴ� ����̴�
		if (!PawnData)
		{
			return false;
		}

		// LocallyControlled�� Pawn�� Controller�� ������ ����!
		const bool bIsLocallyControlled = Pawn->IsLocallyControlled();
		if (bIsLocallyControlled)
		{
			if (!GetController<AController>())
			{
				return false;
			}
		}

		return true;
	}

	// DataAvailable -> DataInitialized
	if (CurrentState == InitTags.InitState_DataAvailable && DesiredState == InitTags.InitState_DataInitialized)
	{
		// Actor�� ���ε�� ��� Feature���� DataAvailable ������ ��, DataInitialized�� �Ѿ:
		// - HaveAllFeaturesReachedInitState Ȯ��
		return Manager->HaveAllFeaturesReachedInitState(Pawn, InitTags.InitState_DataAvailable);
	}

	// DataInitialized -> GameplayReady
	if (CurrentState == InitTags.InitState_DataInitialized && DesiredState == InitTags.InitState_GameplayReady)
	{
		return true;
	}

	// ���� ��������(linear) transition�� �ƴϸ� false!
	return false;
}

void UGradPawnExtensionComponent::CheckDefaultInitialization()
{
	// PawnExtensionComponent�� Feature Component���� �ʱ�ȭ�� �����ϴ� Component�̴�:
	// - ����, Actor�� ���ε��� Feature Component�鿡 ���� CheckDefaultInitialization�� ȣ�����ֵ��� �Ѵ� (ForceUpdate ����?)
	// - �� �޼��带 IGameFrameworkInitStateInterface�� �����ϴµ�, CheckDefaultInitializationForImplementers�̴�:
	// - ������ CheckDefaultInitializationForImplementers ����:
	CheckDefaultInitializationForImplementers();

	const FGradGameplayTags& InitTags = FGradGameplayTags::Get();

	// ����� ���� InitState�� ���� �Ѱ���� �Ѵ�... (��� �̰� �� �˾Ƽ� �� �� ������ ������ ����...)
	static const TArray<FGameplayTag> StateChain = { InitTags.InitState_Spawned, InitTags.InitState_DataAvailable, InitTags.InitState_DataInitialized, InitTags.InitState_GameplayReady };

	// CanChangeInitState()�� HandleChangeInitState() �׸��� ChangeFeatureInitState ȣ���� ���� OnActorInitStateChanged Delegate ȣ����� �������ش�:
	// �Ʒ��� �ڵ带 ������ ����:
	// - �ش� �ڵ���� ����, �츮�� ������ ������ �� �ִ�:
	//   - ��� ���¸� �����Ҷ����� �ѹ� ������Ʈ �Ѵ�
	//   - InitState�� ���� ��ȭ�� Linear(������)����!... -> ���߿� Diagram���� �����ϸ鼭 ����
	//     - ������Ʈ�� ���߸� ������ ��������� ���� �ǹ�! (chaining)
	ContinueInitStateChain(StateChain);
}
