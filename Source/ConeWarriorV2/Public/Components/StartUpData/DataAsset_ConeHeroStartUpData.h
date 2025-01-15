// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "Components/StartUpData/DataAsset_StartUpDataBase.h"
#include "GameplayTagContainer.h"
#include "DataAsset_ConeHeroStartUpData.generated.h"

USTRUCT(BlueprintType)
struct FConeWarriorHeroAbilitySet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (Categories = "InputTag"))
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UConeWarriorGameplayAbility> AbilityToGrant;

	bool IsValid() const;

};

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API UDataAsset_ConeHeroStartUpData : public UDataAsset_StartUpDataBase
{
	GENERATED_BODY()

public:

	virtual void GiveToAbilitySystemComponent(UConeWarAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1) override;

private:

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData", meta = (TitleProperty = "InputTag"))
	TArray<FConeWarriorHeroAbilitySet> HeroStartUpAbilitySets;
	
};
