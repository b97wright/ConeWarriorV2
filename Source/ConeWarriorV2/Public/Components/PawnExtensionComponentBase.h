// Island Cone Games

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PawnExtensionComponentBase.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CONEWARRIORV2_API UPawnExtensionComponentBase : public UActorComponent
{
	GENERATED_BODY()

protected:
	template <class T>
	// used to cast to something like hero character or enemy character
	T* GetOwningPawn() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, APawn>::Value, "'T' Template Parameter to APawn must be derived from APawn");		
		return CastChecked<T>(GetOwner());
	}

	//used if we want to get the owning pawn and we dont need to cast to a specific type
	APawn* GetOwningPawn() const
	{
		return GetOwningPawn<APawn>();
	}

	// use this to get ai controller or hero controller
	template <class T>
	T* GetOwningController() const
	{
		static_assert(TPointerIsConvertibleFromTo<T, AController>::Value, "'T' Template Parameter get AController must be derived from AController");
		return GetOwningPawn<APawn>()->GetController<T>();
	}
		
};
