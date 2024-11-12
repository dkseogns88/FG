// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GradGame/Equipment/GradGameplayAbility_FromEquipment.h"
#include "GradGameplayAbility_RangedWeapon.generated.h"

class UGradRangedWeaponInstance;

/** ��� ������� Taget���� �������� �ɼǵ� (Grad�� ���, �پ��� �ɼ� ����) */
UENUM(BlueprintType)
enum class EGradAbilityTargetingSource : uint8
{
	/** Camera �������� ���� */
	CameraTowardsFocus,
};

UCLASS()
class GRADGAME_API UGradGameplayAbility_RangedWeapon : public UGradGameplayAbility_FromEquipment
{
	GENERATED_BODY()
public:
	struct FRangedWeaponFiringInput
	{
		FVector StartTrace;
		FVector EndAim;
		FVector AimDir;
		UGradRangedWeaponInstance* WeaponData = nullptr;
		bool bCanPlayBulletFX = false;

		FRangedWeaponFiringInput()
			: StartTrace(ForceInitToZero)
			, EndAim(ForceInitToZero)
			, AimDir(ForceInitToZero)
		{}
	};

	UGradGameplayAbility_RangedWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable)
	void StartRangedWeaponTargeting();

	void PerformLocalTargeting(TArray<FHitResult>& OutHits);
	FTransform GetTargetingTransform(APawn* SourcePawn, EGradAbilityTargetingSource Source);
	FVector GetWeaponTargetingSourceLocation() const;
	void TraceBulletsInCartridge(const FRangedWeaponFiringInput& InputData, TArray<FHitResult>& OutHits);
	FHitResult DoSingleBulletTrace(const FVector& StartTrace, const FVector& EndTrace, float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHits) const;
	FHitResult WeaponTrace(const FVector& StartTrace, const FVector& EndTrace, float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHitResults) const;
	ECollisionChannel DetermineTraceChannel(FCollisionQueryParams& TraceParams, bool bIsSimulated) const;
	void AddAdditionalTraceIgnoreActors(FCollisionQueryParams& TraceParams) const;
	void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& InData, FGameplayTag ApplicationTag);

	/** called when target data is ready */
	UFUNCTION(BlueprintImplementableEvent)
	void OnRangeWeaponTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetData);

	UGradRangedWeaponInstance* GetWeaponInstance();

public:
	void SendFire(uint64 HitObjectId, bool IsHit);

	FTransform WeaponTransform = FTransform();
};