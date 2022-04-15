// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GTA1Remaster : ModuleRules
{
	public GTA1Remaster(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
