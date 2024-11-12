#include "GradAnimInstance.h"
#include "AbilitySystemGlobals.h"

void UGradAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (AActor* OwningActor = GetOwningActor())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor))
		{
			InitializeWithAbilitySystem(ASC);
		}
	}
}

void UGradAnimInstance::InitializeWithAbilitySystem(UAbilitySystemComponent* ASC)
{
	// ASC ���� �����ϴ� GameplayTag�� AnimInstance�� ��� Property�� Delegate�� �����Ͽ�, �� ��ȭ�� ���� �ݿ��� �����Ѵ�
	GameplayTagPropertyMap.Initialize(this, ASC);
}
