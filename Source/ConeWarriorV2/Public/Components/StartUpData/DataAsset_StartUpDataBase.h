// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDataBase.generated.h"

class UConeWarriorGameplayAbility;
class UConeWarAbilitySystemComponent;

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API UDataAsset_StartUpDataBase : public UDataAsset
{
	GENERATED_BODY()

public:
	virtual void GiveToAbilitySystemComponent(UConeWarAbilitySystemComponent* InConeWarriorASCToGive, int32 ApplyLevel = 1);
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UConeWarriorGameplayAbility > > ActivateOnGivenAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < UConeWarriorGameplayAbility > > ReactAbilities;

	void GrantAbilities(const TArray< TSubclassOf < UConeWarriorGameplayAbility > > InAbilitiesToGive, UConeWarAbilitySystemComponent* InConeWarriorASCToGive, int32 ApplyLevel = 1);

};
