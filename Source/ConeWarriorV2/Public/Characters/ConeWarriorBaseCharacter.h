// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "ConeWarriorBaseCharacter.generated.h"

class UConeWarAbilitySystemComponent;
class UConeWarriorAttributeSet;
class UDataAsset_StartUpDataBase;

UCLASS()
class CONEWARRIORV2_API AConeWarriorBaseCharacter : public ACharacter , public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AConeWarriorBaseCharacter();

	//~ Begin IAbilitySystemInterface Interface.
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~ Begin IAbilitySystemInterface Interface.

protected:

	//~ Begin APawn Interface.
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UConeWarAbilitySystemComponent* ConeWarAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	UConeWarriorAttributeSet* ConeWarriorAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;

public:

	FORCEINLINE UConeWarAbilitySystemComponent* GetConeWarAbilitySystemComponent() const { return ConeWarAbilitySystemComponent; }

	FORCEINLINE UConeWarriorAttributeSet* GetConeWarriorAttributeSet() const { return ConeWarriorAttributeSet; }

};
