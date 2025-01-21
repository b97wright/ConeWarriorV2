// Island Cone Games


#include "AnimInstances/Hero/ConeWarriorHeroLinkedAnimLayer.h"
#include "AnimInstances/Hero/ConeWarriorHeroAnimInstance.h"

UConeWarriorHeroAnimInstance* UConeWarriorHeroLinkedAnimLayer::GetConeWarriorHeroAnimInstance() const
{
    return Cast<UConeWarriorHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
