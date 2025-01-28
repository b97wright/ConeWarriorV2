// Island Cone Games


#include "Components/Combat/HeroCombatComponent.h"
#include "Items/Weapons/ConeWarriorHeroWeapon.h"


AConeWarriorHeroWeapon* UHeroCombatComponent::GetConeHeroWeaponCarriedByTag(FGameplayTag InWeaponTag) const
{
    return Cast<AConeWarriorHeroWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}
