// Fill out your copyright notice in the Description page of Project Settings.


#include "GradCharacter.h"
#include "GradPawnExtensionComponent.h"
#include "GradGame/Camera/GradCameraComponent.h"
#include "GradGame/AbilitySystem/GradAbilitySystemComponent.h"
#include "GradGame/AbilitySystem/Attributes/GradCombatSet.h"
#include "GradGame/AbilitySystem/Attributes/GradHealthSet.h"
#include "GradHealthComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Network/NetworkManager.h"
#include "Network/GradNetworkComponent.h"

AGradCharacter::AGradCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// Tick�� ��Ȱ��ȭ -> ��������Ʈ ��Ļ��
	//PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	// PawnExtComponent ����
	PawnExtComponent = CreateDefaultSubobject<UGradPawnExtensionComponent>(TEXT("PawnExtensionComponent"));
	{
		PawnExtComponent->OnAbilitySystemInitialized_RegisterAndCall(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ThisClass::OnAbilitySystemInitialized));
		PawnExtComponent->OnAbilitySystemUninitialized_Register(FSimpleMulticastDelegate::FDelegate::CreateUObject(this, &ThisClass::OnAbilitySystemUninitialized));
	}

	// CameraComponent ����
	{
		CameraComponent = CreateDefaultSubobject<UGradCameraComponent>(TEXT("CameraComponent"));
		CameraComponent->SetRelativeLocation(FVector(-300.0f, 0.0f, 75.0f));
	}

	// AbilitySystemComponent ����
	AbilitySystemComponent = CreateDefaultSubobject<UGradAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	CreateDefaultSubobject<UGradHealthSet>(TEXT("HealthSet"));
	CreateDefaultSubobject<UGradCombatSet>(TEXT("CombatSet"));

	// HealthComponent ����
	{
		HealthComponent = CreateDefaultSubobject<UGradHealthComponent>(TEXT("HealthComponent"));
		HealthComponent->OnDeathStarted.AddDynamic(this, &ThisClass::OnDeathStarted);
		HealthComponent->OnDeathFinished.AddDynamic(this, &ThisClass::OnDeathFinished);
	}
}

void AGradCharacter::OnAbilitySystemInitialized()
{
	check(AbilitySystemComponent);

	// HealthComponent�� ASC�� ���� �ʱ�ȭ
	HealthComponent->InitializeWithAbilitySystem(AbilitySystemComponent);
}

void AGradCharacter::OnAbilitySystemUninitialized()
{
	HealthComponent->UninitializeWithAbilitySystem();
}

// Called when the game starts or when spawned
void AGradCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGradCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGradCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Pawn�� Possess�μ�, Controller�� PlayerState ���� ������ ������ ���°� �Ǿ���:
	// - SetupPlayerInputComponent Ȯ��
	PawnExtComponent->SetupPlayerInputComponent();
}

void AGradCharacter::OnDeathStarted(AActor* OwningActor)
{
	DisableMovementAndCollision();

	uint64 PlayerId = GetPlayerId();

	/*for (auto World : GEngine->GetWorldContexts())
	{
		if (const UGameInstance* GameInstance = World.World()->GetGameInstance())
		{
			if (UNetworkManager* NetworkManager = GameInstance->GetSubsystem<UNetworkManager>())
			{
				NetworkManager->MyPlayer = nullptr;
				NetworkManager->Objects.Remove(PlayerId);
			}
		}
	}*/
}

void AGradCharacter::OnDeathFinished(AActor* OwningActor)
{
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::DestroyDueToDeath);
}

void AGradCharacter::DisableMovementAndCollision()
{
	if (Controller)
	{
		Controller->SetIgnoreMoveInput(true);
	}

	UCapsuleComponent* CapsuleComp = GetCapsuleComponent();
	check(CapsuleComp);
	CapsuleComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CapsuleComp->SetCollisionResponseToAllChannels(ECR_Ignore);

	UCharacterMovementComponent* GradMoveComp = GetCharacterMovement();
	check(GradMoveComp);
	GradMoveComp->StopMovementImmediately();
	GradMoveComp->DisableMovement();
}

void AGradCharacter::DestroyDueToDeath()
{
	K2_OnDeathFinished();

	UninitAndDestroy();
}

void AGradCharacter::UninitAndDestroy()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		DetachFromControllerPendingDestroy();
		SetLifeSpan(0.1f);
	}

	if (UGradAbilitySystemComponent* GradASC = GetGradAbilitySystemComponent())
	{
		if (GradASC->GetAvatarActor() == this)
		{
			PawnExtComponent->UninitializeAbilitySystem();
		}
	}

	SetActorHiddenInGame(true);
}

int64 AGradCharacter::GetPlayerId()
{
	return (this->FindComponentByClass<UGradNetworkComponent>() ? this->FindComponentByClass<UGradNetworkComponent>()->GetObjectId() : 0);
}

