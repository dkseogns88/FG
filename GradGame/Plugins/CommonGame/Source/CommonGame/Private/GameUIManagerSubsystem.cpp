#include "GameUIManagerSubsystem.h"
#include "GameUIPolicy.h"

UGameUIManagerSubsystem::UGameUIManagerSubsystem()
{
}

void UGameUIManagerSubsystem::SwitchToPolicy(UGameUIPolicy* InPolicy)
{
	if (CurrentPolicy != InPolicy)
	{
		CurrentPolicy = InPolicy;
	}
}

void UGameUIManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// CurrentPolicy�� �����Ǿ� ���� �ʰ�, DefaultUIPolicyClass�� ����� �����Ǿ� ���� ��� (�츮�� HakUIPolicy����?)
	if (!CurrentPolicy && !DefaultUIPolicyClass.IsNull())
	{
		// UIPolicyClass�� BP�����̱⿡, �ε��ؾ� ��
		TSubclassOf<UGameUIPolicy> PolicyClass = DefaultUIPolicyClass.LoadSynchronous();

		// UIPolicyClass�� ���� NewObject�� �ν��Ͻ��ؼ� CurrentPolicy�� ����
		SwitchToPolicy(NewObject<UGameUIPolicy>(this, PolicyClass));
	}
}

void UGameUIManagerSubsystem::Deinitialize()
{
	Super::Deinitialize();
	SwitchToPolicy(nullptr);
}

bool UGameUIManagerSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	// �켱 DedicatedServer�� ���, GameUIManagerSubsystem�� Ȱ��ȭ���� ����
	if (!CastChecked<UGameInstance>(Outer)->IsDedicatedServerInstance())
	{
		// ���� ��� Subsystem�� UGameUIManagerSubsystem�� ��ӹ��� �Ҵٸ�, �ش� GameInstanceSubsystem�� Ȱ��ȭ ����
		TArray<UClass*> ChildClasses;
		GetDerivedClasses(GetClass(), ChildClasses, false);

		return ChildClasses.Num() == 0;
	}

	return false;
}

void UGameUIManagerSubsystem::NotifyPlayerAdded(UCommonLocalPlayer* LocalPlayer)
{
	if (ensure(LocalPlayer) && CurrentPolicy)
	{
		CurrentPolicy->NotifyPlayerAdded(LocalPlayer);
	}
}

void UGameUIManagerSubsystem::NotifyPlayerRemoved(UCommonLocalPlayer* LocalPlayer)
{
	if (LocalPlayer && CurrentPolicy)
	{
		CurrentPolicy->NotifyPlayerRemoved(LocalPlayer);
	}
}

void UGameUIManagerSubsystem::NotifyPlayerDestroyed(UCommonLocalPlayer* LocalPlayer)
{
	if (LocalPlayer && CurrentPolicy)
	{
		CurrentPolicy->NotifyPlayerDestroyed(LocalPlayer);
	}
}
