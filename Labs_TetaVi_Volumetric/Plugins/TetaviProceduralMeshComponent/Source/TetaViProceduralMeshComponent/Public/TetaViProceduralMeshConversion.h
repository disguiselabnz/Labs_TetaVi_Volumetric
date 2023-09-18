// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MeshDescription.h"

class UTetaViProceduralMeshComponent;

FMeshDescription
TETAVIPROCEDURALMESHCOMPONENT_API
BuildMeshDescription( UTetaViProceduralMeshComponent* ProcMeshComp );

void
TETAVIPROCEDURALMESHCOMPONENT_API
MeshDescriptionToProcMesh( const FMeshDescription& MeshDescription, UTetaViProceduralMeshComponent* ProcMeshComp );
