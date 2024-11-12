#include "UIExtensionSystem.h"
#include "Blueprint/UserWidget.h"

void FUIExtensionHandle::Unregister()
{
	if (UUIExtensionSubsystem* ExtensionSourcePtr = ExtensionSource.Get())
	{
		ExtensionSourcePtr->UnregisterExtension(*this);
	}
}

bool FUIExtensionPoint::DoesExtensionPassContract(const FUIExtension* Extension) const
{
	if (UObject* DataPtr = Extension->Data)
	{
		const bool bMatchContext =
			// ContextObject�� Extension->ContextObject�� �Ѵ� nullptr�� ���õǾ�����?
			(ContextObject.IsExplicitlyNull() && Extension->ContextObject.IsExplicitlyNull()) ||
			// �ƴ� ���� ContextObject�� Extension->ContextObject�� ������? (LocalPlayer? PlayerState?)
			(ContextObject == Extension->ContextObject);

		if (bMatchContext)
		{
			// DataClass (WidgetClass ����)
			const UClass* DataClass = DataPtr->IsA(UClass::StaticClass()) ? Cast<UClass>(DataPtr) : DataPtr->GetClass();
			for (const UClass* AllowedDataClass : AllowedDataClasses)
			{
				// AllowedDataClasses�� ��ȸ�ϸ� Child/Interface�ΰ� Ȯ��
				if (DataClass->IsChildOf(AllowedDataClass) || DataClass->ImplementsInterface(AllowedDataClass))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void FUIExtensionPointHandle::Unregister()
{
	if (UUIExtensionSubsystem* ExtensionSourcePtr = ExtensionSource.Get())
	{
		ExtensionSourcePtr->UnregisterExtensionPoint(*this);
	}
}

void UUIExtensionSubsystem::UnregisterExtension(const FUIExtensionHandle& ExtensionHandle)
{
	if (ExtensionHandle.IsValid())
	{
		// �ݵ�� �ش� ExtensionHandle�� UUIExtensionSubsystem�� ������ Ȯ���ؾ� ��!
		checkf(ExtensionHandle.ExtensionSource == this, TEXT("Trying to unregister an extension that's not from this extension subsystem"));

		TSharedPtr<FUIExtension> Extension = ExtensionHandle.DataPtr;

		// Extension�� PointTag�� ���� ExtensionMap���� �ش� Slot�� �ִ��� ã�Ƽ� ����
		if (FExtensionList* ListPtr = ExtensionMap.Find(Extension->ExtensionPointTag))
		{
			// Extension ����, NotifyExtensionPointsOfExtension ȣ��
			NotifyExtensionPointsOfExtension(EUIExtensionAction::Removed, Extension);

			ListPtr->RemoveSwap(Extension);
			if (ListPtr->Num() == 0)
			{
				// Num() == 0�̸� Map������ ���� ����
				ExtensionMap.Remove(Extension->ExtensionPointTag);
			}
		}
	}
}

FUIExtensionHandle UUIExtensionSubsystem::RegisterExtensionAsWidgetForContext(const FGameplayTag& ExtensionPointTag, UObject* ContextObject, TSubclassOf<UUserWidget> WidgetClass, int32 Priority)
{
	return RegisterExtensionAsData(ExtensionPointTag, ContextObject, WidgetClass, Priority);
}

FUIExtensionHandle UUIExtensionSubsystem::RegisterExtensionAsData(const FGameplayTag& ExtensionPointTag,
	UObject* ContextObject, UObject* Data, int32 Priority)
{
	// ExtensionPointTag(Slot)�� Invalid
	if (!ExtensionPointTag.IsValid())
	{
		return FUIExtensionHandle();
	}

	// WidgetClass�� ������
	if (!Data)
	{
		return FUIExtensionHandle();
	}

	// ExtensionPointTag�� ����Ͽ�, ExtensionList�� ����
	FExtensionList& List = ExtensionMap.FindOrAdd(ExtensionPointTag);

	// ���ο� UIExtension�� �߰� ����
	TSharedPtr<FUIExtension>& Entry = List.Add_GetRef(MakeShared<FUIExtension>());
	Entry->ExtensionPointTag = ExtensionPointTag;
	Entry->ContextObject = ContextObject;
	Entry->Data = Data;
	Entry->Priority = Priority;

	// Extension�� �߰��Ǿ����� Added�� NotifyExtensionPointsOfExtension ����
	NotifyExtensionPointsOfExtension(EUIExtensionAction::Added, Entry);

	return FUIExtensionHandle(this, Entry);
}

void UUIExtensionSubsystem::UnregisterExtensionPoint(const FUIExtensionPointHandle& ExtensionPointHandle)
{
	// ���� UnregisterExtension()�� ���� ����ϴ� ��ŵ����
	if (ExtensionPointHandle.IsValid())
	{
		check(ExtensionPointHandle.ExtensionSource == this);

		const TSharedPtr<FUIExtensionPoint> ExtensionPoint = ExtensionPointHandle.DataPtr;
		if (FExtensionPointList* ListPtr = ExtensionPointMap.Find(ExtensionPoint->ExtensionPointTag))
		{
			ListPtr->RemoveSwap(ExtensionPoint);
			if (ListPtr->Num() == 0)
			{
				ExtensionPointMap.Remove(ExtensionPoint->ExtensionPointTag);
			}
		}
	}
}

FUIExtensionPointHandle UUIExtensionSubsystem::RegisterExtensionPointForContext(const FGameplayTag& ExtensionPointTag, UObject* ContextObject, EUIExtensionPointMatch ExtensionPointTagMatchType, const TArray<UClass*>& AllowedDataClasses, FExtendExtensionPointDelegate ExtensionCallback)
{
	if (!ExtensionPointTag.IsValid())
	{
		return FUIExtensionPointHandle();
	}

	// ExtensionCallback�� ���ε��Ǿ� ���� ������ Widget�� �߰��� ���� ����.. �ǹ̰� ������ �׳� �����Ѵ�
	if (!ExtensionCallback.IsBound())
	{
		return FUIExtensionPointHandle();
	}

	// ���� Widget Class�� �����Ƿ�, ����
	if (AllowedDataClasses.Num() == 0)
	{
		return FUIExtensionPointHandle();
	}

	// ExtensionPointMap�� ���ο� Entry�� ����Ѵ�
	// - List ���� �ߺ� üũ�� ���� ���� �ʴ´�! (Register/Unregister ���� �� ���߾�� �Ѵٴ� �ǹ��̴�)
	FExtensionPointList& List = ExtensionPointMap.FindOrAdd(ExtensionPointTag);
	TSharedPtr<FUIExtensionPoint>& Entry = List.Add_GetRef(MakeShared<FUIExtensionPoint>());
	Entry->ExtensionPointTag = ExtensionPointTag;
	Entry->ContextObject = ContextObject;
	Entry->ExtensionPointTagMatchType = ExtensionPointTagMatchType;
	Entry->AllowedDataClasses = AllowedDataClasses;
	Entry->Callback = MoveTemp(ExtensionCallback);

	// ExtensionPoint�� �߰��Ǿ�����, NotifyExtensionPointOfExtensions ȣ��
	NotifyExtensionPointOfExtensions(Entry);

	return FUIExtensionPointHandle(this, Entry);
}

FUIExtensionPointHandle UUIExtensionSubsystem::RegisterExtensionPoint(const FGameplayTag& ExtensionPointTag, EUIExtensionPointMatch ExtensionPointTagMatchType, const TArray<UClass*>& AllowedDataClasses, FExtendExtensionPointDelegate ExtensionCallback)
{
	return RegisterExtensionPointForContext(ExtensionPointTag, nullptr, ExtensionPointTagMatchType, AllowedDataClasses, ExtensionCallback);
}

FUIExtensionRequest UUIExtensionSubsystem::CreateExtensionRequest(const TSharedPtr<FUIExtension>& Extension)
{
	FUIExtensionRequest Request;
	Request.ExtensionHandle = FUIExtensionHandle(this, Extension);
	Request.ExtensionPointTag = Extension->ExtensionPointTag;
	Request.Priority = Extension->Priority;
	Request.Data = Extension->Data;
	Request.ContextObject = Extension->ContextObject.Get();
	return Request;
}

void UUIExtensionSubsystem::NotifyExtensionPointOfExtensions(TSharedPtr<FUIExtensionPoint>& ExtensionPoint)
{
	// �򰥸��� ����: ���� ExtensionPoint ��ȭ���� �Դ�!

	// ExtensionPoint�� ExtensionPointTag(Slot)�� ��ȸ����
	for (FGameplayTag Tag = ExtensionPoint->ExtensionPointTag; Tag.IsValid(); Tag = Tag.RequestDirectParent())
	{
		// ExtensionMap�� ���� ExtensionPointTag�� ��Ī�Ǵ� ExtensionList�� ��������
		if (const FExtensionList* ListPtr = ExtensionMap.Find(Tag))
		{
			// ExtensionList�� ��ȸ�ϸ�!
			FExtensionList ExtensionArray(*ListPtr);
			for (const TSharedPtr<FUIExtension>& Extension : ExtensionArray)
			{
				// ���� ***ExtenionPoint***�� ��ȸ�ϴ� Extension�� ���Ǵ��� Ȯ��
				if (ExtensionPoint->DoesExtensionPassContract(Extension.Get()))
				{
					// UIExtensionRequest�� �����, ExtensionPoint�� UIExtensionPointWidget�� Add�� ����
					FUIExtensionRequest Request = CreateExtensionRequest(Extension);
					ExtensionPoint->Callback.ExecuteIfBound(EUIExtensionAction::Added, Request);
				}
			}
		}

		// ExactMatch��� ���� GameplayTag�� Parent�� ��ȸ�� �ʿ䰡 ����
		if (ExtensionPoint->ExtensionPointTagMatchType == EUIExtensionPointMatch::ExactMatch)
		{
			break;
		}
	}
}

void UUIExtensionSubsystem::NotifyExtensionPointsOfExtension(EUIExtensionAction Action, TSharedPtr<FUIExtension>& Extension)
{
	// �򰥸��� ����: ���� Extension �������� �Դ�!

	// bOnInitialTag�� Ȱ���ϴ� ����? ExactMatch ������ ���ؼ�!
	bool bOnInitialTag = true;
	for (FGameplayTag Tag = Extension->ExtensionPointTag; Tag.IsValid(); Tag = Tag.RequestDirectParent())
	{
		if (const FExtensionPointList* ListPtr = ExtensionPointMap.Find(Tag))
		{
			// ExtensionPoint�� ��ȸ
			FExtensionPointList ExtensionPointArray(*ListPtr);
			for (const TSharedPtr<FUIExtensionPoint>& ExtensionPoint : ExtensionPointArray)
			{
				/** ExactMatch�� + PartialMatch�� */
				if (bOnInitialTag || (ExtensionPoint->ExtensionPointTagMatchType == EUIExtensionPointMatch::PartialMatch))
				{
					if (ExtensionPoint->DoesExtensionPassContract(Extension.Get()))
					{
						FUIExtensionRequest Request = CreateExtensionRequest(Extension);
						ExtensionPoint->Callback.ExecuteIfBound(Action, Request);
					}
				}
			}
		}

		// ��.. �ٵ� �� �� ��ȸ�ұ�?
		// - ExtensionPointTagMatchType�� UIExtensionPoint �ȿ� �����Ƿ�!
		bOnInitialTag = false;
	}
}