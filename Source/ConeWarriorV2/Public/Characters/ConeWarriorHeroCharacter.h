// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "Characters/ConeWarriorBaseCharacter.h"
#include "ConeWarriorHeroCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

/**
 * 
 */
UCLASS()
class CONEWARRIORV2_API AConeWarriorHeroCharacter : public AConeWarriorBaseCharacter
{
	GENERATED_BODY()

public: 
	AConeWarriorHeroCharacter();


protected:

	virtual void BeginPlay() override;

private:
#pragma region Components

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

#pragma endregion

	
};
