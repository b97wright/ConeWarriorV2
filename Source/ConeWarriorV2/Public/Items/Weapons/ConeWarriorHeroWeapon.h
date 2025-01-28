// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "Items/Weapons/ConeWarriorWeaponBase.h"
#include "ConeWarriorTypes/ConeWarriorStructTypes.h"
#include "ConeWarriorHeroWeapon.generated.h"

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API AConeWarriorHeroWeapon : public AConeWarriorWeaponBase
{
	GENERATED_BODY()

public: 

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponData")
	FConeWarriorHeroWeaponData HeroWeaponData;

};
