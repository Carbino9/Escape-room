// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Escape_room : ModuleRules
{
	public Escape_room(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
