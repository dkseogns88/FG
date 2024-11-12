// Fill out your copyright notice in the Description page of Project Settings.

#include "GradPawnComponent_CharacterParts.h"
#include "GradPawnComponent_AppliedCharacterParts.h"

UGradPawnComponent_CharacterParts::UGradPawnComponent_CharacterParts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UGradPawnComponent_CharacterParts::BeginPlay()
{
	Super::BeginPlay();

	/*if (AController* OwningController = GetController<AController>())
	{
		OwningController->OnPossessedPawnChanged.AddDynamic(this, &ThisClass::OnPossessedPawnChanged);
	}*/
}

void UGradPawnComponent_CharacterParts::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	RemoveAllCharacterParts();
	Super::EndPlay(EndPlayReason);
}

PRAGMA_DISABLE_OPTIMIZATION
UGradPawnComponent_AppliedCharacterParts* UGradPawnComponent_CharacterParts::GetPawnCustomizer() const
{
	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		// �����غ���, �츮�� �ռ� GradPawnComponent_CharacterParts�� ��ӹ޴� B_MannequinPawnCosmetics�� �̹� B_Hero_ShooterMannequin�� �߰��Ͽ���.
		// B_MannequinPawnCosmetics�� ��ȯ�Ǳ� ����Ѵ�
		return ControlledPawn->FindComponentByClass<UGradPawnComponent_AppliedCharacterParts>();
	}
	return nullptr;
}
PRAGMA_ENABLE_OPTIMIZATION

void UGradPawnComponent_CharacterParts::AddCharacterPart(const FGradCharacterPart& NewPart)
{
	// ���� ���� ������ ��������Ʈ�� �������Ʈ���� ����ؼ� ���� ���̴�.
	AddCharacterPartInternal(NewPart);
}

void UGradPawnComponent_CharacterParts::AddCharacterPartInternal(const FGradCharacterPart& NewPart)
{
	FGradCharacterPartEntry& NewEntry = CharacterParts.AddDefaulted_GetRef();
	NewEntry.Part = NewPart;

	// �����δ� ���⼭ ���Ϳ� ���� ��ȯ�� ��������� �ʴ´�. ���������� ���� ���� ���� ���⼭ �����Ѵ�.
	if (UGradPawnComponent_AppliedCharacterParts* PawnCustomizer = GetPawnCustomizer())
	{
		NewEntry.Handle = PawnCustomizer->AddCharacterPart(NewPart);
	}
}


void UGradPawnComponent_CharacterParts::RemoveAllCharacterParts()
{
	if (UGradPawnComponent_AppliedCharacterParts* PawnCustomizer = GetPawnCustomizer())
	{
		for (FGradCharacterPartEntry& Entry : CharacterParts)
		{
			PawnCustomizer->RemoveCharacterPart(Entry.Handle);
		}
	}
	CharacterParts.Reset();
}

void UGradPawnComponent_CharacterParts::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn)
{
	// ���� OldPawn�� ���ؼ��� Character Parts�� ���� ����������
	if (UGradPawnComponent_AppliedCharacterParts* OldCustomizer = OldPawn ? OldPawn->FindComponentByClass<UGradPawnComponent_AppliedCharacterParts>() : nullptr)
	{
		for (FGradCharacterPartEntry& Entry : CharacterParts)
		{
			OldCustomizer->RemoveCharacterPart(Entry.Handle);
			Entry.Handle.Reset();
		}
	}

	// ���ο� Pawn�� ���ؼ� ���� Controller�� ������ �ִ� Character Parts�� �߰�������
	if (UGradPawnComponent_AppliedCharacterParts* NewCustomizer = NewPawn ? NewPawn->FindComponentByClass<UGradPawnComponent_AppliedCharacterParts>() : nullptr)
	{
		for (FGradCharacterPartEntry& Entry : CharacterParts)
		{
			check(!Entry.Handle.IsValid());
			Entry.Handle = NewCustomizer->AddCharacterPart(Entry.Part);
		}
	}
}