// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GradGame : ModuleRules
{
	public GradGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
                "GradGame"
            }
        );

        PublicDependencyModuleNames.AddRange(new string[] { 
			"Core",
			"CoreUObject",
			"Engine",
			// GAS
			"GameplayTags",
			"GameplayTasks",
            "GameplayAbilities",
			// Game Features
			"ModularGameplay",
			"GameFeatures",
			"ModularGameplayActors",
			// Input
			"InputCore",
            "EnhancedInput",
			// CommonUser
            "CommonUser",
			// CommonGame
            "CommonGame",
            // CommonUI
            "CommonUI",
            // UMG
            "UMG",
			// UIExtension
            "UIExtension",
			// Slate
            "Slate",
            "SlateCore",
			// Niagara
			"Niagara",
			// Network
            "Sockets",
            "Networking",

        });

		PrivateDependencyModuleNames.AddRange(new string[] {
			"ProtobufCore",
		
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
