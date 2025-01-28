// Island Cone Games

#pragma once

#include "ConeWarriorStructTypes.generated.h"

class UConeWarriorHeroLinkedAnimLayer;

USTRUCT(BlueprintType)
struct FConeWarriorHeroWeaponData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TSubclassOf<UConeWarriorHeroLinkedAnimLayer> WeaponAnimLayerToLink;
};
