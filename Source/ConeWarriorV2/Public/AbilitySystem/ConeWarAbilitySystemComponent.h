// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "ConeWarAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API UConeWarAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public: 

	void OnAbilityInputPressed(const FGameplayTag& InInputTag);
	void OnAbilityInputReleased(const FGameplayTag& InInputTag);
	
};
