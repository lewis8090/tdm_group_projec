// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class tdm_group_projec : ModuleRules
{
	public tdm_group_projec(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
