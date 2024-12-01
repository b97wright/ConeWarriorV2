// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/ConeWarriorGameplayAbility.h"
#include "ConeWarriorHeroGameplayAbility.generated.h"

class AConeWarriorHeroCharacter;
class AConeWarriorHeroController;

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API UConeWarriorHeroGameplayAbility : public UConeWarriorGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	AConeWarriorHeroCharacter* GetConeWarriorHeroCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	AConeWarriorHeroController* GetConeWarriorHeroControllerFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	UHeroCombatComponent* GetHeroCombatComponentFromActorInfo();
	
private:
	TWeakObjectPtr<AConeWarriorHeroCharacter> CachedConeWarriorHeroCharacter;

	TWeakObjectPtr<AConeWarriorHeroController> CachedConeWarriorHeroController;
};
