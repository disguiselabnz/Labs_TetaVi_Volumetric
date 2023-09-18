// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "ITetaViProceduralMeshComponentPlugin.h"

class FTetaViProceduralMeshComponentPlugin : public ITetaViProceduralMeshComponentPlugin
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FTetaViProceduralMeshComponentPlugin, TetaViProceduralMeshComponent )



void FTetaViProceduralMeshComponentPlugin::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}


void FTetaViProceduralMeshComponentPlugin::ShutdownModule()
{
	
}



