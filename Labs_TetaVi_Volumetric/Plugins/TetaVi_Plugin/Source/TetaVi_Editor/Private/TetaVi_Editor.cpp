
#include "TetaVi_Editor.h"

#include <functional>

#include "Core.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "LevelSequenceEditorModule.h"
#include <Runtime/Engine/Classes/Materials/MaterialExpressionConstant.h>

#include "AssetToolsModule.h"
#include "ContentBrowserItemData.h"
#include "EngineUtils.h"
#include "ISequencerModule.h"
#include "LevelSequence.h"
#include "MovieSceneCaptureModule.h"
#include "AssetTools/Private/AssetTools.h"
#include "Sections/MovieSceneFloatSection.h"
#include "Sections/MovieSceneIntegerSection.h"
#include "Sequencer/Public/ISequencer.h"
//#include "Toolkits/AssetEditorManager.h"
#include "Tracks/MovieSceneActorReferenceTrack.h"
#include "Tracks/MovieSceneAudioTrack.h"
#include "Tracks/MovieSceneFloatTrack.h"
#include "Tracks/MovieSceneIntegerTrack.h"
#include "Tracks/MovieSceneSpawnTrack.h"
#include "UObject/ConstructorHelpers.h"


#define LOCTEXT_NAMESPACE "FTetaVi_EditorModule"



void FTetaVi_EditorModule::StartupModule()
{
	if (GEngine) {
		//GEngine->OnLevelActorAdded().AddRaw(this, &FTetaVi_EditorModule::OnLevelTetaViPlayerAdded);
		GEngine->OnLevelActorDeleted().AddRaw( this, &FTetaVi_EditorModule::OnLevelActorsRemoved );
				
	}
	if(GEditor)
	{
		//FWorldDelegates::OnPostWorldInitialization.AddRaw(this, &FTetaVi_EditorModule::OnWorldInitialized);
		GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OnAssetEditorOpened().AddRaw(this, &FTetaVi_EditorModule::OnSequencerOpen);
		
	}
	static const FName NAME_AssetTools = "AssetTools";
	AssetTools = &FModuleManager::GetModuleChecked<FAssetToolsModule>(NAME_AssetTools).Get();
	FString TetaVi_Player_path = FPaths::ProjectPluginsDir() + "TetaVi_Plugin/Content/Sequencer/TetaVi_Sync.TetaVi_Sync";
	
	TArray<FName> InAdvancedCopyInputs = {FName(TetaVi_Player_path)};
	FString InDestinationPath = FPaths::ProjectContentDir();

	//FAssetToolsModule& AssetToolsModule = FModuleManager::Get().LoadModuleChecked<FAssetToolsModule>("AssetTools");
	//AssetToolsModule.Get().BeginAdvancedCopyPackages(InAdvancedCopyInputs, InDestinationPath);
	//AssetTools->BeginAdvancedCopyPackages(InAdvancedCopyInputs, "./TetaVi_Player");

	

	
	/*FString MyFileSource = FPaths::ProjectPluginsDir();
	MyFileSource.Append(TEXT("TetaVi_Plugin/Content/TetaVi_Player/TetaVi_Player.uasset"));

	FString MyFileDestination = FPaths::ProjectContentDir() ;
	MyFileDestination.Append(TEXT("TetaVi_Player.uasset"));
	IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();
	FileManager.CopyFile(*MyFileDestination,*MyFileSource,EPlatformFileRead::None,EPlatformFileWrite::None);
	
	FString MyFileSource2 = FPaths::ProjectPluginsDir()+"TetaVi_Plugin/Content/Material/TetaVi_Material_Lit_Inst.uasset";

	FString MyFileDestination2 = FPaths::ProjectContentDir() + "TetaVi_Material_Lit_Inst.uasset";
	//FileManager.CreateDirectory(*MyFileDestination2);
	FileManager.CopyFile(*MyFileDestination2,*MyFileSource2,EPlatformFileRead::None,EPlatformFileWrite::None);*/
	
}


void FTetaVi_EditorModule::ShutdownModule()
{
	
}


void FTetaVi_EditorModule::OnLevelActorsRemoved(AActor* InActor)
{
	ATetaVi_Player* player_new = Cast<ATetaVi_Player>(InActor);
	if(player_new)
		player_new->update_tet_to_build(true);
	
	
}
void FTetaVi_EditorModule::OnWorldInitialized(UWorld* World, const UWorld::InitializationValues IVS)
{
	// make sure that world has valid player manager, create when it doesn't
	/*if (World && World->IsGameWorld())
	{
		for (TActorIterator<ATetaVi_Player> It(World); It; ++It)
		{
			FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("ooo"));
			(*It)->OpenStream();
		}
	}*/
}
void FTetaVi_EditorModule::OnLevelTetaViPlayerAdded(AActor* inActor)
{
	/*ATetaVi_Player* player_new = Cast<ATetaVi_Player>(inActor);
	if(player_new)
		player_new->OpenStream();*/
}


void FTetaVi_EditorModule::OnsequencerPlay()
{
	
}

void FTetaVi_EditorModule::OnSequencerTimeChanged()
{
	TSharedPtr<ISequencer> current_sequencer_shr= current_sequencer.Pin();
	int frame = current_sequencer_shr->GetGlobalTime().Time.FrameNumber.Value;
	int frame_number = frame/(current_sequencer_shr->GetRootTickResolution().Numerator/current_sequencer_shr->GetFocusedDisplayRate().Numerator);
	for(ATetaVi_Player* player : bound_players)
	{
		player->FrameChangeEditor(frame_number,current_sequencer_shr->GetRootTickResolution().Numerator/current_sequencer_shr->GetFocusedDisplayRate().Numerator);
	}
}

void FTetaVi_EditorModule::OnSequencerOpen(UObject* _editor_widget)
{
	ULevelSequence* Asset = Cast<ULevelSequence>(_editor_widget);
	if(!Asset)return;
	
	IAssetEditorInstance* AssetEditor = GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->FindEditorForAsset(Asset,false);
	ILevelSequenceEditorToolkit* LevelSequenceEditor = static_cast<ILevelSequenceEditorToolkit*>(AssetEditor);
	if(!LevelSequenceEditor)return;
	TSharedPtr<ISequencer> sequencer = LevelSequenceEditor->GetSequencer();
	if(sequencer.IsValid())
	{
		sequencer->OnPlayEvent().AddRaw(this,&FTetaVi_EditorModule::OnsequencerPlay);
		sequencer->OnActorAddedToSequencer().AddRaw(this,&FTetaVi_EditorModule::OnSequencerTetaViActorsAdded);
		sequencer->OnTreeViewChanged().AddRaw(this,&FTetaVi_EditorModule::OnSequencerTetaViActorsChanged);
		sequencer->OnGlobalTimeChanged().AddRaw(this,&FTetaVi_EditorModule::OnSequencerTimeChanged);
		current_sequencer = sequencer;
		
		
	
		for(FMovieSceneBinding bind : sequencer->GetFocusedMovieSceneSequence()->GetMovieScene()->GetBindings())
		{
			TArrayView<TWeakObjectPtr<UObject>> all_objects = sequencer->FindObjectsInCurrentSequence(bind.GetObjectGuid());
			
			if(all_objects.Num() <= 0) continue;
			UObject* const Obj = all_objects[0].Get();
			if(!Obj) continue;
			if(Obj->IsA(ATetaVi_Player::StaticClass()))
			{
				ATetaVi_Player* player = Cast<ATetaVi_Player>(Obj);
				if(!player) continue;
				player->OpenStreamPreview(true);
				bound_players.Add(player);
				if(bind.GetTracks().Num() > 0)
				{
					for(UMovieSceneTrack* track : bind.GetTracks())
					{
						if(track->GetDisplayName().ToString() == "Starting Frame & Range")
						{
							if(track->GetAllSections().Num() > 0)
								player->sequencer_range_section = (UMovieSceneIntegerSection*)track->GetAllSections()[0];
						}
						
					}
					
				}
					
				
				
			}
		}
	}
		
	
}

void FTetaVi_EditorModule::OnSequencerTetaViActorsChanged()
{
	TSharedPtr<ISequencer> sequencer = current_sequencer.Pin();
	bound_players.Empty();
	for(FMovieSceneBinding bind : sequencer->GetFocusedMovieSceneSequence()->GetMovieScene()->GetBindings())
	{
		TArrayView<TWeakObjectPtr<UObject>> all_objects = sequencer->FindObjectsInCurrentSequence(bind.GetObjectGuid());
		
		if(all_objects.Num() <= 0) continue;
		UObject* const Obj = all_objects[0].Get();
		if(!Obj) continue;
		if(Obj->IsA(ATetaVi_Player::StaticClass()))
		{
			ATetaVi_Player* player = Cast<ATetaVi_Player>(Obj);
			if(!player) continue;
			bound_players.Add(player);
			if(bind.GetTracks().Num() > 0)
			{
				for(UMovieSceneTrack* track : bind.GetTracks())
				{
					if(track->GetDisplayName().ToString() == "Starting Frame & Range")
					{
						if(track->GetAllSections().Num() > 0)
							player->sequencer_range_section = (UMovieSceneIntegerSection*)track->GetAllSections()[0];
					}
						
				}
					
			}
		}
		
	}
	
}

void FTetaVi_EditorModule::OnSequencerTetaViActorsAdded(AActor* InActor,FGuid TargetObjectGuid)
{
	
	if (!InActor->IsA(ATetaVi_Player::StaticClass())) return;
	TSharedPtr<ISequencer> current_sequencer_shr= current_sequencer.Pin();
	if(!current_sequencer_shr) return;
	ATetaVi_Player* player_new = Cast<ATetaVi_Player>(InActor);

	
	int duration = FMath::Max( player_new->stream.frame_count * (current_sequencer_shr->GetRootTickResolution().Numerator/current_sequencer_shr->GetFocusedDisplayRate().Numerator),current_sequencer_shr->GetFocusedMovieSceneSequence()->GetMovieScene()->GetPlaybackRange().GetUpperBound().GetValue().Value);
	int start = player_new->starting_frame * (current_sequencer_shr->GetRootTickResolution().Numerator/current_sequencer_shr->GetFocusedDisplayRate().Numerator);
	current_sequencer_shr->GetFocusedMovieSceneSequence()->GetMovieScene()->SetPlaybackRange(start,duration);
	
	
	UMovieSceneIntegerTrack* range_track = current_sequencer_shr->GetFocusedMovieSceneSequence()->GetMovieScene()->AddTrack<UMovieSceneIntegerTrack>(TargetObjectGuid);
	range_track->SetDisplayName(FText::FromString("Starting Frame & Range"));
	range_track->SetPropertyNameAndPath("Starting Frame & Range", "Starting Frame & Range");
	UMovieSceneIntegerSection* Section = Cast<UMovieSceneIntegerSection>(range_track->CreateNewSection());
	Section->SetRange(current_sequencer_shr->GetFocusedMovieSceneSequence()->GetMovieScene()->GetPlaybackRange());
	range_track->AddSection(*Section);
	player_new->sequencer_range_section = Section;
	range_track->Modify();
	if(player_new->sound_wave)
	{
		UMovieSceneAudioTrack* audio_track = current_sequencer_shr->GetFocusedMovieSceneSequence()->GetMovieScene()->AddMasterTrack<UMovieSceneAudioTrack>();
		
		audio_track->SetDisplayName(FText::FromString(player_new->GetName() + "_Audio"));
		
		
		
		//Section->SetPropertyNameAndPath("From_to", "From");
		/*UMovieSceneFloatTrack* From_track = current_sequencer_shr->GetFocusedMovieSceneSequence()->GetMovieScene()->AddTrack<UMovieSceneFloatTrack>(TargetObjectGuid);

		From_track->SetPropertyNameAndPath("From", "From");
		delay_track->SetPropertyNameAndPath("To", "To");*/
		//UMovieSceneFloatSection* Section = Cast<UMovieSceneFloatSection>(delay_track->CreateNewSection());
		//UMovieSceneTrack* movie_track = current_sequencer_shr->GetFocusedMovieSceneSequence()->GetMovieScene()->AddTrack(UMovieSceneAudioTrack::StaticClass(), TargetObjectGuid);
		//UMovieSceneAudioTrack* audio_track = Cast<UMovieSceneAudioTrack>(movie_track);
		audio_track->Modify();
		
		//UMovieSceneAudioTrack audio_section =
		
		if(player_new->tetPath.FilePath != "")
		{
			/*FString sound_wave_file_name =  FPaths::GetBaseFilename(player_new->tetPath.FilePath); //UKismetSystemLibrary::GetObjectName(this);// FPaths::GetCleanFilename(tetPath.FilePath);
			sound_wave_file_name = sound_wave_file_name.Replace(TEXT("."), TEXT(""));
			FString reference_syntax = "SoundWave'/TetaVi_Plugin/Audio/" + sound_wave_file_name + "." + sound_wave_file_name + "'";
			USoundWave* sound_wave = (USoundWave*)StaticLoadObject(USoundWave::StaticClass(), NULL, *reference_syntax, NULL, LOAD_None, NULL);
			*/
			audio_track->AddNewSound(player_new->sound_wave,0);
		}
		
	}
	bound_players.Add(player_new);
	if(player_new->stream.GetFps() != current_sequencer_shr->GetFocusedDisplayRate().Numerator){
		FString msg = "The new TetaVi Players fps (" + FString::FromInt(player_new->stream.GetFps()) + ") do not match the sequencer fps (" + FString::FromInt(current_sequencer_shr->GetFocusedDisplayRate().Numerator) + ")"; 
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(msg));
	}
		
	
	
	
	
	

	// Get a list of ULevelSequence
	
	
	
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(InActor->GetUniqueID()+"));
	//players.Add(InActor->GetUniqueID());
	// the actor is of type ATetaVi_Player
	//TArray<FString> segmens_names = { "Hair","Shoe","Face" ,"Upper_Clothes" ,"Lower_Clothes" ,"Torso_Skin" ,"Arms" ,"Legs", "Mouth","Socks","Eyes" };
	//TArray<int> segmens_Labels = { 2,18,13,5,9,10,14,1,20,8,21 };
	//FString name = "tetavi";// +InActor->GetFName().ToString();
	
	//player->Material = Cast<UMaterialInterface>(CreateNewMaterial(name, segmens_names, segmens_Labels));
	//CreateNewMaterial(name, segmens_names, segmens_Labels);
	current_sequencer_shr->NotifyMovieSceneDataChanged(EMovieSceneDataChangeType::ActiveMovieSceneChanged);
}



UMaterial* FTetaVi_EditorModule::CreateNewMaterial(const FString& object_name, TArray<FString>& segmens_names, TArray<int>& segmens_Labels) {
	//FString MaterialBaseName = "TetaVi_Material_" + object_name;
	FString PackageName = "/Game/"+object_name+"/";
	//PackageName += MaterialBaseName;
	
	TArray<UMaterialFunction*> segments_array = CreateSegmentsFunctions(PackageName, object_name, segmens_names);
	UMaterialFunction* material_segmmentation = CreateMaterialSegmentationFunction(PackageName, object_name, segmens_names, segmens_Labels);

	return CreateMaterial(object_name, material_segmmentation);
}


UMaterial* FTetaVi_EditorModule::CreateMaterial(FString name, UMaterialFunction* material_segmentation) {
	FString asset_ref = "MaterialFunction'/Game/tetavi/Material_Segmentation_tetavi.Material_Segmentation_tetavi'";
	material_segmentation = LoadObject<UMaterialFunction>(NULL, *asset_ref, NULL, LOAD_None, NULL);
	FString MaterialBaseName = "TetaVi_Material";//_"+name;
	FString PackageName = "/Game/" + name + "/";
	PackageName += MaterialBaseName;


	UPackage* Package = CreatePackage( *PackageName);

	// Create an unreal material asset
	UMaterialFactoryNew* MaterialFactory = NewObject<UMaterialFactoryNew>();
	UMaterial* UnrealMaterial = (UMaterial*)MaterialFactory->FactoryCreateNew(UMaterial::StaticClass(), Package, *MaterialBaseName, RF_Standalone | RF_Public, NULL, GWarn);
	UnrealMaterial->bUseMaterialAttributes = true;
	FAssetRegistryModule::AssetCreated(UnrealMaterial);
	Package->FullyLoad();
	Package->SetDirtyFlag(true);

	// Let the material update itself if necessary

	

	// insert material segmentation node
	UMaterialExpressionMaterialFunctionCall* material_segmentation_function_call = NewObject<UMaterialExpressionMaterialFunctionCall>(UnrealMaterial);
	UnrealMaterial->Expressions.Add(material_segmentation_function_call);
	material_segmentation_function_call->SetMaterialFunction(material_segmentation);
	material_segmentation_function_call->AddToRoot();
	// conect material segmentation nodes output to materials output
	//UnrealMaterial->MaterialAttributes = material_segmentation_function_call;

	// add mix_segmentation_and_color_textures node
	asset_ref = "MaterialFunction'/TetaVi_Plugin/Material/Utils/mix_segmentation_and_color_textures.mix_segmentation_and_color_textures'";
	UMaterialFunction* mix_segmentation_and_color_textures = LoadObject<UMaterialFunction>(NULL, *asset_ref, NULL, LOAD_None, NULL);
	UMaterialExpressionMaterialFunctionCall* mix_segmentation_and_color_textures_function_call = NewObject<UMaterialExpressionMaterialFunctionCall>(UnrealMaterial);
	UnrealMaterial->Expressions.Add(mix_segmentation_and_color_textures_function_call);
	mix_segmentation_and_color_textures_function_call->SetMaterialFunction(mix_segmentation_and_color_textures);

	// connect mix_segmentation_and_color_textures
	//

	// add Devide_Textur node
	asset_ref = "MaterialFunction'/TetaVi_Plugin/Material/Utils/Devide_Textur.Devide_Textur'";
	UMaterialFunction* devide_textur = LoadObject<UMaterialFunction>(NULL, *asset_ref, NULL, LOAD_None, NULL);
	UMaterialExpressionMaterialFunctionCall* devide_textur_function_call = NewObject<UMaterialExpressionMaterialFunctionCall>(UnrealMaterial);
	UnrealMaterial->Expressions.Add(devide_textur_function_call);
	devide_textur_function_call->SetMaterialFunction(devide_textur);



	// add texcood[0] node
	UMaterialExpressionTextureCoordinate* TexCoords = NewObject<UMaterialExpressionTextureCoordinate>(UnrealMaterial);
	UnrealMaterial->Expressions.Add(TexCoords);

	// connect texcoord[0] to Devide_Textur node
	devide_textur_function_call->GetInput(0)->Expression = TexCoords;

	// add material segmentation parameter that will be controled from code, if 1 the tet has material segmentation information, 0 otherwise
	UMaterialExpressionScalarParameter* Material_Segmentation_Parameter = NewObject<UMaterialExpressionScalarParameter>(UnrealMaterial);
	UnrealMaterial->Expressions.Add(Material_Segmentation_Parameter);
	Material_Segmentation_Parameter->ParameterName = "Material_Segmentation";

	//connect the parameter to Devide_Textur node
	devide_textur_function_call->GetInput(1)->Expression = Material_Segmentation_Parameter;
	
	// we split the color texture into 2 textures UV and Y , and in addition we split the segmentation texture this way as well 
	// 	   so we get 4 textures overall
	// 
	FStringAssetReference DiffuseAssetPath("Texture2D'/TetaVi_Plugin/Material/Utils/AICON-Green.AICON-Green'");
	UTexture* DiffuseTexture = Cast<UTexture>(DiffuseAssetPath.TryLoad());
	// adding UV texture that will be filled with the albedo color of the tet 
	UMaterialExpressionTextureSampleParameter2D* Texture_UV_Color_1 = NewObject<UMaterialExpressionTextureSampleParameter2D>(UnrealMaterial);
	Texture_UV_Color_1->SamplerType = SAMPLERTYPE_Color;
	Texture_UV_Color_1->ParameterName = "texUV";
	Texture_UV_Color_1->Texture = DiffuseTexture;
	UnrealMaterial->Expressions.Add(Texture_UV_Color_1);

	// connect the color texture uvs to UV Color texture
	devide_textur_function_call->ConnectExpression(Texture_UV_Color_1->GetInput(0),0);
	// connect texture output to mix_segmentation_and_color_textures node
	Texture_UV_Color_1->ConnectExpression(mix_segmentation_and_color_textures_function_call->GetInput(0), 0);

	// adding Y texture that will be filled with the albedo color of the tet 
	UMaterialExpressionTextureSampleParameter2D* Texture_Y_Color_1 = NewObject<UMaterialExpressionTextureSampleParameter2D>(UnrealMaterial);
	Texture_Y_Color_1->SamplerType = SAMPLERTYPE_Color;
	Texture_Y_Color_1->ParameterName = "texY";
	Texture_Y_Color_1->Texture = DiffuseTexture;
	UnrealMaterial->Expressions.Add(Texture_Y_Color_1);

	// connect the color texture uvs to Y Color texture
	devide_textur_function_call->ConnectExpression(Texture_Y_Color_1->GetInput(0), 0);
	// connect texture output to mix_segmentation_and_color_textures node
	Texture_Y_Color_1->ConnectExpression(mix_segmentation_and_color_textures_function_call->GetInput(1), 0);

	// adding UV texture that will be filled with the segmentation colors of the tet 
	UMaterialExpressionTextureSampleParameter2D* Texture_UV_Color_2 = NewObject<UMaterialExpressionTextureSampleParameter2D>(UnrealMaterial);
	Texture_UV_Color_2->SamplerType = SAMPLERTYPE_Color;
	Texture_UV_Color_2->ParameterName = "texUV";
	Texture_UV_Color_2->Texture = DiffuseTexture;
	UnrealMaterial->Expressions.Add(Texture_UV_Color_2);

	// connect the segmentation texture uvs to UV Color texture
	devide_textur_function_call->ConnectExpression(Texture_UV_Color_2->GetInput(0), 1);
	// connect texture output to mix_segmentation_and_color_textures node
	Texture_UV_Color_2->ConnectExpression(mix_segmentation_and_color_textures_function_call->GetInput(2), 0);

	// adding Y texture that will be filled with the segmentation colors of the tet 
	UMaterialExpressionTextureSampleParameter2D* Texture_Y_Color_2 = NewObject<UMaterialExpressionTextureSampleParameter2D>(UnrealMaterial);
	Texture_Y_Color_2->SamplerType = SAMPLERTYPE_Color;
	Texture_Y_Color_2->ParameterName = "texY";
	Texture_Y_Color_2->Texture = DiffuseTexture;
	UnrealMaterial->Expressions.Add(Texture_Y_Color_2);

	// connect the segmentation texture uvs to Y Color texture
	devide_textur_function_call->ConnectExpression(Texture_Y_Color_2->GetInput(0), 1);
	// connect texture output to mix_segmentation_and_color_textures node
	Texture_Y_Color_2->ConnectExpression(mix_segmentation_and_color_textures_function_call->GetInput(3), 0);


	// connect mix_segmentation_and_color_textures node to material segmentation node
	mix_segmentation_and_color_textures_function_call->ConnectExpression(material_segmentation_function_call->GetInput(0), 0);
	mix_segmentation_and_color_textures_function_call->ConnectExpression(material_segmentation_function_call->GetInput(1), 1);

	// connect the main output
	UnrealMaterial->MaterialAttributes.Expression = material_segmentation_function_call;
	
	
	
	UnrealMaterial->PreEditChange(NULL);
	UnrealMaterial->PostEditChange();
	FGlobalComponentReregisterContext RecreateComponents;
	UPackage::Save(Package, NULL, RF_Standalone, *FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension()), GError, nullptr, false, true, SAVE_NoError);
	return UnrealMaterial;


}



UMaterialFunction* FTetaVi_EditorModule::CopySegment(const FString& PackageName,const FString& SegmentName, const FString& name) {
	FString asset_ref = "MaterialFunction'/TetaVi_Plugin/Material/Material_Segmentation/MS_" + SegmentName + ".MS_" + SegmentName + "'";
	UMaterialFunction* MS_Segment = LoadObject<UMaterialFunction>(NULL, *asset_ref, NULL, LOAD_None, NULL);
	UMaterialFunction* MS_Segment_New = CreateFunction(PackageName, "MS_" + SegmentName + "_" + name);
	return MS_Segment_New;
}

UMaterialFunction* FTetaVi_EditorModule::CreateSegment(UMaterial* UnrealMaterial, UMaterialFunction* MS_Segment_New) {
	
	if (MS_Segment_New)
	{
		UMaterialExpressionMaterialFunctionCall* MS_Segment_Call = NewObject<UMaterialExpressionMaterialFunctionCall>(UnrealMaterial);
		UnrealMaterial->Expressions.Add(MS_Segment_Call);
		MS_Segment_Call->MaterialFunction = MS_Segment_New;
		MS_Segment_Call->UpdateFromFunctionResource();
		//UnrealMaterial->BaseColor.Expression = MS_Segment_Call;
	}
	return MS_Segment_New;
}


/// <summary>
///		Creates the matrial segmentation function the blends all body parts, each segment has its label
/// </summary>
/// <param name="PackageName">name of the package</param>
/// <param name="name"> name of the TetaVi_Player object we create this material for</param>
/// <param name="segments_array"> array of material functions for each segment e.g("MS_Hair","MS_Shoes"...)</param>
/// <param name="segmens_labels"> array of the labeles/ids for each segment e.g(MS_Hair label is 2 ,MS_Shoes label is 18)</param>
UMaterialFunction* FTetaVi_EditorModule::CreateMaterialSegmentationFunction(const FString& PackageName, const FString& name, TArray<FString>& segments_names_array, TArray<int>& segmens_labels) {
	FString func_name = "Material_Segmentation_" + name;
	FString package_name = PackageName + func_name;
	UPackage* Package = CreatePackage(*package_name);
	
	UMaterialFunctionFactoryNew* MaterialFunctionFactory = NewObject<UMaterialFunctionFactoryNew>();
	UMaterialFunction* Function = (UMaterialFunction*)MaterialFunctionFactory->FactoryCreateNew(UMaterialFunction::StaticClass(), Package, *func_name, RF_Standalone | RF_Public, NULL, GWarn);
	FAssetRegistryModule::AssetCreated(Function);
	Package->FullyLoad();
	Package->SetDirtyFlag(true);
	////inputs
	// base color input node
	UMaterialExpressionFunctionInput* input_main_albedo = NewObject<UMaterialExpressionFunctionInput>(Function);
	Function->FunctionExpressions.Add(input_main_albedo);
	input_main_albedo->InputType = EFunctionInputType::FunctionInput_Vector3;
	input_main_albedo->Desc = "input Base Color";
	input_main_albedo->InputName = "Input Base Color";
	input_main_albedo->SortPriority = 0;
	input_main_albedo->Id = FGuid::NewGuid();
	input_main_albedo->UpdateMaterialExpressionGuid(true, true);
	// scalar material segmentation label node
	UMaterialExpressionFunctionInput* input_material_segmentation_label = NewObject<UMaterialExpressionFunctionInput>(Function);
	Function->FunctionExpressions.Add(input_material_segmentation_label);
	input_material_segmentation_label->InputType = EFunctionInputType::FunctionInput_Scalar;
	input_material_segmentation_label->Desc = "material segmentation label";
	input_material_segmentation_label->InputName = "Material Segmentation Label";
	input_material_segmentation_label->SortPriority = 1;
	input_material_segmentation_label->Id = FGuid::NewGuid();
	input_material_segmentation_label->UpdateMaterialExpressionGuid(true, true);

	

	// ms blend node
	FString asset_ref = "MaterialFunction'/TetaVi_Plugin/Material/Utils/MS_Blend.MS_Blend'";
	UMaterialFunction* MS_Blend = LoadObject<UMaterialFunction>(NULL, *asset_ref, NULL, LOAD_None, NULL);
	UMaterialExpressionMaterialFunctionCall* ms_blend = NewObject<UMaterialExpressionMaterialFunctionCall>(Function);
	Function->FunctionExpressions.Add(ms_blend);
	ms_blend->SetMaterialFunction(MS_Blend);
	ms_blend->UpdateMaterialExpressionGuid(true,true);


	// attributs to blend input color with all the segments in the ms_blend
	UMaterialExpressionMakeMaterialAttributes* attributes = NewObject<UMaterialExpressionMakeMaterialAttributes>(Function);
	Function->FunctionExpressions.Add(attributes);
	attributes->BaseColor.Expression = input_main_albedo;
	// connect the input color to material atributes and the connect it to the ms_blend in the last place called (background color)
	attributes->ConnectExpression(ms_blend->GetInput(segments_names_array.Num()*2), 0);
	attributes->UpdateMaterialExpressionGuid(true, true);

	//// output node
	UMaterialExpressionFunctionOutput* output = NewObject<UMaterialExpressionFunctionOutput>(Function);
	Function->FunctionExpressions.Add(output);
	ms_blend->ConnectExpression(output->GetInput(0), 0);
	
	


	

	// connect all segmentation function to albedo base color input and color blend output;
	for (int i = 0; i < segments_names_array.Num(); i++) {
		AddSegmentToMaterialSegmentation(Function, segments_names_array[i], input_main_albedo, ms_blend,i);
	}

	for (int i = 0; i < segmens_labels.Num(); i++) {
		AddSegmentationLabels(Function, segmens_labels[i], input_material_segmentation_label, ms_blend, i);
	}

	check(Function);
	Function->StateId = FGuid::NewGuid();

	Function->PreEditChange(NULL);
	Function->PostLoad();
	FAssetRegistryModule::AssetCreated(Function);
	Function->MarkPackageDirty();
	FGlobalComponentReregisterContext RecreateComponents;
	UPackage::SavePackage(Package, NULL, RF_Standalone, *FPackageName::LongPackageNameToFilename(package_name, FPackageName::GetAssetPackageExtension()), GError, nullptr, false, true, SAVE_NoError);
	return Function;

}
/// <summary>
///		connects a single segment material function to base color input and the right place at the ms_blend input
/// </summary>
/// <param name="material_segmentation_function"> The base material function that connects all material segmentations to 1 blend</param>
/// <param name="segment_function"> one segment e.g("MS_Hair","MS_Shoe") material function</param>
/// <param name="input_main_albedo"> input base color node </param>
/// <param name="ms_blend"> ms_blend to blend all segments</param>
/// <param name="i"> used to connect the right input index of ms blend</param>
void FTetaVi_EditorModule::AddSegmentToMaterialSegmentation(UMaterialFunction* material_segmentation_function, FString &FunctionName, UMaterialExpressionFunctionInput* input_main_albedo, UMaterialExpressionMaterialFunctionCall* ms_blend,int i) {
	FString PackageName = "/Game/tetavi/";
	FString func_name = "MS_" + FunctionName;
	FString package_name = PackageName + "MS/" + func_name;
	FString asset_ref = "MaterialFunction'" + PackageName + "MS/" + func_name + "_tetavi." + func_name + "_tetavi'";
	//FString asset_ref = "MaterialFunction'/TetaVi_Plugin/Material/Material_Segmentation/" + func_name +"."+ func_name +"'";
	UMaterialFunction* segment_function = LoadObject<UMaterialFunction>(NULL, *asset_ref, NULL, LOAD_None, NULL);

	UMaterialExpressionMaterialFunctionCall* ms = NewObject<UMaterialExpressionMaterialFunctionCall>(material_segmentation_function);
	material_segmentation_function->FunctionExpressions.Add(ms);
	ms->SetMaterialFunction(segment_function);
	
	input_main_albedo->ConnectExpression(ms->GetInput(0),0);
	
	ms->ConnectExpression(ms_blend->GetInput(i*2), 0);


	


}
/// <summary>
/// /
/// </summary>
/// <param name="material_segmentation_function"> The base material function that connects all material segmentations to 1 blend</param>
/// <param name="segments_label"> the static label that indicates the segment e.g (label 2 is "hair")</param>
/// <param name="input_label"> the input label node to connect to the if statment</param>
/// <param name="ms_blend"> ms_blend to blend all segments and if statments </param>
/// <param name="i">used to connect the right input index of ms blend</param>
void FTetaVi_EditorModule::AddSegmentationLabels(UMaterialFunction* material_segmentation_function, int segments_label, UMaterialExpressionFunctionInput* input_label, UMaterialExpressionMaterialFunctionCall* ms_blend, int i) {

	// get ms if statement node
	FString asset_ref = "MaterialFunction'/TetaVi_Plugin/Material/Utils/IF_Statement_Label.IF_Statement_Label'";
	UMaterialFunction* MS_If_Statement = LoadObject<UMaterialFunction>(NULL, *asset_ref, NULL, LOAD_None, NULL);
	UMaterialExpressionMaterialFunctionCall* ms_if_statement = NewObject<UMaterialExpressionMaterialFunctionCall>(material_segmentation_function);
	material_segmentation_function->FunctionExpressions.Add(ms_if_statement);
	ms_if_statement->SetMaterialFunction(MS_If_Statement);
	// connect the if statment node to the input label node
	input_label->ConnectExpression(ms_if_statement->GetInput(1), 0);
	// connect the if statment node output to the ms_blendinto the right input of ms_blend
	ms_if_statement->ConnectExpression(ms_blend->GetInput(i*2 + 1), 0);

	UMaterialExpressionConstant* label_id = NewObject<UMaterialExpressionConstant>(material_segmentation_function);
	label_id->R = segments_label;
	material_segmentation_function->FunctionExpressions.Add(label_id);
	label_id->ConnectExpression(ms_if_statement->GetInput(0), 0);



}


TArray<UMaterialFunction*> FTetaVi_EditorModule::CreateSegmentsFunctions(const FString& PackageName, const FString& name, TArray<FString>& segmens_names) {

	TArray<UMaterialFunction*> segments_array;
	for (int i = 0; i < segmens_names.Num(); i++) {
		segments_array.Add(CreateFunction(PackageName, segmens_names[i] + "_" + name));
	}

	return segments_array;
}

UMaterialFunction* FTetaVi_EditorModule::CreateFunction(const FString& PackageName,const FString& FunctionName)
{
	FString func_name = "MS_" + FunctionName;
	FString package_name = PackageName + "MS/" + func_name;
	UPackage* Package = CreatePackage(*package_name);
	

	UMaterialFunctionFactoryNew* MaterialFunctionFactory = NewObject<UMaterialFunctionFactoryNew>();
	UMaterialFunction* Function = (UMaterialFunction*)MaterialFunctionFactory->FactoryCreateNew(UMaterialFunction::StaticClass(), Package, *func_name, RF_Standalone | RF_Public, NULL, GWarn);
	FAssetRegistryModule::AssetCreated(Function);
	Package->FullyLoad();
	Package->SetDirtyFlag(true);
	//UMaterialFunction* Function = NewObject<UMaterialFunction>(Package, UMaterialFunction::StaticClass(), FName(*FunctionName), RF_Public | RF_Standalone, func);
	UMaterialExpressionFunctionInput* input_color = NewObject<UMaterialExpressionFunctionInput>(Function);
	Function->FunctionExpressions.Add(input_color);
	input_color->InputType = EFunctionInputType::FunctionInput_Vector3;// UMaterialExpressionFunctionInput(Function, TEXT("color1"), EFunctionInputType::FunctionInput_Vector3, { 0.0f, 0.0f, 0.0f }));
	input_color->Desc = "Base Color";

	UMaterialExpressionFunctionOutput* output = NewObject<UMaterialExpressionFunctionOutput>(Function);
	Function->FunctionExpressions.Add(output);

	UMaterialExpressionMakeMaterialAttributes* attributes = NewObject<UMaterialExpressionMakeMaterialAttributes>(Function);
	Function->FunctionExpressions.Add(attributes);
	
	attributes->BaseColor.Expression = input_color;
	output->A.Expression = attributes;
	check(Function);
	Function->StateId = FGuid::NewGuid();

	//Generate(Function);

	// Arrange editor nodes
	//UMaterialEditingLibrary::LayoutMaterialFunctionExpressions(Function);
	Function->PreEditChange(NULL);
	Function->PostLoad();
	FAssetRegistryModule::AssetCreated(Function);
	Function->MarkPackageDirty();
	FGlobalComponentReregisterContext RecreateComponents;
	return Function;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FTetaVi_EditorModule, TetaVi_Editor)