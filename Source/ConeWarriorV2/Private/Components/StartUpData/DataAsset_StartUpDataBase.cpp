// Island Cone Games


#include "Components/StartUpData/DataAsset_StartUpDataBase.h"
#include "AbilitySystem/ConeWarAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/ConeWarriorGameplayAbility.h"

void UDataAsset_StartUpDataBase::GiveToAbilitySystemComponent(UConeWarAbilitySystemComponent* InConeWarriorASCToGive, int32 ApplyLevel)
{
	check(InConeWarriorASCToGive);

	GrantAbilities(ActivateOnGivenAbilities, InConeWarriorASCToGive, ApplyLevel);
	GrantAbilities(ReactAbilities, InConeWarriorASCToGive, ApplyLevel);
}

void UDataAsset_StartUpDataBase::GrantAbilities(const TArray<TSubclassOf<UConeWarriorGameplayAbility>> InAbilitiesToGive, UConeWarAbilitySystemComponent* InConeWarriorASCToGive, int32 ApplyLevel)
{
	if (InAbilitiesToGive.IsEmpty())
	{
		return;
	}

	for (const TSubclassOf<UConeWarriorGameplayAbility>& Ability : InAbilitiesToGive)
	{
		if (!Ability) continue;

		FGameplayAbilitySpec AbilitySpec(Ability);
		AbilitySpec.SourceObject = InConeWarriorASCToGive->GetAvatarActor();
		AbilitySpec.Level = ApplyLevel;

		InConeWarriorASCToGive->GiveAbility(AbilitySpec);
	}
}
