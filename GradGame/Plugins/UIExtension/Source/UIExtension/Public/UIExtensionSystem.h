#pragma once


#include "GameplayTagContainer.h"
#include "Templates/SharedPointer.h"
#include "Subsystems/WorldSubsystem.h"
#include "UIExtensionSystem.generated.h"

class UUIExtensionSubsystem;

/** ExtensionPoint GameplayTag �� ��� */
UENUM(BlueprintType)
enum class EUIExtensionPointMatch : uint8
{
	/** A.B�� A.B.C�� ***�������*** �ʴ´� */
	ExactMatch,

	/** A.B�� A.B.C�� ***���*** �Ѵ� */
	PartialMatch,
};

UENUM(BLueprintType)
enum class EUIExtensionAction : uint8
{
	Added,
	Removed,
};

struct FUIExtension : TSharedFromThis<FUIExtension>
{
	/** UIExtension Widget�� Point Tag�̴� (���� �ǹ����� �ϳ��� ���������� �����غ���) */
	FGameplayTag ExtensionPointTag;

	/** Widget Class�� ������ ������, UUIExtensionSubsystem���� AddReferencedObjects���� GC�� ���´� */
	UObject* Data = nullptr;

	/** ���� LocalPlayer�� �����ȴ� */
	TWeakObjectPtr<UObject> ContextObject;

	int32 Priority = INDEX_NONE;
};

USTRUCT(BlueprintType)
struct UIEXTENSION_API FUIExtensionHandle
{
	GENERATED_BODY()
public:
	FUIExtensionHandle() {}
	FUIExtensionHandle(UUIExtensionSubsystem* InExtensionSource, const TSharedPtr<FUIExtension>& InDataPtr)
		: ExtensionSource(InExtensionSource)
		, DataPtr(InDataPtr)
	{}

	void Unregister();
	bool IsValid() const { return DataPtr.IsValid(); }
	bool operator==(const FUIExtensionHandle& Other) const { return DataPtr == Other.DataPtr; }
	bool operator!=(const FUIExtensionHandle& Other) const { return !operator==(Other); }

	friend FORCEINLINE uint32 GetTypeHash(FUIExtensionHandle Handle)
	{
		return PointerHash(Handle.DataPtr.Get());
	}

	friend class UUIExtensionSubsystem;
	TWeakObjectPtr<UUIExtensionSubsystem> ExtensionSource;
	TSharedPtr<FUIExtension> DataPtr;
};


USTRUCT(BlueprintType)
struct FUIExtensionRequest
{
	GENERATED_BODY()
public:
	/** UIExtensionPoint�� ������ Extension */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FUIExtensionHandle ExtensionHandle;

	/** Extension�� Slot GameplayTag */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag ExtensionPointTag;

	/** WidgetClass�� FUIExtension�� ���� */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UObject> Data = nullptr;

	/** FUIExtension�� ContextObject�� ���޹��� (UCommonLocalPlayer, UModularPlayerState, ... == UIExtension�� ������ Instigator) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UObject> ContextObject = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Priority = INDEX_NONE;
};

DECLARE_DELEGATE_TwoParams(FExtendExtensionPointDelegate, EUIExtensionAction Action, const FUIExtensionRequest& Request);

struct FUIExtensionPoint : TSharedFromThis<FUIExtensionPoint>
{
public:
	/** Extension---ExtensionPoint�� ��Ī�Ǵ��� Ȯ�� */
	bool DoesExtensionPassContract(const FUIExtension* Extension) const;

	/** UIExtension�� Slot GameplayTag */
	FGameplayTag ExtensionPointTag;

	/** UIExtension�� ����/������ Instigator(��ü) */
	TWeakObjectPtr<UObject> ContextObject;

	/** UIExtensionPointWidget�� ���� Widget Class -> UIExtensionPointWidget's DataClasses */
	TArray<UClass*> AllowedDataClasses;

	/** Widget�� ExtensionPointWidget�� �����ϱ� ���� Callback �Լ� */
	FExtendExtensionPointDelegate Callback;
	EUIExtensionPointMatch ExtensionPointTagMatchType = EUIExtensionPointMatch::ExactMatch;
};

USTRUCT(BlueprintType)
struct UIEXTENSION_API FUIExtensionPointHandle
{
	GENERATED_BODY()
public:
	FUIExtensionPointHandle() {}
	FUIExtensionPointHandle(UUIExtensionSubsystem* InExtensionSource, const TSharedPtr<FUIExtensionPoint>& InDataPtr)
		: ExtensionSource(InExtensionSource), DataPtr(InDataPtr)
	{}

	void Unregister();
	bool IsValid() const { return DataPtr.IsValid(); }
	bool operator==(const FUIExtensionPointHandle& Other) const { return DataPtr == Other.DataPtr; }
	bool operator!=(const FUIExtensionPointHandle& Other) const { return !operator==(Other); }

	TWeakObjectPtr<UUIExtensionSubsystem> ExtensionSource;
	TSharedPtr<FUIExtensionPoint> DataPtr;
};


template <>
struct TStructOpsTypeTraits<FUIExtensionHandle> : public TStructOpsTypeTraitsBase2<FUIExtensionHandle>
{
	enum
	{
		WithCopy = true,
		WithIdenticalViaEquality = true,
	};
};

UCLASS()
class UIEXTENSION_API UUIExtensionSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	void UnregisterExtension(const FUIExtensionHandle& ExtensionHandle);
	FUIExtensionHandle RegisterExtensionAsWidgetForContext(const FGameplayTag& ExtensionPointTag, UObject* ContextObject, TSubclassOf<UUserWidget> WidgetClass, int32 Priority);
	FUIExtensionHandle RegisterExtensionAsData(const FGameplayTag& ExtensionPointTag, UObject* ContextObject, UObject* Data, int32 Priority);

	void UnregisterExtensionPoint(const FUIExtensionPointHandle& ExtensionPointHandle);
	FUIExtensionPointHandle RegisterExtensionPointForContext(const FGameplayTag& ExtensionPointTag, UObject* ContextObject, EUIExtensionPointMatch ExtensionPointTagMatchType, const TArray<UClass*>& AllowedDataClasses, FExtendExtensionPointDelegate ExtensionCallback);
	FUIExtensionPointHandle RegisterExtensionPoint(const FGameplayTag& ExtensionPointTag, EUIExtensionPointMatch ExtensionPointTagMatchType, const TArray<UClass*>& AllowedDataClasses, FExtendExtensionPointDelegate ExtensionCallback);

	FUIExtensionRequest CreateExtensionRequest(const TSharedPtr<FUIExtension>& Extension);

	/** ExtensionPoint --(Broadcast)--> Extensions [ExtensionPointrk �߰�/���� �Ǿ��� ���, Extension�� �˸�: ����� Added�� ��] */
	void NotifyExtensionPointOfExtensions(TSharedPtr<FUIExtensionPoint>& ExtensionPoint);
	/** Extension --(Broadcast) --> ExtensionPoints [Extension�� �߰�/���� �Ǿ��� ���, Extension Points�� �˸�] */
	void NotifyExtensionPointsOfExtension(EUIExtensionAction Action, TSharedPtr<FUIExtension>& Extension);

	/** GameplayTag(Slot) --- FUIExtension(WidgetClass) */
	typedef TArray<TSharedPtr<FUIExtension>> FExtensionList;
	TMap<FGameplayTag, FExtensionList> ExtensionMap;

	/** GameplayTag(Slot) --- FUIExtensionPoint(WidgetClassWithContext) */
	typedef TArray<TSharedPtr<FUIExtensionPoint>> FExtensionPointList;
	TMap<FGameplayTag, FExtensionPointList> ExtensionPointMap;
};