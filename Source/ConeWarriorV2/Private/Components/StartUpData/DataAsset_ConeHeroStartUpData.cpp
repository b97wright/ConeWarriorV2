// Island Cone Games


#include "Components/StartUpData/DataAsset_ConeHeroStartUpData.h"
#include "AbilitySystem/Abilities/ConeWarriorGameplayAbility.h"
#include "AbilitySystem/ConeWarAbilitySystemComponent.h"

bool FConeWarriorHeroAbilitySet::IsValid() const
{
    return InputTag.IsValid() && AbilityToGrant;
}

void UDataAsset_ConeHeroStartUpData::GiveToAbilitySystemComponent(UConeWarAbilitySystemComponent* InASCToGive, int32 ApplyLevel)
{
    Super::GiveToAbilitySystemComponent(InASCToGive, ApplyLevel);

    for (const FConeWarriorHeroAbilitySet& AbilitySet : HeroStartUpAbilitySets)
    {
        if (!AbilitySet.IsValid()) continue;

        FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
        AbilitySpec.SourceObject = InASCToGive->GetAvatarActor();
        AbilitySpec.Level = ApplyLevel;
        AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);

        InASCToGive->GiveAbility(AbilitySpec);
    }

}
