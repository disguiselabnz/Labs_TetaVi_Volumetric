// Copyright Epic Games, Inc. All Rights Reserved.
using System;
using System.IO;
using UnrealBuildTool;
//using Tools.DotNETCommon;

public class TetaVi_Plugin : ModuleRules
{


        
    public TetaVi_Plugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        //Log.TraceInformation("TetaVi plugin build started");

        if (Target.Type == TargetType.Editor)
        {
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "MovieSceneCapture", "MovieSceneTools","LevelSequence"
                    // ... add private dependencies that you statically link with here ...
                }
            );
            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "MovieSceneCapture"


                    // ... add other public dependencies that you statically link with here ...
                });
        }

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            
            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "TetaVi_Plugin_APL.xml"));
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                     "AndroidRuntimeSettings"
                    // ... add private dependencies that you statically link with here ...
                }
            );
            packTets();
        }
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicDelayLoadDLLs.Add("TV_DecoderEngine.dll");
            PublicDelayLoadDLLs.Add("avcodec-58.dll");
            PublicDelayLoadDLLs.Add("avdevice-58.dll");
            PublicDelayLoadDLLs.Add("avformat-58.dll");
            PublicDelayLoadDLLs.Add("avutil-56.dll");
            PublicDelayLoadDLLs.Add("swresample-3.dll");
            PublicDelayLoadDLLs.Add("swscale-5.dll");

            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/TV_DecoderEngine.dll");
            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/avcodec-58.dll");
            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/avdevice-58.dll");
            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/avformat-58.dll");
            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/avutil-56.dll");
            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/swresample-3.dll");
            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/swscale-5.dll");

            // Ensure that the DLL is staged along with the executable
            RuntimeDependencies.Add( Path.Combine("$(BinaryOutputDir)", "TV_DecoderEngine.dll"), "$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/TV_DecoderEngine.dll");
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "avcodec-58.dll"), "$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/avcodec-58.dll");
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "avdevice-58.dll"), "$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/avdevice-58.dll");
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "avformat-58.dll"), "$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/avformat-58.dll");
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "avutil-56.dll"), "$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/avutil-56.dll");
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "swresample-3.dll"), "$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/swresample-3.dll");
            RuntimeDependencies.Add(Path.Combine("$(BinaryOutputDir)", "swscale-5.dll"), "$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/swscale-5.dll");
            if (Target.Type != TargetRules.TargetType.Editor)
            {
                packTets();
            }
            

        }
        if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            
            RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TetaVi_PluginLibrary/Mac/tetCodecMacLib.bundle/*");
            if (Target.Type != TargetRules.TargetType.Editor)
            {
                packTets();
            }
            
        }
        
        
        //RuntimeDependencies.Add( "$(PluginDir)/Content/*.tet");
        RuntimeDependencies.Add( "$(ProjectDir)/Content/*.tet");

        PublicIncludePaths.AddRange(
            new string[] {
                // ... add public include paths required here ...
            }
            );
                
        
        PrivateIncludePaths.AddRange(
            new string[] {
                // ... add other private include paths required here ...
            }
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "TetaViProceduralMeshComponent",
                "Projects"


                // ... add other public dependencies that you statically link with here ...
            }
        );

            
        
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore","Json", "JsonUtilities" ,"HTTP"
                // ... add private dependencies that you statically link with here ...
            }
            );
        
        
        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                // ... add any modules that your module loads dynamically here ...
            }
            );
    }
    public string ProjectRoot
    {
        get
        {
            return System.IO.Path.GetFullPath(
                System.IO.Path.Combine(ModuleDirectory, "../../")
            );
        }
    }
    public void packTets()
    {
        using (TextReader rdr = new StreamReader(ProjectRoot+"/Resources/tet_to_include_in_build.txt"))
        {
            string line;

            while ((line = rdr.ReadLine()) != null)
            {
                string filename = Path.GetFileName(line);
                try
                {
                    RuntimeDependencies.Add("$(TargetOutputDir)/../../Content/" + filename, line );
                    //File.Copy(line, ProjectRoot + "../../Content/" + filename, true);
                }
                catch
                {
                    
                }
                // use line here
            }
        }
    }

    
}
