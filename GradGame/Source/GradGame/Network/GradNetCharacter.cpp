
#include "GradNetCharacter.h"
#include "GradNetworkComponent.h"
#include "GradGame/AbilitySystem/GradAbilitySystemComponent.h"
#include "GradGame/AbilitySystem/Abilities/GradGameplayAbility.h"
#include "Character/GradHealthComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Network/NetworkManager.h"
#include "Network/GradNetworkComponent.h"

AGradNetCharacter::AGradNetCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// AbilitySystemComponent 생성
	AbilitySystemComponent = CreateDefaultSubobject<UGradAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

	// HealthComponent 생성
	{
		HealthComponent = CreateDefaultSubobject<UGradHealthComponent>(TEXT("HealthComponent"));
		HealthComponent->OnDeathStarted.AddDynamic(this, &ThisClass::OnDeathStarted);
		HealthComponent->OnDeathFinished.AddDynamic(this, &ThisClass::OnDeathFinished);
	}
}

void AGradNetCharacter::BeginPlay()
{
	Super::BeginPlay();
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

PRAGMA_DISABLE_OPTIMIZATION
void AGradNetCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (UGradNetworkComponent* PawnNetComp = FindComponentByClass<UGradNetworkComponent>())
	{
		const Protocol::MoveState Move_State = PawnNetComp->PosInfo->move_state();
		FRotator NowRotation = GetActorRotation();

		// TODO: Pitch에 대한 값도 설정해야함..
		//FRotator TargetRotation = FRotator(PawnNetComp->PosInfo->pitch(), PawnNetComp->PosInfo->yaw(), PawnNetComp->PosInfo->roll());
		FRotator TargetRotation = FRotator(0, PawnNetComp->PosInfo->yaw(), 0);

		float YawInterpValue = 10.f;

		if (Move_State == Protocol::MOVE_STATE_IDLE)
		{
			FRotator NewRotation = FMath::RInterpTo(NowRotation, TargetRotation, DeltaTime, YawInterpValue);
			if (NewRotation.Equals(TargetRotation, 1.0f) == false)
			{
 				SetActorRotation(NewRotation);
			}
			else
			{
				SetActorRotation(TargetRotation);

			}
		}
		else if (Move_State == Protocol::MOVE_STATE_RUN)
		{
			FRotator NewRotation = FMath::RInterpTo(NowRotation, TargetRotation, DeltaTime, YawInterpValue);
			if (NewRotation.Equals(TargetRotation, 1.0f) == false)
			{
				SetActorRotation(NewRotation);
			
			}
			else
			{
				SetActorRotation(TargetRotation);

			}
			FVector ForwardDirection = FVector(PawnNetComp->PosInfo->d_x(), PawnNetComp->PosInfo->d_y(), PawnNetComp->PosInfo->d_z());
			AddMovementInput(ForwardDirection);
		}


		float Distance = FVector::Dist(GetActorLocation(), FVector(PawnNetComp->PosInfo->x(), PawnNetComp->PosInfo->y(), PawnNetComp->PosInfo->z()));
		if (Distance >= 200.f)
		{

			SetActorLocation(FVector(PawnNetComp->PosInfo->x(), PawnNetComp->PosInfo->y(), PawnNetComp->PosInfo->z()));
			SetActorRotation(TargetRotation);
		}
	}
}

void AGradNetCharacter::OnDeathStarted(AActor* OwningActor)
{
	DisableMovementAndCollision();

	/*uint64 PlayerId = GetPlayerId();

	for (auto World : GEngine->GetWorldContexts())
	{
		if (const UGameInstance* GameInstance = World.World()->GetGameInstance())
		{
			if (UNetworkManager* NetworkManager = GameInstance->GetSubsystem<UNetworkManager>())
			{
				NetworkManager->Objects.Remove(PlayerId);
			}
		}
	}*/
}

void AGradNetCharacter::OnDeathFinished(AActor* OwningActor)
{
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::DestroyDueToDeath);
}

void AGradNetCharacter::DisableMovementAndCollision()
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

void AGradNetCharacter::DestroyDueToDeath()
{
	K2_OnDeathFinished();

	UninitAndDestroy();
}

void AGradNetCharacter::UninitAndDestroy()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		DetachFromControllerPendingDestroy();
		SetLifeSpan(0.1f);
	}

	/*if (UGradAbilitySystemComponent* GradASC = GetGradAbilitySystemComponent())
	{
		if (GradASC->GetAvatarActor() == this)
		{
			PawnExtComponent->UninitializeAbilitySystem();
		}
	}*/

	SetActorHiddenInGame(true);
}

void AGradNetCharacter::HandleSkill(const FGameplayTag& InputTag)
{
	for (const FGameplayAbilitySpec& AbilitySpec : AbilitySystemComponent->GetActivatableAbilities())
	{
		if (AbilitySpec.Ability && (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag)))
		{
			const UGradGameplayAbility* GradAbilityCDO = CastChecked<UGradGameplayAbility>(AbilitySpec.Ability);
			AbilitySystemComponent->TryActivateAbility(AbilitySpec.Handle);
		}
	}
}
uint64 AGradNetCharacter::GetPlayerId()
{
	return (this->FindComponentByClass<UGradNetworkComponent>() ? this->FindComponentByClass<UGradNetworkComponent>()->GetObjectId() : 0);
}
PRAGMA_ENABLE_OPTIMIZATION