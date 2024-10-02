// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConeWarriorWeaponBase.generated.h"

class UBoxComponent;

UCLASS()
class CONEWARRIORV2_API AConeWarriorWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConeWarriorWeaponBase();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapons")
	UStaticMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapons")
	UBoxComponent* WeaponCollisionBox;

public: 

	FORCEINLINE UBoxComponent* GetWeaponCollisionBox() const { return WeaponCollisionBox; }

};
