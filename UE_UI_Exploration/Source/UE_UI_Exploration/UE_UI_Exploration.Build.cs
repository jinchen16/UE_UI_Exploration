// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_UI_Exploration : ModuleRules
{
    public UE_UI_Exploration(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "EnhancedInput",
            "GameplayTags"
        });
    }
}
