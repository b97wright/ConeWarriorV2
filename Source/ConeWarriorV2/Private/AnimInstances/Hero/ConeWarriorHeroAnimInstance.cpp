// Island Cone Games


#include "AnimInstances/Hero/ConeWarriorHeroAnimInstance.h"
#include "Characters/ConeWarriorHeroCharacter.h"

void UConeWarriorHeroAnimInstance::NativeInitializeAnimation()
{

	Super::NativeInitializeAnimation();

	if (OwningCharacter)
	{
		OwningConeWarriorHeroCharacter = Cast<AConeWarriorHeroCharacter>(OwningCharacter);
	}

}

void UConeWarriorHeroAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{

	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

	if (bHasAcceleration)
	{
		IdleElpasedTime = 0.f;
		bShouldEnterRelaxState = false;
	}
	else
	{
		IdleElpasedTime += DeltaSeconds;
		bShouldEnterRelaxState = (IdleElpasedTime >= EnterRelaxStateThreshold);
	}

}
