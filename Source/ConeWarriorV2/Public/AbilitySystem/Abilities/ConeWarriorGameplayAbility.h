// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "ConeWarriorGameplayAbility.generated.h"

class UPawnCombatComponent;

UENUM(BlueprintType)
enum class EConeWarriorAbilityActivationPolicy : uint8
{
	OnTriggered,
	OnGiven
};

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API UConeWarriorGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

protected: 

	//~ Begin UGameplayAbility Interface.
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~ Begin UGameplayAbility Interface.

	UPROPERTY(EditDefaultsOnly, Category = "ConeWarriorAbility")
	EConeWarriorAbilityActivationPolicy AbilityActivationPolicy = EConeWarriorAbilityActivationPolicy::OnTriggered;

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	UPawnCombatComponent* GetPawnCombatComponentFromActorInfo() const;
	
};
