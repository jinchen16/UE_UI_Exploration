// Jin Chen All Rights Reserved.


#include "Widgets/Widget_ActivatableBase.h"
#include "Controllers/FrontEndPlayerController.h"

AFrontEndPlayerController* UWidget_ActivatableBase::GetOwningFrontendPlayerController()
{
	if (!CachedOwningFrontendPC.IsValid())
	{
		CachedOwningFrontendPC = GetOwningPlayer<AFrontEndPlayerController>();
	}

	return CachedOwningFrontendPC.IsValid() ? CachedOwningFrontendPC.Get() : nullptr;
}
