// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/ConeWarriorCharacterAnimInstance.h"
#include "ConeWarriorHeroAnimInstance.generated.h"

class AConeWarriorHeroCharacter;

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API UConeWarriorHeroAnimInstance : public UConeWarriorCharacterAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

protected:

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|References")
	AConeWarriorHeroCharacter* OwningConeWarriorHeroCharacter;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	bool bShouldEnterRelaxState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	float EnterRelaxStateThreshold = 5.f;

	float IdleElpasedTime;
	
};
