// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

using System;
using System.IO;

namespace UnrealBuildTool.Rules
{
    public class OculusXRPassthrough : ModuleRules
    {
        public OculusXRPassthrough(ReadOnlyTargetRules Target) : base(Target)
        {
            bUseUnity = true;
            bool bWithOculusOpenXR = false;

            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "ProceduralMeshComponent",
                    "OculusXRHMD",
                    "OculusXROpenXRHMD",
                    "KhronosOpenXRHeaders",
                    "OVRPluginXR",
                    "RHI",
                    "HeadMountedDisplay",
                    "XRBase",
                });


            if (bWithOculusOpenXR)
            {
                PublicDefinitions.Add("WITH_OCULUS_OPENXR_NATIVE");

                PrivateDependencyModuleNames.AddRange(
                    new string[]
                    {
                        "OpenXR",
                        "OpenXRHMD"
                    });
            }


            PublicIncludePaths.AddRange(new string[] {
                "Runtime/Engine/Classes/Components",
                "Runtime/Engine/Classes/Kismet",
            });

            PrivateIncludePaths.AddRange(new string[] {
                // Relative to Engine\Plugins\Runtime\Oculus\OculusVR\Source
				"OculusXRHMD/Private",
                "OculusXROpenXRHMD/Private",
            });

            AddEngineThirdPartyPrivateStaticDependencies(Target, "OpenXR");
        }
    }
}
