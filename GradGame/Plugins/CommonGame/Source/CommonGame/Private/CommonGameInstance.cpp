#include "CommonGameInstance.h"
#include "CommonLocalPlayer.h"
#include "GameUIManagerSubsystem.h"

int32 UCommonGameInstance::AddLocalPlayer(ULocalPlayer* NewPlayer, FPlatformUserId UserId)
{
	// GameInstance�� �����ϴ� Player �����̳ʿ� �߰��Ѵ� (ReturnVal�� ����� ���� �߰��� Index�̴�)
	int32 ReturnVal = Super::AddLocalPlayer(NewPlayer, UserId);
	if (ReturnVal != INDEX_NONE)
	{
		// PrimaryPlayer�� ó���� ĳ���ϴµ��ϴ� (������ ó�� ���õǸ� �����ΰ� Index==0�� �������� ����ϴ���?)
		if (!PrimaryPlayer.IsValid())
		{
			PrimaryPlayer = NewPlayer;
		}

		// GameUIManagerSubsystem�� ���� NotifyPlayerAdded() ȣ��� GameLayout�� �߰��Ѵ�
		GetSubsystem<UGameUIManagerSubsystem>()->NotifyPlayerAdded(Cast<UCommonLocalPlayer>(NewPlayer));
	}

	return ReturnVal;
}

bool UCommonGameInstance::RemoveLocalPlayer(ULocalPlayer* ExistingPlayer)
{
	if (PrimaryPlayer == ExistingPlayer)
	{
		PrimaryPlayer.Reset();
	}

	GetSubsystem<UGameUIManagerSubsystem>()->NotifyPlayerDestroyed(Cast<UCommonLocalPlayer>(ExistingPlayer));
	return Super::RemoveLocalPlayer(ExistingPlayer);
}
