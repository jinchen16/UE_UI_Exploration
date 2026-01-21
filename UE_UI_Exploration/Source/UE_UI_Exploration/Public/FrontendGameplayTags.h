// Jin Chen All Rights Reserved.

#pragma once

#include "NativeGameplayTags.h"

namespace FrontendGameplayTags
{
	// Frontend widget stack
	UE_UI_EXPLORATION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_Modal);
	UE_UI_EXPLORATION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_GameMenu);
	UE_UI_EXPLORATION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_GameHud);
	UE_UI_EXPLORATION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_Frontend);

	// Frontend widgets
	UE_UI_EXPLORATION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_Widget_PressAnyKeyScreen);
	UE_UI_EXPLORATION_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_Widget_MainMenuScreen);
}