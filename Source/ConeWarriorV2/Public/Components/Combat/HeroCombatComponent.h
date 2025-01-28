// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "Components/Combat/PawnCombatComponent.h"
#include "HeroCombatComponent.generated.h"

class AConeWarriorHeroWeapon;
/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API UHeroCombatComponent : public UPawnCombatComponent
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AConeWarriorHeroWeapon* GetConeHeroWeaponCarriedByTag(FGameplayTag InWeaponTag) const;

};
