// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GradCharacterPartTypes.h"
#include "Components/ControllerComponent.h"
#include "Components/PawnComponent.h"
#include "GradPawnComponent_CharacterParts.generated.h"

class UGradPawnComponent_AppliedCharacterParts;


USTRUCT()
struct FGradCharacterPartEntry
{
	GENERATED_BODY()

	/** Character Part�� ���� ����(��Ÿ ������ == MetaData) */
	UPROPERTY(EditAnywhere)
	FGradCharacterPart Part;

	/** Character Part �ڵ� (������) - Controller�� Possess�ϰ� �ִ� Pawn���� ������(�ν��Ͻ�) Character Part �ڵ鰪 */
	FGradCharacterPartHandle Handle;
};


UCLASS(meta = (BlueprintSpawnableComponent))
class UGradPawnComponent_CharacterParts : public UPawnComponent //UControllerComponent
{
	GENERATED_BODY()
public:
	UGradPawnComponent_CharacterParts(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UGradPawnComponent_AppliedCharacterParts* GetPawnCustomizer() const;

	UFUNCTION(BlueprintCallable, Category = Cosmetics)
	void AddCharacterPart(const FGradCharacterPart& NewPart);

	void AddCharacterPartInternal(const FGradCharacterPart& NewPart);

	void RemoveAllCharacterParts();

	/** UFUNCTION���� �������� ������ AddDynamic�� ���� �ʴ´�! */
	UFUNCTION()
	void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);

	UPROPERTY(EditAnywhere, Category = Cosmetics)
	TArray<FGradCharacterPartEntry> CharacterParts;
};

