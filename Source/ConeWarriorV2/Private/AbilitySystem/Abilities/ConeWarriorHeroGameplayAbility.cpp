// Island Cone Games


#include "AbilitySystem/Abilities/ConeWarriorHeroGameplayAbility.h"
#include "Characters/ConeWarriorHeroCharacter.h"
#include "Controllers/ConeWarriorHeroController.h"

AConeWarriorHeroCharacter* UConeWarriorHeroGameplayAbility::GetConeWarriorHeroCharacterFromActorInfo()
{
    if (!CachedConeWarriorHeroCharacter.IsValid())
    {
        CachedConeWarriorHeroCharacter = Cast<AConeWarriorHeroCharacter>(CurrentActorInfo->AvatarActor);
    }
    return CachedConeWarriorHeroCharacter.IsValid() ? CachedConeWarriorHeroCharacter.Get() : nullptr;
}

AConeWarriorHeroController* UConeWarriorHeroGameplayAbility::GetConeWarriorHeroControllerFromActorInfo()
{
    if (!CachedConeWarriorHeroController.IsValid())
    {
        CachedConeWarriorHeroController = Cast<AConeWarriorHeroController>(CurrentActorInfo->PlayerController);
    }

    return CachedConeWarriorHeroController.IsValid() ? CachedConeWarriorHeroController.Get() : nullptr;
}

UHeroCombatComponent* UConeWarriorHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
    return GetConeWarriorHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}
