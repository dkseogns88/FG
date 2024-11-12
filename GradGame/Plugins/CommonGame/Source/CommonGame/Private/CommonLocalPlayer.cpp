
#include "CommonLocalPlayer.h"

FDelegateHandle UCommonLocalPlayer::CallAndRegister_OnPlayerStateSet(FPlayerStateSetDelegate::FDelegate Delegate)
{
	APlayerController* PC = GetPlayerController(GetWorld());
	APlayerState* PlayerState = PC ? PC->PlayerState : nullptr;
	if (PlayerState)
	{
		// PlayerState�� �����Ǿ� ������ �ٷ� ȣ��
		Delegate.Execute(this, PlayerState);
	}
	// OnPlayerStateSet�� ���
	return OnPlayerStateSet.Add(Delegate);
}
