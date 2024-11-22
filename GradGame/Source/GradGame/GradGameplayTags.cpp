#include "GradGameplayTags.h"
#include "GradLogChannels.h"
#include "GameplayTagsManager.h"

FGradGameplayTags FGradGameplayTags::GameplayTags;

void FGradGameplayTags::InitializeNativeTags()
{
	UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
	GameplayTags.AddAllTags(Manager);
}

void FGradGameplayTags::AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment)
{
	OutTag = UGameplayTagsManager::Get().AddNativeGameplayTag(FName(TagName), FString(TEXT("(Native) ")) + FString(TagComment));
}

void FGradGameplayTags::AddAllTags(UGameplayTagsManager& Manager)
{
	/**
	 * GameFrameworkComponentManager init state tags
	 */
	AddTag(InitState_Spawned, "InitState.Spawned", "1: Actor/Component has initially spawned and can be extended");
	AddTag(InitState_DataAvailable, "InitState.DataAvailable", "2: All required data has been loaded/replicated and is ready for initialization");
	AddTag(InitState_DataInitialized, "InitState.DataInitialized", "3: The available data has been initialized for this actor/component, but it is not ready for full gameplay");
	AddTag(InitState_GameplayReady, "InitState.GameplayReady", "4: The actor/component is fully ready for active gameplay");

	AddTag(InputTag_Move, "InputTag.Move", "");
	AddTag(InputTag_Look_Mouse, "InputTag.Look.Mouse", "");
	
	AddTag(InputTag_Confirm, "InputTag.ConfirmTageting", "");
	AddTag(InputTag_Cancel, "InputTag.CancelTageting", "");

	AddTag(InputTag_Weapon_Fire, "InputTag.Weapon.Fire", "");
	AddTag(InputTag_Weapon_Reload, "InputTag.Weapon.Reload", "");
	AddTag(InputTag_Weapon_ADS, "InputTag.Weapon.ADS", "");
	AddTag(InputTag_Ability_Dash, "InputTag.Ability.Dash", "");
	AddTag(InputTag_Ability_Shield, "InputTag.Ability.Shield", "");
	AddTag(InputTag_Ability_Targeting, "InputTag.Ability.Targeting", "");
	
	AddTag(Status_Death, "Status.Death", "");
	AddTag(Status_Death_Dying, "Status.Death.Dying", "");
	AddTag(Status_Death_Dead, "Status.Death.Dead", "");

	AddTag(Ability_ActivateFail_IsDead, "Ability.ActivateFail.IsDead", "");
	AddTag(Ability_ActivateFail_ActivationGroup, "Ability.ActivateFail.ActivationGroup", "");

	AddTag(Ability_Behavior_SurvivesDeath, "Ability.Behavior.SurvivesDeath", "");

	AddTag(GameplayEvent_Death, "GameplayEvent.Death", "");

	AddTag(GameplayCue_Character_Death, "GameplayCue.Character.Death", "");
	AddTag(GameplayCue_Character_DamageTaken, "GameplayCue.Character.DamageTaken", "");
}

