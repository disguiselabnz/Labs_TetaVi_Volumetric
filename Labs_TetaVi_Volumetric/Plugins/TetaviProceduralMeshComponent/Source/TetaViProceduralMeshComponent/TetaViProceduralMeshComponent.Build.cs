// Copyright Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class TetaViProceduralMeshComponent : ModuleRules
	{
		public TetaViProceduralMeshComponent(ReadOnlyTargetRules Target) : base(Target)
		{
			PrivateIncludePaths.Add("../Shaders/Shared");

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"MeshDescription",
					"RenderCore",
					"RHI",
					"StaticMeshDescription",
					"PhysicsCore"
				}
				);
		}
	}
}
