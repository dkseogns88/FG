#pragma once

#include "Components/Widget.h"
#include "SCircumferenceMarkerWidget.h"
#include "CircumferenceMarkerWidget.generated.h"

UCLASS()
class UCircumferenceMarkerWidget : public UWidget
{
	GENERATED_BODY()
public:
	UCircumferenceMarkerWidget(const FObjectInitializer& ObjectInitializer);

	/**
	 * UWidget interfaces
	 */
	 /** SWidget�� UWidget�� ������ ��ũ�� ���߱� ���� �޼��� */
	virtual void SynchronizeProperties() override;
	/** Widget ����� */
	virtual TSharedRef<SWidget> RebuildWidget() override;

	/**
	 * UVisual interfaces
	 */
	 /** �ش� UWidget�� MyMarkerWidget�� SWidget�� ������ �����Ƿ� �� �����ؾ� �Ѵ� */
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
	TArray<FCircumferenceMarkerEntry> MarkerList;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
	float Radius = 48.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
	FSlateBrush MarkerImage;

	UPROPERTY(EditAnywhere, Category = Corner)
	uint8 bReticleCornerOutsideSpreadRadius : 1;

	/** UMG�� CircumferenceMarkerWidget�� �����Ǵ� SWidget */
	TSharedPtr<SCircumferenceMarkerWidget> MyMarkerWidget;
};