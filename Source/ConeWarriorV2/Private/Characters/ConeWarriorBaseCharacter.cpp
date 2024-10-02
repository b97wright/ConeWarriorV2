// Island Cone Games


#include "Characters/ConeWarriorBaseCharacter.h"
#include "AbilitySystem/ConeWarAbilitySystemComponent.h"
#include "AbilitySystem/ConeWarriorAttributeSet.h"

// Sets default values
AConeWarriorBaseCharacter::AConeWarriorBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

	ConeWarAbilitySystemComponent = CreateDefaultSubobject<UConeWarAbilitySystemComponent>(TEXT("ConeWarAbilitySystemComponent"));

	ConeWarriorAttributeSet = CreateDefaultSubobject<UConeWarriorAttributeSet>(TEXT("ConeWarriorAttributeSet"));

}

UAbilitySystemComponent* AConeWarriorBaseCharacter::GetAbilitySystemComponent() const
{
	return GetConeWarAbilitySystemComponent();
}

void AConeWarriorBaseCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (ConeWarAbilitySystemComponent)
	{
		ConeWarAbilitySystemComponent->InitAbilityActorInfo(this, this);

		ensureMsgf(!CharacterStartUpData.IsNull(), TEXT("Forgot to assign start up data to %s"), *GetName());

	}

}

