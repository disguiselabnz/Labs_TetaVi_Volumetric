#pragma once

#include "Modules/ModuleManager.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionIO.h"
#include "Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Materials/MaterialExpressionMaterialAttributeLayers.h"
#include "Materials/MaterialFunctionInterface.h"
#include "Materials/MaterialFunction.h"
#include "Materials/MaterialFunctionMaterialLayer.h"
#include "Factories/MaterialFunctionFactoryNew.h"
#include "Materials/MaterialExpressionFunctionOutput.h"
#include "Materials/MaterialExpressionFunctionInput.h"
#include "Materials/MaterialExpressionTextureCoordinate.h"
#include "Materials/MaterialExpressionScalarParameter.h"
#include "Materials/MaterialExpressionRuntimeVirtualTextureSample.h"
#include "Materials/MaterialExpressionTextureSampleParameter.h"
#include "Materials/MaterialExpressionTextureSampleParameter2D.h"
#include "Factories/MaterialFactoryNew.h"
#include "Editor/EditorEngine.h"
#include "Engine/Engine.h"
#include "Widgets/SWindow.h"
#include "Blueprint/UserWidget.h"
#include "TetaVi_Player.h"
#include "ISequencer.h"
#include "MovieSceneSequence.h"
#include "AssetToolsModule.h"
#include "MovieScene.h"
#include "ILevelSequenceEditorToolkit.h"
#include "Dialogs/CustomDialog.h"
#include "Materials/MaterialExpressionMakeMaterialAttributes.h"

#include "AssetRegistryModule.h"

class IAssetTools;

class FTetaVi_EditorModule : public IModuleInterface
{



	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	void OnLevelActorsRemoved(AActor* InActor);
	void OnWorldInitialized(UWorld* World, UWorld::InitializationValues IVS);
	void OnLevelTetaViPlayerAdded(AActor* inActor);
	void OnsequencerPlay();
	void OnSequencerOpen(UObject* editor_widget);
	void OnSequencerTetaViActorsChanged();
	UMaterialFunction* CopySegment(const FString& PackageName, const FString& SegmentName, const FString& name);
	UMaterialFunction* CreateSegment(UMaterial* UnrealMaterial, UMaterialFunction* MS_Segment_New);
	UMaterial* CreateNewMaterial(const FString& object_name, TArray<FString>& segmens_names, TArray<int>& segmens_Labels);
	UMaterial* CreateMaterial(FString name, UMaterialFunction* material_segmentation);
	UMaterialFunction* CreateMaterialSegmentationFunction(const FString& PackageName, const FString& name, TArray<FString>& segments_array, TArray<int>& segmens_labels);
	void AddSegmentToMaterialSegmentation(UMaterialFunction* material_segmentation_function, FString& FunctionName, UMaterialExpressionFunctionInput* input_main_albedo, UMaterialExpressionMaterialFunctionCall* ms_blend, int i);
	void AddSegmentationLabels(UMaterialFunction* material_segmentation_function, int segments_label, UMaterialExpressionFunctionInput* input_label, UMaterialExpressionMaterialFunctionCall* ms_blend, int i);
	TArray<UMaterialFunction*> CreateSegmentsFunctions(const FString& PackageName, const FString& name, TArray<FString>& segmens_names);
	UMaterialFunction* CreateFunction(const FString& PackageName, const FString& FunctionName);
	void OnSequencerTetaViActorsAdded(AActor* InActor, FGuid TargetObjectGuid);
	
	void OnSequencerTimeChanged();

private:
	FDelegateHandle TetaViyTrackCreateEditorHandle;
	TArray<int32> players;
	bool f = false;
	TWeakPtr<ISequencer> current_sequencer;
	int max_frame = -1;
	TArray<ATetaVi_Player*> bound_players;
	IAssetTools* AssetTools;
};

