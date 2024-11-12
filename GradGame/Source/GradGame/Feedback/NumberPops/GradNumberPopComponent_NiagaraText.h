// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GradNumberPopComponent.h"

#include "GradNumberPopComponent_NiagaraText.generated.h"

class UGradDamagePopStyleNiagara;
class UNiagaraComponent;
class UObject;

UCLASS(Blueprintable)
class UGradNumberPopComponent_NiagaraText : public UGradNumberPopComponent
{
	GENERATED_BODY()

public:

	UGradNumberPopComponent_NiagaraText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~UGradNumberPopComponent interface
	virtual void AddNumberPop(const FGradNumberPopRequest& NewRequest) override;
	//~End of UGradNumberPopComponent interface

protected:
	
	TArray<int32> DamageNumberArray;

	/** Style patterns to attempt to apply to the incoming number pops */
	UPROPERTY(EditDefaultsOnly, Category = "Number Pop|Style")
	TObjectPtr<UGradDamagePopStyleNiagara> Style;

	//Niagara Component used to display the damage
	UPROPERTY(EditDefaultsOnly, Category = "Number Pop|Style")
	TObjectPtr<UNiagaraComponent> NiagaraComp;
};
