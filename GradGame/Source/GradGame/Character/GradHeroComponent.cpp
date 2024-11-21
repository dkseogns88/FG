// Fill out your copyright notice in the Description page of Project Settings.


#include "GradHeroComponent.h"
#include "GradPawnData.h"
#include "GradPawnExtensionComponent.h"
#include "PlayerMappableInputConfig.h"
#include "GradGame/Input/GradMappableConfigPair.h"
#include "GradGame/Input/GradInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/GameFrameworkComponentManager.h"
#include "GradGame/GradGameplayTags.h"
#include "GradGame/GradLogChannels.h"
#include "GradGame/Camera/GradCameraComponent.h"
#include "GradGame/Player/GradPlayerController.h"
#include "GradGame/Player/GradPlayerState.h"
#include "GradGame/AbilitySystem/GradAbilitySystemComponent.h"

/** FeatureName ����: static member variable �ʱ�ȭ */
const FName UGradHeroComponent::NAME_ActorFeatureName("Hero");

/** InputConfig�� GameFeatureAction Ȱ��ȭ ExtensioEvent �̸� */
const FName UGradHeroComponent::NAME_BindInputsNow("BindInputsNow");

UGradHeroComponent::UGradHeroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;

	AbilityCameraMode = nullptr;
}

void UGradHeroComponent::SetAbilityCameraMode(TSubclassOf<UGradCameraMode> CameraMode, const FGameplayAbilitySpecHandle& OwningSpecHandle)
{
	if (CameraMode)
	{
		AbilityCameraMode = CameraMode;
		AbilityCameraModeOwningSpecHandle = OwningSpecHandle;
	}
}

void UGradHeroComponent::ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle)
{
	if (AbilityCameraModeOwningSpecHandle == OwningSpecHandle)
	{
		AbilityCameraMode = nullptr;
		AbilityCameraModeOwningSpecHandle = FGameplayAbilitySpecHandle();
	}
}

void UGradHeroComponent::OnRegister()
{
	Super::OnRegister();

	// �ùٸ� Actor�� ��ϵǾ����� Ȯ��:
	{
		if (!GetPawn<APawn>())
		{
			UE_LOG(LogGrad, Error, TEXT("this component has been added to a BP whose base class is not a Pawn!"));
			return;
		}
	}

	RegisterInitStateFeature();
}

void UGradHeroComponent::BeginPlay()
{
	Super::BeginPlay();

	// PawnExtensionComponent�� ���ؼ� (PawnExtension Feature) OnActorInitStateChanged() �����ϵ��� (Observing)
	BindOnActorInitStateChanged(UGradPawnExtensionComponent::NAME_ActorFeatureName, FGameplayTag(), false);

	// InitState_Spawned�� �ʱ�ȭ
	ensure(TryToChangeInitState(FGradGameplayTags::Get().InitState_Spawned));

	// ForceUpdate ����
	CheckDefaultInitialization();
}


void UGradHeroComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterInitStateFeature();

	Super::EndPlay(EndPlayReason);
}

void UGradHeroComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{
	const FGradGameplayTags& InitTags = FGradGameplayTags::Get();

	if (Params.FeatureName == UGradPawnExtensionComponent::NAME_ActorFeatureName)
	{
		// GradPawnExtensionComponent�� DataInitialized ���� ��ȭ ���� ��, GradHeroComponent�� DataInitialized ���·� ����
		// - CanChangeInitState Ȯ��
		if (Params.FeatureState == InitTags.InitState_DataInitialized)
		{
			CheckDefaultInitialization();
		}
	}
}

bool UGradHeroComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const
{
	check(Manager);

	const FGradGameplayTags& InitTags = FGradGameplayTags::Get();
	APawn* Pawn = GetPawn<APawn>();
	AGradPlayerState* GradPS = GetPlayerState<AGradPlayerState>();

	// Spawned �ʱ�ȭ
	if (!CurrentState.IsValid() && DesiredState == InitTags.InitState_Spawned)
	{
		if (Pawn)
		{
			return true;
		}
	}

	// Spawned -> DataAvailable
	if (CurrentState == InitTags.InitState_Spawned && DesiredState == InitTags.InitState_DataAvailable)
	{
		if (!GradPS)
		{
			return false;
		}

		return true;
	}

	// DataAvailable -> DataInitialized
	if (CurrentState == InitTags.InitState_DataAvailable && DesiredState == InitTags.InitState_DataInitialized)
	{
		// PawnExtensionComponent�� DataInitialized�� ������ ��ٸ� (== ��� Feature Component�� DataAvailable�� ����)
		return GradPS && Manager->HasFeatureReachedInitState(Pawn, UGradPawnExtensionComponent::NAME_ActorFeatureName, InitTags.InitState_DataInitialized);
	}

	// DataInitialized -> GameplayReady
	if (CurrentState == InitTags.InitState_DataInitialized && DesiredState == InitTags.InitState_GameplayReady)
	{
		return true;
	}

	return false;
}

void UGradHeroComponent::HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState)
{
	const FGradGameplayTags& InitTags = FGradGameplayTags::Get();

	// DataAvailable -> DataInitialized �ܰ�
	if (CurrentState == InitTags.InitState_DataAvailable && DesiredState == InitTags.InitState_DataInitialized)
	{
		APawn* Pawn = GetPawn<APawn>();
		AGradPlayerState* GradPS = GetPlayerState<AGradPlayerState>();
		if (!ensure(Pawn && GradPS))
		{
			return;
		}

		// Input�� Camera�� ���� �ڵ鸵... (TODO)

		const bool bIsLocallyControlled = Pawn->IsLocallyControlled();
		const UGradPawnData* PawnData = nullptr;

		if (UGradPawnExtensionComponent* PawnExtComp = UGradPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			PawnData = PawnExtComp->GetPawnData<UGradPawnData>();

			UGradAbilitySystemComponent* AbliltyComponent = Pawn->FindComponentByClass<UGradAbilitySystemComponent>();
			if (AbliltyComponent)
			{
				PawnExtComp->InitializeAbilitySystem(AbliltyComponent, Pawn, GradPS);
			}
		}


		if (UGradPawnExtensionComponent* PawnExtComp = UGradPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			PawnData = PawnExtComp->GetPawnData<UGradPawnData>();
		}

		if (bIsLocallyControlled && PawnData)
		{
			// ���� GradCharacter�� Attach�� CameraComponent�� ã��
			if (UGradCameraComponent* CameraComponent = UGradCameraComponent::FindCameraComponent(Pawn))
			{
				CameraComponent->DetermineCameraModeDelegate.BindUObject(this, &ThisClass::DetermineCameraMode);
			}
		}

		if (AGradPlayerController* GradPC = GetController<AGradPlayerController>())
		{
			if (Pawn->InputComponent != nullptr)
			{
				InitializePlayerInput(Pawn->InputComponent);
			}
		}
	}
}

void UGradHeroComponent::CheckDefaultInitialization()
{
	// �ռ� BindOnActorInitStateChanged���� ���ҵ��� Hero Feature�� Pawn Extension Feature�� ���ӵǾ� �����Ƿ�, CheckDefaultInitializationForImplementers ȣ������ ����:

	// ContinueInitStateChain�� �ռ� PawnExtComponent�� ����
	const FGradGameplayTags& InitTags = FGradGameplayTags::Get();
	static const TArray<FGameplayTag> StateChain = { InitTags.InitState_Spawned, InitTags.InitState_DataAvailable, InitTags.InitState_DataInitialized, InitTags.InitState_GameplayReady };
	ContinueInitStateChain(StateChain);
}

PRAGMA_DISABLE_OPTIMIZATION
TSubclassOf<UGradCameraMode> UGradHeroComponent::DetermineCameraMode() const
{
	if (AbilityCameraMode)
	{
		return AbilityCameraMode;
	}

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return nullptr;
	}

	if (UGradPawnExtensionComponent* PawnExtComp = UGradPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (const UGradPawnData* PawnData = PawnExtComp->GetPawnData<UGradPawnData>())
		{
			return PawnData->DefaultCameraMode;
		}
	}

	return nullptr;
}
PRAGMA_ENABLE_OPTIMIZATION


void UGradHeroComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}

	// LocalPlayer�� �������� ����
	const APlayerController* PC = GetController<APlayerController>();
	check(PC);

	// EnhancedInputLocalPlayerSubsystem �������� ����
	const ULocalPlayer* LP = PC->GetLocalPlayer();
	check(LP);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);

	// EnhancedInputLocalPlayerSubsystem�� MappingContext�� ����ش�:
	Subsystem->ClearAllMappings();

	// PawnExtensionComponent -> PawnData -> InputConfig ���� ���� �Ǵ�:
	if (const UGradPawnExtensionComponent* PawnExtComp = UGradPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (const UGradPawnData* PawnData = PawnExtComp->GetPawnData<UGradPawnData>())
		{
			if (const UGradInputConfig* InputConfig = PawnData->InputConfig)
			{
				const FGradGameplayTags& GameplayTags = FGradGameplayTags::Get();

				// HeroComponent ������ �ִ� Input Mapping Context�� ��ȸ�ϸ�, EnhancedInputLocalPlayerSubsystem�� �߰��Ѵ�
				for (const FGradMappableConfigPair& Pair : DefaultInputConfigs)
				{
					if (Pair.bShouldActivateAutomatically)
					{
						FModifyContextOptions Options = {};
						Options.bIgnoreAllPressedKeysUntilRelease = false;

						// ���������� Input Mapping Context�� �߰��Ѵ�:
						// - AddPlayerMappableConfig�� ������ ���� ���� ��õ
						Subsystem->AddPlayerMappableConfig(Pair.Config.LoadSynchronous(), Options);
					}
				}

				UGradInputComponent* GradIC = CastChecked<UGradInputComponent>(PlayerInputComponent);
				{
					// InputTag_Move�� InputTag_Look_Mouse�� ���� ���� Input_Move()�� Input_LookMouse() ��� �Լ��� ���ε���Ų��:
					// - ���ε��� ����, Input �̺�Ʈ�� ���� ��� �Լ��� Ʈ���ŵȴ�
					{
						TArray<uint32> BindHandles;
						GradIC->BindAbilityActions(InputConfig, this, &ThisClass::Input_AbilityInputTagPressed, &ThisClass::Input_AbilityInputTagReleased, BindHandles);
					}

					// InputTag_Move�� InputTag_Look_Mouse�� ���� ���� Input_Move()�� Input_LookMouse() ��� �Լ��� ���ε���Ų��:
					// - ���ε��� ����, Input �̺�Ʈ�� ���� ��� �Լ��� Ʈ���ŵȴ�
					GradIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Move, ETriggerEvent::Triggered, this, &ThisClass::Input_Move, false);
					GradIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Move, ETriggerEvent::Completed, this, &ThisClass::Input_Move, false);
					GradIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Look_Mouse, ETriggerEvent::Triggered, this, &ThisClass::Input_LookMouse, false);
				}
			}
		}
	}
	// GameFeatureAction_AddInputConfig�� HandlePawnExtension �ݹ� �Լ� ����
	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(const_cast<APawn*>(Pawn), NAME_BindInputsNow);
}

void UGradHeroComponent::Input_Move(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();
	AController* Controller = Pawn ? Pawn->GetController() : nullptr;

	if (Controller)
	{
		const FVector2D Value = InputActionValue.Get<FVector2D>();

		const FRotator MovementRotation(0.0f, Controller->GetControlRotation().Yaw, 0.0f);

		const FVector ForwardDirection = MovementRotation.RotateVector(FVector::RightVector);
		const FVector RightDirection = MovementRotation.RotateVector(FVector::ForwardVector);

		Pawn->AddMovementInput(ForwardDirection, Value.X);
		Pawn->AddMovementInput(RightDirection, Value.Y);


		// TODO: ������ ������ �ȵ� ��쿡�� �̰� ���� �ϸ� �ȵǰ� �ٲ���.
		if (AGradPlayerController* GradPlayerController = Cast<AGradPlayerController>(Controller))
		{
			GradPlayerController->DesiredInput = Value;

			GradPlayerController->DesiredMoveDirection = FVector::ZeroVector;
			GradPlayerController->DesiredMoveDirection += ForwardDirection * Value.X;
			GradPlayerController->DesiredMoveDirection += RightDirection * Value.Y;
			GradPlayerController->DesiredMoveDirection.Normalize();

			GradPlayerController->DesiredYaw = MovementRotation.Yaw;
		}
	}
}
void UGradHeroComponent::Input_LookMouse(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}


	const FVector2D Value = InputActionValue.Get<FVector2D>();
	if (Value.X != 0.0f)
	{
		// X���� Yaw ���� ����:
		// - Camera�� ���� Yaw ����
		Pawn->AddControllerYawInput(Value.X);
	}

	if (Value.Y != 0.0f)
	{
		// Y���� Pitch ��!
		double AimInversionValue = -Value.Y;
		Pawn->AddControllerPitchInput(AimInversionValue);

		if (AGradPlayerController* GradPlayerController = Cast<AGradPlayerController>(Pawn->GetController()))
		{
			GradPlayerController->DesiredPitch = GradPlayerController->GetControlRotation().Pitch;
			//GradPlayerController->DesiredRoll = GradPlayerController->GetControlRotation().Roll;
			//GradPlayerController->DesiredPitch = AimInversionValue;
		}
	}
}

void UGradHeroComponent::Input_AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (const UGradPawnExtensionComponent* PawnExtComp = UGradPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			if (UGradAbilitySystemComponent* GradASC = PawnExtComp->GetGradAbilitySystemComponent())
			{
				GradASC->AbilityInputTagPressed(InputTag);
			}
		}
	}
}

void UGradHeroComponent::Input_AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (const UGradPawnExtensionComponent* PawnExtComp = UGradPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			if (UGradAbilitySystemComponent* GradASC = PawnExtComp->GetGradAbilitySystemComponent())
			{
				GradASC->AbilityInputTagReleased(InputTag);
			}
		}
	}
}
