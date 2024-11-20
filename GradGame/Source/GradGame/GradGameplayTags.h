#pragma once

#include "Containers/UnrealString.h"
#include "Containers/Map.h"
#include "GameplayTagContainer.h"

/** forward declaration */
class UGameplayTagsManager;

/**
 * HakGameplayTags
 * - singleton containing native gameplay tags
 */
struct FGradGameplayTags
{
	/**
	 * static methods
	 */
	static const FGradGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeTags();

	/**
	 * member methods
	 */
	void AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment);
	void AddAllTags(UGameplayTagsManager& Manager);

	/**
	 * �Ʒ��� GameplayTag�� �ʱ�ȭ ���� �ܰ踦 �ǹ��Ѵ�:
	 * - GameInstance�� �ʱ�ȭ ������ UGameFrameworkComponentManager�� RegisterInitState�� ��ϵǾ� ����������(linear)�ϰ� ������Ʈ �ȴ�
	 * - �� �ʱ�ȭ GameplayTag�� ������ Actor ���̿� �����Ǹ�, GameFrameworkInitStateInterface ��ӹ��� Ŭ������ �ʱ�ȭ ����(Init State)�� ���¸ӽ�(State Machine)�� ���� ���� ������ �������̽��� �����Ѵ�
	 */
	FGameplayTag InitState_Spawned;
	FGameplayTag InitState_DataAvailable;
	FGameplayTag InitState_DataInitialized;
	FGameplayTag InitState_GameplayReady;

	/**
	 * Enhanced Input Tags
	 */
	FGameplayTag InputTag_Move;
	FGameplayTag InputTag_Look_Mouse;


	/**
	 * Ability Input Tags
	 */
	FGameplayTag InputTag_Weapon_Fire;
	FGameplayTag InputTag_Weapon_Reload;
	FGameplayTag InputTag_Weapon_ADS;
	FGameplayTag InputTag_Ability_Dash;

	/**
	 * Ability ActivateFail Tags
	*/
	FGameplayTag Ability_ActivateFail_IsDead;
	FGameplayTag Ability_ActivateFail_ActivationGroup;
	
	/**
	* Ability Behavior Tags
	*/
	FGameplayTag Ability_Behavior_SurvivesDeath;

	/**
	 * Status Tags
	*/
	FGameplayTag Status_Death;
	FGameplayTag Status_Death_Dying;
	FGameplayTag Status_Death_Dead;
	
	/**
	* GameplayEvent Tags
	*/
	FGameplayTag GameplayEvent_Death;
	
	/**
	* GameplayCue Tags
	*/
	FGameplayTag GameplayCue_Character_Death;
	FGameplayTag GameplayCue_Character_DamageTaken;


private:
	// static ���� �ʱ�ȭ�� .cpp�� ���ִ� ���� ���� ����!
	static FGradGameplayTags GameplayTags;
};