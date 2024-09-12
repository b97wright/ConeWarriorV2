// Island Cone Games


#include "AnimInstances/ConeWarriorCharacterAnimInstance.h"
#include "Characters/ConeWarriorBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UConeWarriorCharacterAnimInstance::NativeInitializeAnimation()
{
	OwningCharacter = Cast<AConeWarriorBaseCharacter>(TryGetPawnOwner());

	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

void UConeWarriorCharacterAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent)
	{
		return;
	}

	GroundSpeed = OwningCharacter->GetVelocity().Size2D();

	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared2D() > 0.f;
}
