// Jin Chen All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Widget_ActivatableBase.generated.h"

class AFrontEndPlayerController;

/**
 * 
 */
UCLASS(Abstract, BlueprintType, meta = (DisableNaiveTick))
class UE_UI_EXPLORATION_API UWidget_ActivatableBase : public UCommonActivatableWidget
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	AFrontEndPlayerController* GetOwningFrontendPlayerController();
	
private:
	TWeakObjectPtr<AFrontEndPlayerController> CachedOwningFrontendPC;
};
