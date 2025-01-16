// Island Cone Games


#include "AbilitySystem/ConeWarAbilitySystemComponent.h"

void UConeWarAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid())
	{
		return;
	}

	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag)) continue;

		TryActivateAbility(AbilitySpec.Handle);
	}
}

void UConeWarAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{
}
