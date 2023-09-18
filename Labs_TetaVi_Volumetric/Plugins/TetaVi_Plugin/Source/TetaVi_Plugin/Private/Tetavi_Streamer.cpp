// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetavi_Streamer.h"

//#include <ThirdParty/Crunch/include/crn_decomp.h>

#include "Misc/MessageDialog.h"


Tetavi_Streamer::Tetavi_Streamer()
{
}
Tetavi_Streamer::Tetavi_Streamer(FTetaVi_PluginModule _Decoder)
{
	Decoder = _Decoder;
}

Tetavi_Streamer::~Tetavi_Streamer()
{
	if(Chunks.Num()>0)
	{
		for (auto chucnk : Chunks)
		{
			chucnk.status = Deleting;
			chucnk.Release();
			
		}
	}
}

bool Tetavi_Streamer::getFirstFrame()
{
	if(is_stream_started)
	{
		UE_LOG(LogTemp, Warning, TEXT("is_stream_started true"));
	}else
	{
		UE_LOG(LogTemp, Warning, TEXT("is_stream_started false"));
	}
	
	return is_stream_started;
	
}
FString Tetavi_Streamer::LeadingZeroes(int32 number)
{
	char buffer[4];
	snprintf(buffer, sizeof(buffer), "%03d", number);
	return buffer;
}

bool Tetavi_Streamer::OpenStream(FString tet_path,UAudioComponent* _audio_component)
{
	
	Stop();
	audio_component = _audio_component;
	if(tet_path.EndsWith(".tet"))
	{
		is_stream_started = false;
		is_url_stream = false;
		stream_url = "";
		Tetavi_Chunk chunk(Decoder);
		
		chunk.path_tet = tet_path;
		chunk.status = Is_Opening;
		chunk.OpenStream();
		chunk.status = Opend;
		chunk.from = 0;
		chunk.to = chunk.frame_count;
		total_frame_count = chunk.frame_count;
		height = chunk.height;
		width = chunk.width;
		Chunks.Add(chunk);
		setupFirstStream();
		return true;
		
	}
	is_url_stream = true;
	if(!tet_path.EndsWith(".manifest"))
	{
		tet_path +=".manifest";
	}
	stream_url = tet_path;
	DownloadManifest(tet_path);
	return true;
	
}

void* Tetavi_Streamer::GetFrameObj(int frameIdx)
{
	if(Chunks.Num() == 0)
	{
		return nullptr;
	}
	
	frameIdx%= Chunks.Last().to;
	for (int i =0 ; i < Chunks.Num() ;i++)
	{
		//UE_LOG(LogTemp, Warning, TEXT("frameIdx %d Chunks[i].from  %d Chunks[i].to %d value %d"),frameIdx , Chunks[i].from,Chunks[i].to,Chunks[i].status.GetValue());
		if(frameIdx >= Chunks[i].from  && frameIdx < Chunks[i].to )
		{
			curr_from = i;
			if(Chunks[i].status >= Opend && Chunks[i].status < Finished_Playing)
			{
				Chunks[i].status = Playing;
				//UE_LOG(LogTemp, Warning, TEXT("frameIdx - Chunks[i].from  %d"),frameIdx - Chunks[i].from);
				return Chunks[i].GetFrameObj(frameIdx - Chunks[i].from);
				
			}
			return nullptr;
		}
	}
	return nullptr;
}

void Tetavi_Streamer::Stop()
{
	
	if(Chunks.Num()>0)
	{
		for (auto chucnk : Chunks)
		{
			chucnk.status = Deleting;
			chucnk.Release();
			
		}
	}
	Chunks.Empty();
}

void Tetavi_Streamer::DoChunckWork(int chunck_num)
{
	
	if(chunck_num < Chunks.Num())
	{
		switch (Chunks[chunck_num].status)
		{
		case Is_Not_Required:
			break;
		case Is_Required:
			Chunks[chunck_num].status = Not_Downloaded;
			Async(EAsyncExecution::Thread, [this,chunck_num]() {
				if(!this)return;
					if(chunck_num < Chunks.Num())
					{
						Chunks[chunck_num].DownloadTet();
					}
				});
			
			break;
		case Not_Downloaded:
			break;
		case Is_Downloading:
			break;
		case Downloaded:
			break;
		case Not_Opened:
			Chunks[chunck_num].status = Is_Opening;
			Async(EAsyncExecution::Thread, [this,chunck_num]() {
					if(!this)return;
					if(chunck_num < Chunks.Num())
					{
						this->Chunks[chunck_num].OpenStream();
					}
				});
			break;
		case Is_Opening:
			if(Chunks[chunck_num].stream_frames_decoded_ahead())
			{
				
				Chunks[chunck_num].status = Opend;
			}
			break;
		case Opend:
			break;
		case Playing:
			break;
		case Finished_Playing:
			
			if(chunck_num < Chunks.Num())
			{
				Chunks[chunck_num].status = Deleting;
				Async(EAsyncExecution::Thread, [this,chunck_num]() {
					if(!this)return;
					this->Chunks[chunck_num].Release();
					
				});
        			
			}
			break;
		case Deleting:
			break;
		case Deleted:
			if(loop)
				Chunks[chunck_num].status = Loop;
			break;
		case Loop:
			break;
		}
	}
}

void Tetavi_Streamer::setupFirstStream()
{
	has_audio = Chunks[start_chunk_url_stream].has_audio;
	if(audio_component && has_audio)
	{
		sound_wave = Chunks[start_chunk_url_stream].sound_wave;
		audio_component->SetSound(Chunks[start_chunk_url_stream].sound_wave);
		//audio_component->OnAudioFinishedNative.AddRaw(this, &Tetavi_Streamer::OnAudioFinished);
	}
	frame_count = Chunks[start_chunk_url_stream].frame_count;
	material_segmentation = Chunks[start_chunk_url_stream].material_segmentation;
	
	is_stream_started =true;
}

void Tetavi_Streamer::OnAudioFinished(UAudioComponent* AC)
{
	//UE_LOG(LogTemp, Warning, TEXT("OnAudioFinished"));
	//audio_component->Play();
}

void Tetavi_Streamer::DoWork()
{
	if(is_url_stream && manifest_path=="" || Chunks.Num() <= 0) return;
	
	
	for (int i =0 ; i < Chunks.Num() ;i++)
	{
		//UE_LOG(LogTemp, Warning, TEXT("%d %d"),i,Chunks[i].status.GetValue());
		if(loop && i < FMath::Max(curr_from + chunks_download_ahead - Chunks.Num(),0))
		{
			
			if( Chunks[i].status == Loop)
			{
				Chunks[i].status = Is_Required;
			}
			if(i == 0 && curr_from == Chunks.Num()-1 && Chunks[i].status == Downloaded)
			{
				Chunks[i].status = Not_Opened;
			}
		}
		else
		{
			
			if(i <= curr_from+1 && Chunks[i].status == Downloaded)
			{
				Chunks[i].status = Not_Opened;
			}

			if(i == curr_from+1 && Chunks[i].status == Downloaded)
			{
				Chunks[i].status = Not_Opened;
			}
			if((Chunks[i].status == Is_Not_Required || Chunks[i].status == Loop) && i <= curr_from + chunks_download_ahead)
			{
				
				Chunks[i].status = Is_Required;
			}
			if(i < curr_from && Chunks[i].status < Finished_Playing)
			{
				Chunks[i].status = Finished_Playing;
			}
		}
		
		
		
		DoChunckWork(i);
	}
	
	if(!is_stream_started && Chunks[start_chunk_url_stream].status == Opend)
    	{
			
    	    if(Chunks.Num()  > start_chunk_url_stream + 1 )
    	    {
    	    	if(Chunks[start_chunk_url_stream + 1].status == Opend)
    	    	{
    	    		if(downloadedAhead())
    	    		{
    	    			setupFirstStream();
    	    		}
    	    	}
    	    }
			else
    	    {
    	    	setupFirstStream();
    	    }
			
    	}
	if(change_sound_requierd_to >= 0)
		changeSoundSource(change_sound_requierd_to);
}

bool Tetavi_Streamer::downloadedAhead()
{
	int lim = FMath::Min(Chunks.Num()-1,start_chunk_url_stream + chunks_download_ahead);
	// 2 is the number of decoded and opened chunks 
	if(lim  > 2)
	{
		for(int i = start_chunk_url_stream + 2; i <= lim; i++)
		{
			if(Chunks[i].status != Downloaded)
			{
				return false;
			}
		}
		return true;
	}
	return true;
	
}


void Tetavi_Streamer::changeSoundSource(int i)
{
	if(i >= Chunks.Num())
	{
		Chunks[i-1].status = Finished_Playing;
		return;
	}
	if(audio_component)
	{
		
		if(Chunks[i].status != Opend)
		{
			if(Chunks[i].status == Downloaded) Chunks[i].status = Not_Opened;
			//UE_LOG(LogTemp, Warning, TEXT("change_sound_requierd_to status %d %d"),i,Chunks[i].status.GetValue());
			change_sound_requierd_to = i;
			return;
		}
		
		
		audio_component->SetSound(Chunks[i].sound_wave);
		audio_component->Play(0);
		frame_count = Chunks[i].frame_count;
		change_sound_requierd_to = -1;
		if(i>0)
			Chunks[i-1].status = Finished_Playing;
		if(i==0)
		{
			// when we loop make sure last chunks are deleted
			for(int j = chunks_download_ahead; j < Chunks.Num() ; j++)
			{
				Chunks[j].status = Finished_Playing;
			}
		}
		
	}
}

void* Tetavi_Streamer::GetFrameObjAudio(int frameIdx)
{
	//UE_LOG(LogTemp, Warning, TEXT("Start GetFrameObjAudio %d  %d"),frameIdx,curr_from);
    if(curr_from >= Chunks.Num()) return nullptr;
	//UE_LOG(LogTemp, Warning, TEXT("GetFrameObjAudio 1"));
	if(frameIdx >= Chunks[curr_from].frame_count) return nullptr;
	//UE_LOG(LogTemp, Warning, TEXT("GetFrameObjAudio 2"));
	void* frame = nullptr;
	if(curr_from < Chunks.Num())
	{
		if(frameIdx == 0 && curr_from > 0) return nullptr;
		frame =  Chunks[curr_from].GetFrameObj(frameIdx);
		if(is_url_stream && frameIdx >= Chunks[curr_from].frame_count - 1)
        	{
				if(change_sound_requierd_to == -1) // if a sound is not required
					curr_from = (curr_from+1)%(Chunks.Num()-1);
					
        			changeSoundSource(curr_from);
			
        	}
	}else
	{
		UE_LOG(LogTemp, Warning, TEXT("frame out of range %d  %d"),frameIdx,curr_from);
	}
	
	
			
	return frame;
}

void Tetavi_Streamer::ParseMainfest(FString url)
{
	FString uPath, uFilename, uExtension;
	if(url == "") return;
	FPaths::Split(url, uPath, uFilename, uExtension);
	
	FString file_path = streaming_dir + uFilename+"."+uExtension;
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (!PlatformFile.FileExists(*file_path))
	{
		UE_LOG(LogTemp, Warning, TEXT("manifest doesnt exists: %s"),*file_path);
		return;
	}
	FString JSONFile =IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*file_path); 
	FString JsonRaw;
	FFileHelper::LoadFileToString(JsonRaw,*JSONFile);
    //UE_LOG(LogTemp, Warning, TEXT("full path %s"),*JSONFile);
    TSharedPtr<FJsonObject> JsonParsed;
    TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonRaw);
    if (FJsonSerializer::Deserialize(JsonReader, JsonParsed))
    {
    	int Fps = JsonParsed->GetNumberField("fps");
    	int FrameCount = JsonParsed->GetNumberField("FrameCount");
    	int Width = JsonParsed->GetNumberField("Width");
    	int Height = JsonParsed->GetNumberField("Height");
    	if(Fps == 0 ||FrameCount == 0 ||Width == 0 ||Height == 0)
    	{
    		UE_LOG(LogTemp, Warning, TEXT("manifest missing fields: %s"),*file_path);
    		return;
    	}
    	fps = Fps;
    	height =  Height;
    	width = Width;
    	const TArray<TSharedPtr<FJsonValue>>* Manifest_Chuncks;
    	 JsonParsed->TryGetArrayField(TEXT("Chunks"),Manifest_Chuncks);
        for (int i = 0; i < Manifest_Chuncks->Num();i +=2)
        {
        	TSharedPtr<FJsonValue> from_val = (*Manifest_Chuncks)[i];
        	TSharedPtr<FJsonValue> tet_file_val = (*Manifest_Chuncks)[i+1];
        	int from = FCString::Atoi(*from_val.Get()->AsString());
        	FString tet_file = tet_file_val.Get()->AsString();
        	Tetavi_Chunk chunk(Decoder);
        	chunk.from = from;
        	
        	if(i > 0)
        	{
        		Chunks.Last().to = from;
        		if(start_frame_url_stream > Chunks.Last().to)
        		{
        			
        			start_chunk_url_stream = (i-2)/2;
        			//UE_LOG(LogTemp, Warning, TEXT("start_chunk_url_stream %d"),start_chunk_url_stream);
        		}
        	}
        	
        	
#if PLATFORM_ANDROID
        	FString proj_name(FApp::GetProjectName());
        	streaming_dir = "/sdcard/UE4Game/"+proj_name+"/"+proj_name+"/Content/";
        	streaming_dir = FPaths::ProjectPersistentDownloadDir();
#endif
        	chunk.path_tet =IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*( streaming_dir + tet_file));
        	chunk.url = uPath + "/"+tet_file;
        	Chunks.Add(chunk);
        	
        }
    	for (int i =0 ; i < start_chunk_url_stream ;i++)
    	{
    		Chunks[i].status = Deleted;
    	}
    	curr_from = start_chunk_url_stream;
    	Chunks.Last().to = FrameCount;
    	total_frame_count = FrameCount;
    	if(Chunks.Num() > 1)
    	{
    		Chunks[0].status = Is_Downloading;
    		Chunks[0].DownloadTet();
    		Chunks[1].status = Is_Downloading;
    		Chunks[1].DownloadTet();
    	}
    	
    	
    }else{
    UE_LOG(LogTemp, Warning, TEXT("cant read manifest as json %s"),*file_path);
    }
}

void Tetavi_Streamer::DownloadManifest(FString url)
{
	const TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest{FHttpModule::Get().CreateRequest()};
	HttpRequest->OnProcessRequestComplete().BindRaw(this, &Tetavi_Streamer::OnResponseReceived);
	HttpRequest->SetURL(url);
	HttpRequest->SetVerb("GET");
	HttpRequest->SetHeader(TEXT("Content-Type"), "application/octet-stream");
	HttpRequest->SetTimeout(10000);
	HttpRequest->ProcessRequest();
	HttpDownloadRequest = &HttpRequest.Get();
}

void Tetavi_Streamer::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr _Response, bool bWasSuccessful)
{
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
				UE_LOG(LogTemp, Error, TEXT("Download failed"));
			}
			return;
		}

		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		FString uPath, uFilename, uExtension;
		FPaths::Split(Request.Get()->GetURL(), uPath, uFilename, uExtension);
		if(uExtension != "manifest")
		{
			UE_LOG(LogTemp, Error, TEXT("URL doesnt have manifest"), *Request.Get()->GetURL());
		}
		manifest_path = streaming_dir+uFilename+"."+uExtension;
		// Create save directory if not existent
		{
			FString Path, Filename, Extension;
			FPaths::Split(manifest_path, Path, Filename, Extension);
		
			//UE_LOG(LogTemp, Error, TEXT("path = %s"), *this->path_tet);
			if (!PlatformFile.DirectoryExists(*Path))
			{
				if (!PlatformFile.CreateDirectoryTree(*Path))
				{
					//UE_LOG(LogTemp, Error, TEXT("Unable to create a directory '%s' to save the downloaded file"), *Path);
					return;
				}
			}
		}

		// Delete the file if it already exists
		if (!manifest_path.IsEmpty() && FPaths::FileExists(*manifest_path))
		{
			IFileManager& FileManager = IFileManager::Get();
			FileManager.Delete(*manifest_path);
		}

		// Open / Create the file
		IFileHandle* FileHandle = PlatformFile.OpenWrite(*manifest_path);
		if (FileHandle)
		{
			// Write the file
			FileHandle->Write(Response->GetContent().GetData(), Response->GetContentLength());
			//UE_LOG(LogTemp, Error, TEXT("url '%s'"), *Response->GetURL());
			
			// Close the file
			delete FileHandle;

			Response.Reset();

			ParseMainfest(stream_url);

		}
		else
		{
			//(LogTemp, Error, TEXT("Something went wrong while saving the file '%s'"), *manifest_path);
		}
		
	});
	
}
