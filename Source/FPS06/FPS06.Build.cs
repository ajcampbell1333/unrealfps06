// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS06 : ModuleRules
{
	public FPS06(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
