#pragma once

#include "Containers/Array.h"
#include "Templates/SubclassOf.h"
#include "GradGame/Inventory/GradInventoryItemDefinition.h"
#include "InventoryFragment_ReticleConfig.generated.h"

/** forward declaration */
class UGradReticleWidgetBase;

UCLASS()
class UGradInventoryFragment_ReticleConfig : public UGradInventoryItemFragment
{
	GENERATED_BODY()
public:
	/** ���⿡ ���յ� ReticleWidget ������ ������ �ִ� Fragment */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Reticle)
	TArray<TSubclassOf<UGradReticleWidgetBase>> ReticleWidgets;
};