// Fill out your copyright notice in the Description page of Project Settings.

#include "TetaVi_Player.h"
#include "UObject/UObjectGlobals.h"
#include "Core.h"
#include "EngineUtils.h"

#if PLATFORM_ANDROID
#include "AndroidRuntimeSettings.h"
#endif

#if WITH_EDITOR
#include "Editor.h"
#include "LevelSequence.h"
#include "MovieSceneCapture.h"
#include "MovieSceneCaptureModule.h"


#include "MovieSceneTools/Public/AutomatedLevelSequenceCapture.h"
#endif



#define LOCTEXT_NAMESPACE "FTetaVi_PluginModule"


class UAutomatedLevelSequenceCapture;

bool ATetaVi_Player::FrameChangeAudio(float percent_of_audio) {
	int frame_audio = (percent_of_audio) * stream.frame_count;
	if(curr_frame_idx == frame_audio) return true;
	void* frame = stream.GetFrameObjAudio(frame_audio);
	if (frame) {
		CreateMesh(frame);
		curr_frame_idx = frame_audio;
		return true;
	}
	return false;

	
}

void ATetaVi_Player::OnAudioFinished()
{
	if(!stream.is_url_stream && loop && !stop)
	{
		audio_component->Play(0);
	}
	
}

void ATetaVi_Player::onAudioPercent(const class USoundWave* PlayingSoundWave, const float PlaybackPercent) {
	
	FrameChangeAudio(PlaybackPercent);
}
bool ATetaVi_Player::FrameChangeCapture(int frame_index)
{
	if(!first_frame_loaded) return false;
	if(capture_fps <= 0 )return false;
	if(fps<=0)return false;
	
	float frames_to_secons = (float)frame_index/capture_fps;
	
	frame_index = frames_to_secons*fps;
	frame_index+=starting_frame_capture;
	if(frame_index<=stream.frame_count)
		update_frame(true, frame_index);
	return true;
}
bool ATetaVi_Player::FrameChangeEditor(int frame_index,int frame_factor)
{
#if WITH_EDITOR
	if(stream.frame_count <= 0 )
	{
		OpenStreamPreview(true);
	}
	if(sequencer_range_section)
	{
		sequencer_frame_from = sequencer_range_section->GetRange().GetLowerBoundValue().Value / frame_factor;
		sequencer_frame_to = sequencer_range_section->GetRange().GetUpperBoundValue().Value / frame_factor;
		if(starting_frame_in_section = sequencer_range_section->GetChannel().GetDefault().IsSet())
			starting_frame_in_section = sequencer_range_section->GetChannel().GetDefault().GetValue();
	}
	if(stop)return true;
	if(sequencer_frame_to <= 0 || frame_factor <= 0) return true;
	if(loop)
	{
		
		frame_index%=sequencer_frame_to;
	}
	if (frame_index < sequencer_frame_from) frame_index = sequencer_frame_from;
	if(frame_index > sequencer_frame_to) frame_index = sequencer_frame_to;
	
	frame_index = starting_frame_in_section + frame_index - sequencer_frame_from;
	if( curr_frame_idx == frame_index)
		return true;
	//UE_LOG(LogTemp, Warning, TEXT("frame_index %d starting_frame_in_section %d sequencer_frame_from %d"),frame_index,starting_frame_in_section,sequencer_frame_from);
	//frame_index = starting_frame + frame_index - start_delay;
	if(frame_index > curr_frame_idx + 60 || frame_index < curr_frame_idx)
	{
		return update_frame(sequencer_mode, frame_index);
	}
	else
	{
		return update_frame(false,frame_index);
	}
#endif
	return true;
}
bool ATetaVi_Player::FrameChange(int frame_index) {
	if(stream.has_audio) return true;
	if(!loop && frame_index >= getFrameCount()) return true;
	
	if(!update_frame(false, frame_index - paused_time))
	{
		paused_time++;
		return false;
	}
	return true;
	
}

// Sets default values
ATetaVi_Player::ATetaVi_Player()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if(!CreateProcMesh())
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("CreateProcMesh failed"));
	}
	
	//if(!MaterialYUV)
	//	MaterialYUV = ConstructorHelpers::FObjectFinderOptional<UMaterialInstanceConstant>(TEXT("MaterialInstanceConstant'/TetaVi_Plugin/Material/TetaVi_Material_Lit_Inst.TetaVi_Material_Lit_Inst'")).Get();
	if(!Material)
		Material = ConstructorHelpers::FObjectFinderOptional<UMaterial>(TEXT("Material'/TetaVi_Plugin/Material/TetaVi_Material_Lit.TetaVi_Material_Lit'")).Get();
	
}

bool ATetaVi_Player::CreateProcMesh()
{
	pm = CreateDefaultSubobject<UTetaViProceduralMeshComponent>(TEXT("TetaViProceduralMesh"));
	if(pm == nullptr) return false;
	SetRootComponent(pm);
	//pm->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	pm->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	pm->GetBodySetup()->bGenerateMirroredCollision = true;
	pm->SetWorldScale3D(FVector(100, 100, -100));
	FRotator NewRotator(180, 0, 0);
	pm->SetWorldRotation(NewRotator);
	return true;
}

void ATetaVi_Player::BeginDestroy()
{
	Super::BeginDestroy();
	Stop();
	
	
}

void ATetaVi_Player::Pause(bool pause)
{
	// tets with audio
	if(audio_component && stream.has_audio)
	{
		audio_component->SetPaused(pause);
	}
	
	// tets without audio
	paused = pause;
}

void ATetaVi_Player::Stop()
{
	if(audio_component)
		audio_component->Stop();
	stop = true;
	stream.Stop();
}

void ATetaVi_Player::SetFrameIndex(int index)
{
	if(stream_url != "") return;
	if(stream.has_audio)
	{
		
		audio_component->Play((float)index / stream.GetFps());
		audio_component->SetPaused(paused);
	}else
	{
		realtime_frame_idx = index;
		paused_time = 0;
	}
	
}

int ATetaVi_Player::getFrameCount()
{
	return stream.total_frame_count;
}

int ATetaVi_Player::getCurrentFrameIndex()
{
	return curr_frame_idx;
}




// Called when the game starts or when spawned
void ATetaVi_Player::BeginPlay()
{
	
	Super::BeginPlay();
	//starting_frame_in_sec = (float)starting_frame / stream.GetFps();
	capture_fps = -1;
	starting_frame_capture = 0;
#if WITH_EDITOR
	if(IMovieSceneCaptureModule* Module = FModuleManager::GetModulePtr<IMovieSceneCaptureModule>( "MovieSceneCapture" ))
	{
		if(Module->GetFirstActiveMovieSceneCapture()!=nullptr)
		{
			
			capture_fps = Module->GetFirstActiveMovieSceneCapture()->GetSettings().GetFrameRate().Numerator;
			starting_frame_capture = Module->GetFirstActiveMovieSceneCapture()->GetFrameNumberOffset();
			
			UAutomatedLevelSequenceCapture* MovieSceneCapture = Cast<UAutomatedLevelSequenceCapture>(IMovieSceneCaptureModule::Get().GetFirstActiveMovieSceneCapture());
			ULevelSequence* LevelSequence = Cast<ULevelSequence>(MovieSceneCapture->LevelSequenceAsset.TryLoad());
			if (LevelSequence)
			{
				TRange<FFrameNumber> Range = LevelSequence->GetMovieScene()->GetPlaybackRange();

				FFrameNumber StartFrame = Range.GetLowerBoundValue();//UE::MovieScene::DiscreteInclusiveLower(Range);
				FFrameNumber EndFrame = Range.GetUpperBoundValue();//UE::MovieScene::DiscreteExclusiveUpper(Range);
			
				if(LevelSequence->GetMovieScene()->GetDisplayRate().Numerator > 0)
				{
				
					syquencer_factor = LevelSequence->GetMovieScene()->GetTickResolution().Numerator / LevelSequence->GetMovieScene()->GetDisplayRate().Numerator;
					if(syquencer_factor > 0)
					{
						starting_frame_capture = StartFrame.Value/syquencer_factor;
						starting_frame = starting_frame_capture;
					}
				}
			
			}
		}
	}
#endif
		if(play_on_awake)
		{
			
				OpenStream();
			
			
			
		}
			
		realtime_frame_idx = starting_frame;
}


void ATetaVi_Player::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	
	
}

// Called every frame
void ATetaVi_Player::Tick(float DeltaTime){
	
	Super::Tick(DeltaTime);
	if(stop)
		return;
	if(!first_frame_loaded && tetPath.FilePath != "" && !stream.getFirstFrame())
	{
		OpenStreamPreview(true);
		first_frame_loaded = true;
	}
	
	if(!stream.is_url_stream && sequencer_mode)
	{
		if(sequencer_frame_from > 0)
		{
			sequencer_frame_from--;
			return;
		}
		update_frame(true, starting_frame_in_section + capture_frame_idx);
		capture_frame_idx++;
		return;
	}
	
	if(first_frame_loaded && !stream.has_audio &&!paused)
	{
		FrameChange(realtime_frame_idx);
		realtime_frame_idx++;
	}
	
	if(first_frame_loaded && !wrote_audio )
	{
		if (audio_component && stream.has_audio)
		{
			audio_component->OnAudioPlaybackPercent.AddUniqueDynamic(this, &ATetaVi_Player::onAudioPercent);
			audio_component->OnAudioFinished.AddUniqueDynamic(this, &ATetaVi_Player::OnAudioFinished);
			
				if(!stream.is_url_stream)
				{
					audio_component->Play(starting_frame_in_sec);
				}else
				{
					audio_component->Play();
				}
				audio_component->SetPaused(paused);	
			
				
		}
		wrote_audio = true;
	}
	if(stream.is_url_stream)
	{
		if(stream_do_work_timer >60)
		{
			stream_do_work_timer = 0;
			stream.DoWork();
		}
		stream_do_work_timer++;
	}

	if(!first_frame_loaded)
	{
		first_frame_loaded = stream.getFirstFrame();
		if(first_frame_loaded)
		{
			PrimaryActorTick.TickInterval = 1.0/fps;
			OnStreamReady.Broadcast();
			////brodcast
		}
	}
}


void ATetaVi_Player::CreateMesh(void* frame) {

	//faces
	int faceCount = Decoder.frame_face_count(frame);
	
	//verices
	int vertexCount = Decoder.frame_get_vertex_count(frame);
	vertices = TArray<FVector3f>(Decoder.frame_get_vertex_xyz(frame), vertexCount);
	//uvs
	uvs = TArray<FVector2f>(Decoder.frame_get_uv_data(frame), vertexCount);
	
	normals = TArray<FVector3f>(Decoder.frame_get_vertex_normals(frame), vertexCount);

	int gop_num = Decoder.frame_gop_number(frame);
	CreateTexture(frame);
	if(!gop_boost || curr_gop_num != gop_num || triangles.Num() != (faceCount*3))
	{
		
		triangles = TArray<int32>(Decoder.frame_face_indices(frame), faceCount * 3);
		for (int i = 0; i < triangles.Num(); i++)
			if (i % 3 == 0)
				triangles.Swap(i, i + 1);
		
	}

	if(CreateNormalMapTexture(frame))
	{
		
		TArray<FVector3f> tangents_vector(Decoder.frame_get_vertex_tangents(frame), vertexCount);
		TArray<FTetaViProcMeshTangent> ts;
		for(int i = 0; i < tangents_vector.Num();i++)
		{
			
			if(tangents_vector[i][0] == 0 && tangents_vector[i][1] == 0 && tangents_vector[i][2] == 0 )
			{
				tangents_vector[i][1] = 1;
			}
			FTetaViProcMeshTangent t(((TArray<FVector3f>)tangents_vector)[i],false);
			ts.Push(t);
		}
		
		tangents = ts;
	}
	
	
	pm->CreateMeshSection(0, vertices, triangles, normals, uvs, vertexColors, tangents, false);
	curr_gop_num = gop_num;
	

}



FString ExtractFile(FString tetPath)
{
	FString SourceFilename = FPaths::ProjectContentDir() + FPaths::GetCleanFilename(tetPath);
	

	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(SourceFilename));
	
	
#if PLATFORM_ANDROID
	
	extern FString GInternalFilePath;
	FString DestDirectory = GInternalFilePath;
	FString DestFilename = DestDirectory +"/"+ FPaths::GetCleanFilename(*tetPath);
	// check if file already extracted
	if (IFileManager::Get().FileExists(*DestFilename))
	{
		return DestFilename;
	}
	// create directory if necessary
	mkdir(TCHAR_TO_UTF8(*DestDirectory ), 0777);
 
	// copy it to internal storage
	TArray<uint8> MemFile;
	if (FFileHelper::LoadFileToArray(MemFile, *SourceFilename, 0))
	{
		FFileHelper::SaveArrayToFile(MemFile, *DestFilename);
		return DestFilename;
	}
	// failed!
	return FString("");
#else
	if (IFileManager::Get().FileExists(*tetPath))
	{
		return tetPath;
	}else
	{
		return SourceFilename;
	}
#endif
}

bool ATetaVi_Player::CreateNormalMapTexture(void* frame)
{
	void * normal_map_ptr = nullptr;
	int size = 0;
	int normal_map_width = 0; // default
	int normal_map_height = 0;
	normal_map_ptr = Decoder.frame_get_normal_map(frame,size,normal_map_width,normal_map_height);
	
	//UE_LOG(LogTemp, Error, TEXT("normal_map %d  %d %d"),normal_map_width,normal_map_height,size);
	if (!normal_map_ptr || normal_map_width <= 0 || normal_map_height<= 0)
	{
		if(normalMap)
		{
			normalMap->RemoveFromRoot();
			normalMap->ConditionalBeginDestroy();
		}
		normalMap = nullptr;
		DynamicMaterialYUV->SetTextureParameterValue(TEXT("normal_map"), normalMap);
		DynamicMaterialYUV->SetScalarParameterValue(TEXT("Is_Normal_Map"),  0);
		return false;
	}
	BindNormalMap(normal_map_width,normal_map_height);
	uint8* pixels = (uint8*)normal_map_ptr;
	
	if (normalMap->GetPlatformData()) {
		FTexture2DMipMap& MipNM = normalMap->GetPlatformData()->Mips[0];
		MipNM.BulkData.Lock(LOCK_READ_WRITE);
		
		TextureData = (uint8*)MipNM.BulkData.Realloc(normal_map_width * normal_map_height);
		if (TextureData) {
			FMemory::Memcpy(TextureData, pixels, (normal_map_width * normal_map_height));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("MipNM.BulkData ERROR"));
		}

		MipNM.BulkData.Unlock();

		normalMap->UpdateResource();
		DynamicMaterialYUV->SetTextureParameterValue(TEXT("normal_map"), normalMap);
		DynamicMaterialYUV->SetScalarParameterValue(TEXT("Is_Normal_Map"),  1);
		return true;
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("normal_map texture GetPlatformData() is empty!"));
		return false;
	}
	
}

void ATetaVi_Player::BindNormalMap(int width, int height)
{
	if (normal_map_texture_binded || width ==0 || height == 0) return;
	normalMap = UTexture2D::CreateTransient(width, height, EPixelFormat::PF_BC5);
	DynamicMaterialYUV->SetTextureParameterValue(TEXT("normal_map"), normalMap);
	
	normalMap->CompressionSettings = TextureCompressionSettings::TC_Normalmap;
#if WITH_EDITOR
	normalMap->MipGenSettings = TextureMipGenSettings::TMGS_LeaveExistingMips;
#endif
	normalMap->SRGB = false;
	normalMap->UpdateResource();
	normalMap->AddToRoot();
	normalMap->SetPlatformData(new FTexturePlatformData());
	normalMap->GetPlatformData()->SizeX = width;
	normalMap->GetPlatformData()->SizeY = height;
	normalMap->GetPlatformData()->PixelFormat = EPixelFormat::PF_BC5;
	FTexture2DMipMap* MipNM = new FTexture2DMipMap();
	MipNM->SizeX = width;
	MipNM->SizeY = height;
	normalMap->GetPlatformData()->Mips.Add(MipNM);
	normal_map_texture_binded = true;
}


void ATetaVi_Player::BindTextures(int widthY, int heightY, int widthUV, int heightUV)
{
	if (textures_binded) return;
	if (!Material) return;
	//UE_LOG(LogTemp, Warning, TEXT("widthY %d heightY %d"),widthY,heightY);
	texUV = UTexture2D::CreateTransient(widthUV, heightUV, EPixelFormat::PF_R8G8);
	texY = UTexture2D::CreateTransient(widthY, heightY, EPixelFormat::PF_G8);
	
	DynamicMaterialYUV = UMaterialInstanceDynamic::Create(Material, this, FName(TEXT("Base Material Dynamic")));
	
	//DynamicMaterialYUV = UMaterialInstanceDynamic::Create(MaterialYUV, NULL);
	pm->SetMaterial(0, DynamicMaterialYUV);
	DynamicMaterialYUV->SetTextureParameterValue(TEXT("texUV"), texUV);
	DynamicMaterialYUV->SetTextureParameterValue(TEXT("texY"), texY);
	
	if (texUV != nullptr && texY != nullptr)
	{
		
		texUV->CompressionSettings = TextureCompressionSettings::TC_Default;
		texY->CompressionSettings = TextureCompressionSettings::TC_Default;
#if WITH_EDITOR
		texUV->MipGenSettings = TextureMipGenSettings::TMGS_LeaveExistingMips;
		texY->MipGenSettings = TextureMipGenSettings::TMGS_LeaveExistingMips;
#endif
		
		texUV->SRGB = false;
		texUV->UpdateResource();
		texUV->AddToRoot();
		//texUV->bFlipGreenChannel = true;
		texUV->SetPlatformData(new FTexturePlatformData());
		texUV->GetPlatformData()->SizeX = widthUV;
		texUV->GetPlatformData()->SizeY = heightUV;
		//texUV->GetPlatformData()->NumSlices = 1;
		texUV->GetPlatformData()->PixelFormat = EPixelFormat::PF_R8G8;
		
		FTexture2DMipMap* MipUV = new FTexture2DMipMap();
		MipUV->SizeX = widthUV;
		MipUV->SizeY = heightUV;
		texUV->GetPlatformData()->Mips.Add(MipUV);
		
		
		texY->SRGB = false;
		texY->UpdateResource();
		texY->AddToRoot();
		//texY->bFlipGreenChannel = true;
		texY->SetPlatformData(new FTexturePlatformData());
		texY->GetPlatformData()->SizeX = widthY;
		texY->GetPlatformData()->SizeY = heightY;
		texY->GetPlatformData()->PixelFormat = EPixelFormat::PF_G8;
		FTexture2DMipMap* MipY = new FTexture2DMipMap();
		MipY->SizeX = widthY;
		MipY->SizeY = heightY;
		texY->GetPlatformData()->Mips.Add(MipY);
		DynamicMaterialYUV->SetScalarParameterValue(TEXT("Material_Segmentation"), stream.material_segmentation ? 1 : 0);
		textures_binded = true;
	}


}

void ATetaVi_Player::CreateTexture(void* frame)
{
	
	void* textureObj = Decoder.frame_get_texture_obj(frame);
	TextureInfo textureInfo = Decoder.texture_get_info(textureObj);
	int Y_width = stream.GetWidth();
	int UV_width = stream.GetWidth() / 2;
	int Y_height = stream.GetHeight();
	int UV_height = stream.GetHeight() / 2;
	
	BindTextures(Y_width, Y_height, UV_width, UV_height);
	uint8* pixels = (uint8*)textureInfo.pixels;
	if (!pixels) return;
	if (texUV == nullptr || texY == nullptr) {
		
		return;
	}
	if (texUV->GetPlatformData() && texY->GetPlatformData()) {

		FTexture2DMipMap& MipUV = texUV->GetPlatformData()->Mips[0];
		MipUV.BulkData.Lock(LOCK_READ_WRITE);

		TextureData = (uint8*)MipUV.BulkData.Realloc(UV_width * UV_height * 2);
		if (TextureData) {
			FMemory::Memcpy(TextureData, pixels + (Y_width * Y_height), (UV_width * UV_height * 2));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("MipUV.BulkData ERROR"));
		}

		MipUV.BulkData.Unlock();

		FTexture2DMipMap& MipY = texY->GetPlatformData()->Mips[0];
		MipY.BulkData.Lock(LOCK_READ_WRITE);

		TextureData = (uint8*)MipY.BulkData.Realloc(Y_width * Y_height);
		if (TextureData) {
			FMemory::Memcpy(TextureData, pixels, (Y_width * Y_height * 1));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("MipY.BulkData ERROR"));
		}

		MipY.BulkData.Unlock();

		texUV->UpdateResource();
		texY->UpdateResource();
		DynamicMaterialYUV = pm->CreateAndSetMaterialInstanceDynamic(0);
		DynamicMaterialYUV->SetTextureParameterValue(TEXT("texUV"), texUV);
		DynamicMaterialYUV->SetTextureParameterValue(TEXT("texY"), texY);
		pm->SetMaterial(0, DynamicMaterialYUV);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("UV texture GetPlatformData() is empty!"));
	}
}

bool ATetaVi_Player::OpenStreamPreview(bool force)
{
	
	if(tetPath.FilePath !="")
	{
		FString device_content_dir = ExtractFile(tetPath.FilePath);
		if (!FPaths::FileExists(*device_content_dir)) {
			FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(device_content_dir));
			return false;
		}
		const std::string tet_path = std::string(TCHAR_TO_UTF8(*device_content_dir));
		
		if (!force && tet_path == tet_path_saved)
		{
			return false;
		}
		
		textures_binded = false;
		normal_map_texture_binded = false;
		if (audio_component == nullptr)
		{
			audio_component = NewObject<UAudioComponent>(this);
			audio_component->SetupAttachment(RootComponent);
			audio_component->bAutoActivate = false;
		}
		audio_component->Stop();
		curr_gop_num = -1;
		
		if(!stream.OpenStream(device_content_dir,audio_component))
		{
			
			return false;
		}
		first_frame_loaded = false;
		//pm->ClearAllMeshSections();
		update_tet_to_build();
	
		update_frame(true, starting_frame);
		sound_wave = stream.sound_wave;
		starting_frame_in_sec = (float)starting_frame / stream.GetFps();
		realtime_frame_idx = starting_frame;
		capture_frame_idx = starting_frame ; // change to start track
#if WITH_EDITOR
		if(sequencer_frame_to <= 0 && sequencer_range_section)
		{
			sequencer_frame_from = sequencer_range_section->GetRange().GetLowerBoundValue().Value / syquencer_factor;
			sequencer_frame_to = sequencer_range_section->GetRange().GetUpperBoundValue().Value / syquencer_factor;
			if(starting_frame_in_section = sequencer_range_section->GetChannel().GetDefault().IsSet())
				starting_frame_in_section = sequencer_range_section->GetChannel().GetDefault().GetValue();
		}
#endif
		
		tet_path_saved = tet_path;
		fps = stream.GetFps();
		wrote_audio = false;
		SetFrameIndex(starting_frame);
		if (stream.has_audio) {
			Tags.AddUnique(FName("Audio"));
			Tags.Remove(FName("NoAudio"));
			
		
		}else
		{
			sound_wave = nullptr;
			Tags.AddUnique(FName("NoAudio"));
			Tags.Remove(FName("Audio"));
		}
		open_stream_time = 0;
	}
	return true;
}

bool ATetaVi_Player::OpenStream() {
	if(tetPath.FilePath ==""&& stream_url == "" )return false;
	stream.loop=loop;
	if(stream_url != "")
	{
		textures_binded = false;
		normal_map_texture_binded = false;
		if (audio_component == nullptr)
		{
			audio_component = NewObject<UAudioComponent>(this);
			audio_component->SetupAttachment(RootComponent);
			audio_component->bAutoActivate = false;
		}
		
		curr_gop_num = -1;
		open_stream_time = 0;
		pm->ClearAllMeshSections();
		stream.start_frame_url_stream = starting_frame;
		bool o = stream.OpenStream(stream_url,audio_component);
		fps=stream.GetFps();
		return o;
		
	}
	 return OpenStreamPreview();
	
}

bool ATetaVi_Player::update_frame(bool force,int frame_index) {
	void* frame;
	do {
		frame = stream.GetFrameObj(frame_index);
	} while (force && !frame);
	if (frame != nullptr) {
		CreateMesh(frame);
		curr_frame_idx = frame_index;
		return true;
	}
	return false;
}

bool ATetaVi_Player::play_tet_with_audio()
{
	if(!stream.getFirstFrame() || !wrote_audio) return false;
	// make sure we play audio component once
	if(start_delay < 0 ) return true;
	if(start_delay > 0 )
	{
		start_delay--;
		return false;
	}
	if(audio_component && !audio_component->IsPlaying())
		audio_component->Play();
	
	start_delay = -1;
	return true;
}

void ATetaVi_Player::OnConstruction(const FTransform& Transform)
{
    /*if(!first_frame_loaded)
    {
    	//pm->ClearAllMeshSections();
    	OpenStreamPreview();
    }*/
	OpenStreamPreview();
	if(!stream.Streamer_Decoder_Loaded)
	{
		stream = Tetavi_Streamer(Decoder);
		stream.Streamer_Decoder_Loaded = true;
	}


}

void ATetaVi_Player::StartPlay(int _start_frame)
{
	if(stream.has_audio)
	{
		play_tet_with_audio();
		
	}
}

void ATetaVi_Player::write_array_to_file(TArray<FString> arr,FString path)
{
#if WITH_EDITOR
	if (FPaths::ValidatePath(path) && FPaths::FileExists(path))
	{
		IFileManager& FileManager = IFileManager::Get();
		FileManager.Delete(*path);
	}
	FFileHelper::SaveStringArrayToFile(arr, *path);
#endif
	
}


void ATetaVi_Player::update_tet_to_build(bool to_delete )
{
#if WITH_EDITOR
	TArray<FString> lines;
	if(this && GetWorld()!=nullptr)
	{
		for (TActorIterator<ATetaVi_Player> It(GetWorld()); It; ++It)
		{
			if(to_delete && *It == this)
			{
				continue;
			}
			
			FString full_path = FPaths::ConvertRelativePathToFull((*It)->tetPath.FilePath);
			FString check_if_in_content = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()+"Content/"+FPaths::GetCleanFilename((*It)->tetPath.FilePath));
			if(full_path == check_if_in_content || !full_path.EndsWith(".tet") || !FPaths::FileExists(full_path))
			{
				continue;
			}
			lines.Push(full_path);
		}
		FString tet_to_include_in_build = FPaths::ConvertRelativePathToFull(FPaths::ProjectPluginsDir()) + TEXT("/TetaVi_Plugin/Resources/tet_to_include_in_build.txt");
		write_array_to_file(lines,tet_to_include_in_build);
	}
	
	
#endif
}

#if WITH_EDITOR

void ATetaVi_Player::PostEditChangeProperty(struct FPropertyChangedEvent& e)
{
	FName PropertyName = (e.Property != NULL) ? e.Property->GetFName() : NAME_None;
	Super::PostEditChangeProperty(e);
	
	if (PropertyName == GET_MEMBER_NAME_CHECKED(ATetaVi_Player, starting_frame)) {
		/* Because you are inside the class, you should see the value already changed */
		/*if(stream_url == "" && starting_frame > stream.frame_count)
		{
			starting_frame = stream.frame_count;
		}*/
		//UIntProperty* prop = static_cast<UIntProperty*>(e.Property);
		//update_frame(stream_url == "", starting_frame);
		starting_frame_in_sec = (float)starting_frame / stream.GetFps();
		
	}
	if (PropertyName.ToString() == "FilePath") {
		FString full_path = FPaths::ConvertRelativePathToFull(tetPath.FilePath);
		FString check_if_in_content = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()+"Content/"+FPaths::GetCleanFilename(tetPath.FilePath));
		if(full_path != check_if_in_content)
		{
			FString msg = "tet file: " + tetPath.FilePath +"\nwill be copied to content directory at build";
			FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(msg));
		}
		stream_url="";
		OpenStreamPreview(true);
		
		
		
	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(ATetaVi_Player, Material)) {
		textures_binded = false;
		normal_map_texture_binded = false;
		if(!Material) return;
		/*if(Material->GetName() == "TetaVi_Material_Lit_Inst")
		{
			FString msg = "Material Instance TetaVi_Material_Lit_Inst is automaticly generated every time the editor boots up\nplease use a copy of TetaVi_Material_Lit_Inst insted.";
			FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(msg));
		}*/
		if(stream_url=="" && tetPath.FilePath != "")
		{
			update_frame(true, curr_frame_idx);
		}
		OpenStreamPreview();
		

	}
	if (PropertyName == GET_MEMBER_NAME_CHECKED(ATetaVi_Player, stream_url)) {
		update_tet_to_build(true);
		if(stream_url == "") return;
		tetPath.FilePath = "";
		tet_path_saved = "";
		pm->ClearAllMeshSections();
		Tags.AddUnique(FName("NoAudio"));
		Tags.Remove(FName("Audio"));
		OpenStreamPreview();
		

	}
	

}
#endif

