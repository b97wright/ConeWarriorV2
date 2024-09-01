// Island Cone Games


#include "Characters/ConeWarriorBaseCharacter.h"

// Sets default values
AConeWarriorBaseCharacter::AConeWarriorBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

}

