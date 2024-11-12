// Fill out your copyright notice in the Description page of Project Settings.


#include "GradAssetManager.h"
#include "GradGame/GradGameplayTags.h"
#include "GradGame/GradLogChannels.h"

UGradAssetManager::UGradAssetManager()
{
}

UGradAssetManager& UGradAssetManager::Get()
{
	check(GEngine);

	// �츮�� AssetManager�� UEngine�� GEngine�� AssetManager�� Class�� �������̵� �߱� ������, GEngine�� Asset Manager�� ����
	if (UGradAssetManager* Singleton = Cast<UGradAssetManager>(GEngine->AssetManager))
	{
		return *Singleton;
	}

	UE_LOG(LogGrad, Fatal, TEXT("invalid AssetManagerClassname in DefaultEngine.ini(project settings); it must be GradAssetManager"));
	// Fatal: �α��� ��Ȱ��ȭ�� ��쿡�� �׻� ġ������ ������ �ܼ� �� �α� ���Ͽ� ����� �� ũ���ø� �߻���ŵ�ϴ�.

	// ���� UE_LOG�� Fatal�� ����, Crash ���� ������ �������� ������ �������� ���� ���̷� ����
	return *NewObject<UGradAssetManager>();
}

PRAGMA_DISABLE_OPTIMIZATION // Development�� ����� �����ؼ� �ּ�ȭ �ϴ� �� �̰� ������ ���� ������ ���� Development�� ��ũ��
void UGradAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	FGradGameplayTags::InitializeNativeTags();

}
PRAGMA_ENABLE_OPTIMIZATION // Development�� ����� �����ؼ� �ּ�ȭ �ϴ� �� �̰� ������ ���� ������ ���� Development�� ��ũ��

bool UGradAssetManager::ShouldLogAssetLoads()
{
	// FCommandLine - C++���� int main(arg..) cmd���� arg�� �Է°��� �ִ� �Ͱ� ����
	// ��� �ֳ�? ������Ʈ �Ӽ� -> ����뿡�� ����
	// FCommandLine::Get()�� ���� �Ӽ����� ���� �Է°��� ������ �´�.
	const TCHAR* CommandLineContent = FCommandLine::Get();
	static bool bLogAssetLoads = FParse::Param(CommandLineContent, TEXT("LogAssetLoads"));
	return bLogAssetLoads;
}

UObject* UGradAssetManager::SynchronousLoadAsset(const FSoftObjectPath& AssetPath)
{
	// �ش� �Լ��� ���� ���� ������ 'synchronous load asset�� ���ʿ��ϰ� �ϴ� ���� ������ Ȯ���ϱ� ����' -> ������ ���, ��� ������ ������ ã�� ����
	if (AssetPath.IsValid())
	{
		// FScopeLogTime�� Ȯ���غ���:
		TUniquePtr<FScopeLogTime> LogTimePtr;
		if (ShouldLogAssetLoads())
		{
			// �ܼ��� �α��ϸ鼭, �ʴ����� �α� ����
			LogTimePtr = MakeUnique<FScopeLogTime>(*FString::Printf(TEXT("synchronous loaded assets [%s]"), *AssetPath.ToString()), nullptr, FScopeLogTime::ScopeLog_Seconds);
		}

		// ���⼭ �ΰ��� �б�:
		// 1. AssetManager�� ������, AssetManager�� StreamableManager�� ���� ���� �ε�
		// 2. �ƴϸ�, FSoftObjectPath�� ���� �ٷ� ���� �ε�
		if (UAssetManager::IsValid())
		{
			return UAssetManager::GetStreamableManager().LoadSynchronous(AssetPath); 
			// GetStreamableManager: ����, �񵿱� �ε��� �����ϴ� Ŭ����
		}

		// if asset manager is not ready, use LoadObject(), TryLoad: �ſ� ����
		// - �� ����, StaticLoadObject�� ���δ�: 
		// - �����, �׻� StaticLoadObject�ϱ� ���� StaticFindObject�� ���� Ȯ���ϰ� �����ϸ� ��¥ �ε���
		return AssetPath.TryLoad();
	}

	return nullptr;
}

void UGradAssetManager::AddLoadedAsset(const UObject* Asset)
{
	if (ensureAlways(Asset))
	{
		FScopeLock Lock(&SyncObject);
		LoadedAssets.Add(Asset);

		// �𸮾��� �⺻������ ������ �۾��� ������ ��Ƽ�����忡�� �����ϰ� �����Ѵ�.
		// �׷��� �������� ��Ȳ�� �����ϴµ� �ٷ� �����Ͱ� ������ �� ��Ȳ�̴�.��, ��Ƽ������ ��Ȳ���� �������� �ʴ�.
		// ���¸Ŵ����� �����Ͱ� ������ �� ȯ���̱� ������ ��Ƽ�����忡�� ������ ������ ���
		// ���� ����Ѵ�.
	}
}