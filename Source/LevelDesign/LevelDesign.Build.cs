// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LevelDesign : ModuleRules
{
	public LevelDesign(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
