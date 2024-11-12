
#pragma once

#include "Subsystems/GameInstanceSubsystem.h"
#include "GameUIManagerSubsystem.generated.h"

/** forward declarations */
class UGameUIPolicy;
class UCommonLocalPlayer;

/**
 * GameUIManagerSubsystem�� GameInstanceSubsystem�� ����Ѵ�
 * - ���⼭ �ָ��ؾ� �� ���� UGameUIManagerSubsystem�� UCLASS �Ӽ����� Abstract��� ���ǵǾ� �ִ�
 * - �ش� Ŭ������ �ܵ����� ��� �Ұ��ϸ�, ������ ��ӹ��� Concrete Class�μ� Ȱ��Ǿ� �Ѵ�
 */
UCLASS(Abstract, config = Game)
class COMMONGAME_API UGameUIManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UGameUIManagerSubsystem();

	void SwitchToPolicy(UGameUIPolicy* InPolicy);

	/**
	 * UGameInstanceSubsystem's interfaces
	 */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	/**
	 * UGameUIManagerSubsystem's interfaces
	*/
	virtual void NotifyPlayerAdded(UCommonLocalPlayer* LocalPlayer);
	virtual void NotifyPlayerRemoved(UCommonLocalPlayer* LocalPlayer);
	virtual void NotifyPlayerDestroyed(UCommonLocalPlayer* LocalPlayer);

	const UGameUIPolicy* GetCurrentUIPolicy() const { return CurrentPolicy; }
	UGameUIPolicy* GetCurrentUIPolicy() { return CurrentPolicy; }

	UPROPERTY(Transient)
	TObjectPtr<UGameUIPolicy> CurrentPolicy = nullptr;
	/**
	 * default UI policy�� ������ class
	 * - �츮�� �ش� Ŭ������ B_BttGameUIPolicy�� ������ ���̴�
	 */
	UPROPERTY(Config, EditAnywhere)
	TSoftClassPtr<UGameUIPolicy> DefaultUIPolicyClass;
};
