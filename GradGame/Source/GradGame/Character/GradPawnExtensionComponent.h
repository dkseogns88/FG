// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "GradPawnExtensionComponent.generated.h"

class UGradPawnData;
class UGradAbilitySystemComponent;

/**
 * �ʱ�ȭ ������ �����ϴ� ������Ʈ
 * - ��ü���� ��� ������Ʈ �ʱ�ȭ�� ���õ� ���縦 ���ش�.
 */
UCLASS()
class GRADGAME_API UGradPawnExtensionComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()
	
	public:
	UGradPawnExtensionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** FeatureName ���� */
	static const FName NAME_ActorFeatureName;

	/**
	* member methods
	*/
	static UGradPawnExtensionComponent* FindPawnExtensionComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UGradPawnExtensionComponent>() : nullptr); }
	template <class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }
	void SetPawnData(const UGradPawnData* InPawnData);
	void SetupPlayerInputComponent();
	UGradAbilitySystemComponent* GetGradAbilitySystemComponent() const { return AbilitySystemComponent; }

	/** AbilitySystemComponent�� AvatorActor ��� �ʱ�ȭ/���� ȣ�� */
	void InitializeAbilitySystem(UGradAbilitySystemComponent* InASC, AActor* InOwnerActor);
	void UninitializeAbilitySystem();
	
	/** OnAbilitySystem[Initialized|Uninitialized] Delegate�� �߰�: */
	void OnAbilitySystemInitialized_RegisterAndCall(FSimpleMulticastDelegate::FDelegate Delegate);
	void OnAbilitySystemUninitialized_Register(FSimpleMulticastDelegate::FDelegate Delegate);

	/**
	* UPawnComponent interfaces
	 */
	virtual void OnRegister() final;
	virtual void BeginPlay() final;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) final;

	/**
	 * IGameFrameworkInitStateInterface
	 */
	virtual FName GetFeatureName() const final { return NAME_ActorFeatureName; }
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) final;
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const final;
	virtual void CheckDefaultInitialization() final;

	/**
	 * Pawn�� ������ �����͸� ĳ��
	 */
	UPROPERTY(EditInstanceOnly, Category = "Grad|Pawn")
	TObjectPtr<const UGradPawnData> PawnData;

	/** AbilitySystemComponent ĳ�� */
	UPROPERTY()
	TObjectPtr<UGradAbilitySystemComponent> AbilitySystemComponent;

	/** ASC Init�� Uninit�� Delegate �߰� */
	FSimpleMulticastDelegate OnAbilitySystemInitialized;
	FSimpleMulticastDelegate OnAbilitySystemUninitialized;
};
