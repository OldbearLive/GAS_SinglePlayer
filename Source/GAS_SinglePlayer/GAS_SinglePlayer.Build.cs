// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GAS_SinglePlayer : ModuleRules
{
	public GAS_SinglePlayer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
