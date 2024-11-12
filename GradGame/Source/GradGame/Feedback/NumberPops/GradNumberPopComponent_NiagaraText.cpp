// Copyright Epic Games, Inc. All Rights Reserved.

#include "GradNumberPopComponent_NiagaraText.h"

#include "Feedback/NumberPops/GradNumberPopComponent.h"
#include "GradDamagePopStyleNiagara.h"
#include "GradLogChannels.h"
#include "NiagaraComponent.h"
#include "NiagaraDataInterfaceArrayFunctionLibrary.h"
#include "NiagaraFunctionLibrary.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GradNumberPopComponent_NiagaraText)

UGradNumberPopComponent_NiagaraText::UGradNumberPopComponent_NiagaraText(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{


}

PRAGMA_DISABLE_OPTIMIZATION
void UGradNumberPopComponent_NiagaraText::AddNumberPop(const FGradNumberPopRequest& NewRequest)
{
	//int32 LocalDamage = NewRequest.NumberToDisplay;

	////Change Damage to negative to differentiate Critial vs Normal hit
	//if (NewRequest.bIsCriticalDamage)
	//{
	//	LocalDamage *= -1;
	//}

	////Add a NiagaraComponent if we don't already have one
	//if (!NiagaraComp)
	//{
	//	NiagaraComp = NewObject<UNiagaraComponent>(GetOwner());
	//	if (Style != nullptr)
	//	{
	//		NiagaraComp->SetAsset(Style->TextNiagara);
	//		NiagaraComp->bAutoActivate = false;

	//	}
	//	NiagaraComp->SetupAttachment(nullptr);
	//	check(NiagaraComp);
	//	NiagaraComp->RegisterComponent();
	//}

	//NiagaraComp->Activate(false);
	//NiagaraComp->SetWorldLocation(NewRequest.WorldLocation);

	//UE_LOG(LogGrad, Log, TEXT("DamageHit location : %s"), *(NewRequest.WorldLocation.ToString()));
	////Add Damage information to the current Niagara list - Damage informations are packed inside a FVector4 where XYZ = Position, W = Damage
	//TArray<FVector4> DamageList = UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(NiagaraComp, Style->NiagaraArrayName);
	//DamageList.Add(FVector4(NewRequest.WorldLocation.X, NewRequest.WorldLocation.Y, NewRequest.WorldLocation.Z, LocalDamage));
	//UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(NiagaraComp, Style->NiagaraArrayName, DamageList);

	int32 LocalDamage = NewRequest.NumberToDisplay;

	NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), Style->TextNiagara, NewRequest.WorldLocation);
	if (NiagaraComp)
	{
		TArray<FVector4> DamageList;

		DamageList.Add(FVector4(NewRequest.WorldLocation.X, NewRequest.WorldLocation.Y, NewRequest.WorldLocation.Z, LocalDamage));
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(NiagaraComp, Style->NiagaraArrayName, DamageList);
	}
}
PRAGMA_ENABLE_OPTIMIZATION