// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/ConeWarriorBaseAnimInstance.h"
#include "ConeWarriorHeroLinkedAnimLayer.generated.h"

class UConeWarriorHeroAnimInstance;

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API UConeWarriorHeroLinkedAnimLayer : public UConeWarriorBaseAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	UConeWarriorHeroAnimInstance* GetConeWarriorHeroAnimInstance() const;
	
};
