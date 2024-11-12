// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "InputActionValue.h"
#include "GradInputConfig.h"
#include "EnhancedInputComponent.h"
#include "GradInputComponent.generated.h"


UCLASS()
class GRADGAME_API UGradInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
public:
	UGradInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/**
	 * member methods
	 */
	template <class UserClass, typename FuncType>
	void BindNativeAction(const UGradInputConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func, bool bLogIfNotFound);

	template <class UserClass, typename PressedFuncType, typename ReleasedFuncType>
	void BindAbilityActions(const UGradInputConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc, TArray<uint32>& BindHandles);
};

template <class UserClass, typename FuncType>
void UGradInputComponent::BindNativeAction(const UGradInputConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func, bool bLogIfNotFound)
{
	check(InputConfig);

	// ���⼭ �� �� �ֵ���, InputConfig�� Ȱ��ȭ ������ InputAction�� ��� �ִ�.
	// - ���� InputConfig�� ���� InputAction�� Binding��Ű��, nullptr�� ��ȯ�Ͽ�, ���ε��ϴµ� �����Ѵ�!
	if (const UInputAction* IA = InputConfig->FindNativeInputActionForTag(InputTag, bLogIfNotFound))
	{
		BindAction(IA, TriggerEvent, Object, Func);
	}
}

template <class UserClass, typename PressedFuncType, typename ReleasedFuncType>
void UGradInputComponent::BindAbilityActions(const UGradInputConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc, ReleasedFuncType ReleasedFunc, TArray<uint32>& BindHandles)
{
	check(InputConfig);

	// AbilityAction�� ���ؼ��� �׳� ��� InputAction�� �� ���ε� ��Ų��!
	for (const FGradInputAction& Action : InputConfig->AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag.IsValid())
		{
			if (PressedFunc)
			{
				BindHandles.Add(BindAction(Action.InputAction, ETriggerEvent::Triggered, Object, PressedFunc, Action.InputTag).GetHandle());
			}

			if (ReleasedFunc)
			{
				BindHandles.Add(BindAction(Action.InputAction, ETriggerEvent::Completed, Object, ReleasedFunc, Action.InputTag).GetHandle());
			}
		}
	}
}
