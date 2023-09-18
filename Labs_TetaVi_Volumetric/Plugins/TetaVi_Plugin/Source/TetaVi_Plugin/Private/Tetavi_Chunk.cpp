// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetavi_Chunk.h"
#if PLATFORM_ANDROID
#include "AndroidRuntimeSettings.h"
#endif
#include "SampleBuffer.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Misc/MessageDialog.h"
#include "Sound/SoundWaveProcedural.h"

Tetavi_Chunk::Tetavi_Chunk(FTetaVi_PluginModule _Decoder)
{
	Decoder = _Decoder;
}

Tetavi_Chunk::~Tetavi_Chunk()
{
	
}

bool Tetavi_Chunk::OpenStream() {
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("Tetavi_Chunk::OpenStream()" + path_tet));
	if(status >= Opend ) return true;
	if(status < Not_Opened ) return false;
	if (!FPaths::FileExists(path_tet)) {
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("file doesnt exists " + path_tet));
		return false;
	}
	status = Is_Opening;
				
		
	stream = Decoder.create_stream_decoder_obj_YUV();

	Decoder.stream_set_calculate_normals(stream);
	Decoder.stream_set_calculate_tangents(stream);
	Decoder.stream_init_model(stream, TCHAR_TO_ANSI(*path_tet));

	stream_id = Decoder.stream_get_id(stream);
	TextureInfo textureInfo = Decoder.stream_get_video_width_height(stream);
	width = textureInfo.width;
	height = textureInfo.height;
	mcInfo = Decoder.get_mat_class_info(stream);
	fps = Decoder.stream_get_fps(stream);
	material_segmentation = mcInfo ? strlen(mcInfo) > 0 : false;
	frame_count = Decoder.stream_get_frame_count(stream);
	has_audio = Decoder.stream_has_audio(stream);
	
	if(has_audio)
	{
		SaveAudio();
	}
	
	if(stream != nullptr)
	{
		GetFrameObj(0);
	}else
	{
		status = Not_Opened;
	}
	
	return stream != nullptr;
}

void Tetavi_Chunk::SaveAudio() {
#if WITH_EDITOR
	FString sound_wave_file_name =  FPaths::GetBaseFilename(path_tet); //UKismetSystemLibrary::GetObjectName(this);// FPaths::GetCleanFilename(tetPath.FilePath);
	sound_wave_file_name = sound_wave_file_name.Replace(TEXT("."), TEXT(""));
	FString sound_wave_file_path = FPaths::ProjectPluginsDir() + "TetaVi_Plugin/Content/Audio/";
	FString asset_path = sound_wave_file_path + sound_wave_file_name + ".uasset";
	FString reference_syntax = "SoundWave'/TetaVi_Plugin/Audio/" + sound_wave_file_name + "." + sound_wave_file_name + "'";
	if (url=="" && FPaths::FileExists(asset_path)) {
 
 		
		sound_wave = (USoundWave*)StaticLoadObject(USoundWave::StaticClass(), NULL, *reference_syntax, NULL, LOAD_None, NULL);
		sound_done_write = true;
		return;
	}
#endif
	FString com_name = "";
#if PLATFORM_ANDROID
	com_name = GetDefault<UAndroidRuntimeSettings>()->PackageName;
	
#endif
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("com_name " + com_name));
		void* audio = Decoder.create_audio_obj(stream, TCHAR_TO_ANSI(*com_name));
	
		info = Decoder.audio_player_get_info(audio);
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("create_audio_obj "+ FString::FromInt(info.bytes_per_second)));
		// take the exact samples needed to play and not the whole audio provided
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("audio_player_get_info " + FString::FromInt(info.samples_number)));	
		int samples_of_audio =  (frame_count/fps) * info.bytes_per_second * info.chanel_num;
		if(frame_count < fps)
		{
			samples_of_audio+=1;
		}
		
		for (int i = 0; i < info.samples_number; i++)
		{
			int count = Decoder.audio_player_get_audio_buffer_byte_size(audio, i);
			uint8* data;
			data = (uint8*)malloc(count * 8);
			
				
			if(Decoder.audio_player_copy_frame(audio, i, (void**)&data))
			{
				audio_raw.Append(TArray<uint8>(data, count));
			}
			
			free(data);
		}
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("samples_number " + FString::FromInt(samples_of_audio)));
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("audio_raw " + FString::FromInt(audio_raw.Num())));
	int numSamples = (samples_of_audio < audio_raw.Num()/info.chanel_num) ? samples_of_audio : audio_raw.Num()/info.chanel_num;
		Audio::TSampleBuffer<int16> SampleBuffer = Audio::TSampleBuffer<int16>((int16*)audio_raw.GetData(), numSamples, info.chanel_num, info.bytes_per_second);
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("SampleBuffer "));
	Decoder.audio_player_release(audio);
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("audio_player_release "));
		/*if (sound_wave != nullptr && sound_wave->RawPCMData != nullptr)
		{
			FMemory::Free(sound_wave->RawPCMData);
		}*/
#if WITH_EDITOR
		if(url == "")
		{
			FString file;
			file = "/TetaVi_Plugin/Audio/" + sound_wave_file_name;
			FText InvalidPathReason;
			bool const bValidPackageName = FPackageName::IsValidLongPackageName(file, false, &InvalidPathReason);
			// Set up Package.
			UPackage* CurrentPackage = CreatePackage(*file);
		 
			// Create a new USoundWave.
			sound_wave = NewObject<USoundWave>(CurrentPackage, *sound_wave_file_name, RF_Public | RF_Standalone);
			FAssetRegistryModule::AssetCreated(sound_wave);
			CurrentPackage->FullyLoad();
			CurrentPackage->SetDirtyFlag(true);
		}else
		{
			sound_wave = NewObject<USoundWave>(GetTransientPackage(),"");
		}
		
#else
		sound_wave = NewObject<USoundWave>(GetTransientPackage(),"");
#endif
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("GetTransientPackage "));
		//sound_wave->AddToRoot();
		sound_wave->SetSampleRate(SampleBuffer.GetSampleRate());
		sound_wave->NumChannels = SampleBuffer.GetNumChannels();
		sound_wave->RawPCMDataSize = SampleBuffer.GetNumSamples() * sizeof(int16);
		sound_wave->Duration = (float)SampleBuffer.GetNumFrames() / SampleBuffer.GetSampleRate();
	//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("Malloc "));
		

		sound_wave->RawPCMData = (uint8*)FMemory::Malloc(sound_wave->RawPCMDataSize);
		FMemory::Memcpy(sound_wave->RawPCMData, SampleBuffer.GetData(), sound_wave->RawPCMDataSize);
		TArray<uint8> SerializedWavData;
		SerializedWavData.Reset();
		SerializeWaveFile(SerializedWavData, (const uint8*)SampleBuffer.GetData(), SampleBuffer.GetNumSamples() * sizeof(int16), SampleBuffer.GetNumChannels(), SampleBuffer.GetSampleRate());

		sound_wave->RawData.Lock(LOCK_READ_WRITE);
		void* LockedData = sound_wave->RawData.Realloc(SerializedWavData.Num());
		FMemory::Memcpy(LockedData, SerializedWavData.GetData(), SerializedWavData.Num());
		sound_wave->RawData.Unlock();
		sound_wave->bLooping = false;
		sound_wave->AddToRoot();
	
		sound_done_write = true;
		//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("sound_done_write "));
#if WITH_EDITOR
		
		USoundWave* SavedSoundWave = sound_wave;
		
		FAssetRegistryModule::AssetCreated(SavedSoundWave);
		SavedSoundWave->MarkPackageDirty();
				
#endif

	}


bool Tetavi_Chunk::stream_frames_decoded_ahead()
{
	int count = Decoder.stream_frames_decoded_ahead(stream);
	
	return count >= FMath::Min(50,frame_count);
}


void* Tetavi_Chunk::GetFrameObj(int frameIdx)
{
	return  Decoder.stream_get_frame_obj(stream, frameIdx);
}

void Tetavi_Chunk::Release()
{
	if(status != Deleting) return;
	if (stream)
	{
		Decoder.stream_release(stream);
		stream = nullptr;
	}
	if (sound_wave != nullptr && sound_done_write )
	{
		// gc 
		sound_wave = nullptr;
	}
	if(url != "")
	{
		
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		PlatformFile.DeleteFile(*path_tet);
	}
	status = Deleted;
}

void Tetavi_Chunk::DownloadTet()
{
	status = Is_Downloading;
	const TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest{FHttpModule::Get().CreateRequest()};
	HttpRequest->OnProcessRequestComplete().BindRaw(this, &Tetavi_Chunk::OnResponseReceived);
	HttpRequest->SetURL(url);
	HttpRequest->SetVerb("GET");
	HttpRequest->SetHeader(TEXT("Content-Type"), "application/octet-stream");
	HttpRequest->SetTimeout(10);
	HttpRequest->ProcessRequest();
	HttpDownloadRequest = &HttpRequest.Get();
}

void Tetavi_Chunk::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr _Response, bool bWasSuccessful)
{
	if(this->path_tet.IsEmpty()) return;

	HttpDownloadRequest = nullptr;
	AsyncTask(ENamedThreads::BackgroundThreadPriority, [this,Request,_Response,bWasSuccessful]() {
		FHttpResponsePtr Response = _Response;
		if (!Response.IsValid() /*|| !EHttpResponseCodes::IsOk(Response->GetResponseCode()) */|| !bWasSuccessful)
		{
			//UE_LOG(LogTemp, Error, TEXT("An error occurred while downloading the file to storage"));

			if (!Response.IsValid())
			{
				//UE_LOG(LogTemp, Error, TEXT("Response is not valid"));
			}

			/*if (!EHttpResponseCodes::IsOk(Response->GetResponseCode()))
			{
				UE_LOG(LogTemp, Error, TEXT("Status code is not Ok"));
			}*/

			if (!bWasSuccessful)
			{
				//UE_LOG(LogTemp, Error, TEXT("Download failed"));
			}
			status = Is_Required;
			return;
		}

		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

		// Create save directory if not existent
		{
			FString Path, Filename, Extension;
			FPaths::Split(this->path_tet, Path, Filename, Extension);
		
			//UE_LOG(LogTemp, Error, TEXT("path = %s"), *this->path_tet);
			if (!PlatformFile.DirectoryExists(*Path))
			{
				if (!PlatformFile.CreateDirectoryTree(*Path))
				{
					//UE_LOG(LogTemp, Error, TEXT("Unable to create a directory '%s' to save the downloaded file"), *Path);
					status = Is_Required;
					return;
				}
			}
		}

		// Delete the file if it already exists
		if (!this->path_tet.IsEmpty() && FPaths::FileExists(*this->path_tet))
		{
			status = Downloaded;
			return;
			IFileManager& FileManager = IFileManager::Get();
			FileManager.Delete(*path_tet);
		}
		//UE_LOG(LogTemp, Warning, TEXT("path beeing writen %s"), *this->path_tet);
		// Open / Create the file
		IFileHandle* FileHandle = PlatformFile.OpenWrite(*this->path_tet);
		if (FileHandle)
		{
			// Write the file
			FileHandle->Write(Response->GetContent().GetData(), Response->GetContentLength());
			//UE_LOG(LogTemp, Error, TEXT("url '%s'"), *Response->GetURL());
			
			// Close the file
			delete FileHandle;

			Response.Reset();
			status = Downloaded;

		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Something went wrong while saving the file '%s'"), *this->path_tet);
		}
		
	});
	
}