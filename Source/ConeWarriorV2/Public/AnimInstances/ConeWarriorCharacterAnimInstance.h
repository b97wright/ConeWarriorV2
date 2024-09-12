// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/ConeWarriorBaseAnimInstance.h"
#include "ConeWarriorCharacterAnimInstance.generated.h"

class AConeWarriorBaseCharacter;
class UCharacterMovementComponent;

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API UConeWarriorCharacterAnimInstance : public UConeWarriorBaseAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds);

protected:

	UPROPERTY()
	AConeWarriorBaseCharacter* OwningCharacter;

	UPROPERTY()
	UCharacterMovementComponent* OwningMovementComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	float GroundSpeed;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	bool bHasAcceleration;
	
};
