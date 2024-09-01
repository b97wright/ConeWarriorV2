// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "Characters/ConeWarriorBaseCharacter.h"
#include "ConeWarriorHeroCharacter.generated.h"

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API AConeWarriorHeroCharacter : public AConeWarriorBaseCharacter
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
	
};
