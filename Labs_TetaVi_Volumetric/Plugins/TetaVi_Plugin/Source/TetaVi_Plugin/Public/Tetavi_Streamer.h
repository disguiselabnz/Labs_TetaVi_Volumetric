// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Components/AudioComponent.h"

#include "Tetavi_Chunk.h"
#include "CoreMinimal.h"

/**
 * 
 */
class TETAVI_PLUGIN_API Tetavi_Streamer
{

public:
	Tetavi_Streamer(FTetaVi_PluginModule _Decoder);
	Tetavi_Streamer();
	~Tetavi_Streamer();
	bool getFirstFrame();
	FString LeadingZeroes(int32 number);
	bool OpenStream(FString tet_path,UAudioComponent* _audio_component);
	void* GetFrameObjEditor(int frameIdx, FString path_tet);
	void* GetFrameObj(int frameIdx);
	void Stop();
	void DoChunckWork(int chunck);
	void setupFirstStream();
	void DoWork();
	bool downloadedAhead();
	void OnAudioFinished(UAudioComponent* AC);
	void changeSoundSource(int i);
	void* GetFrameObjAudio(int frameIdx);
	void ParseMainfest(FString url);
	void DownloadManifest(FString url);
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
	int height ;
	int width ;
	int first_frame_ready = 0;
	int GetWidth() { return width; };
	int GetHeight() { return height; };
	int GetFps() { return fps; };
	bool Streamer_Decoder_Loaded = false;
	FTetaVi_PluginModule Decoder;
	TArray<Tetavi_Chunk> Chunks;
	int current_frame = -1;
	int pause_time = -1;
	FString manifest_url ="";
	int fps = 30;
	int frame_count = 0;
	int total_frame_count = 0;
	bool has_audio = false;
	bool material_segmentation = false;
	int curr_from = 0;
	UAudioComponent* audio_component;
	bool is_stream_started = false;
	int curr_frame = -1;
#if PLATFORM_ANDROID
        FString streaming_dir = FPaths::ProjectPersistentDownloadDir();
#else
		FString streaming_dir = FPaths::ProjectPluginsDir() + "TetaVi_Plugin/Content/Streaming/";
#endif
	int change_sound_requierd_to = -1;
	bool is_url_stream = false;
	IHttpRequest* HttpDownloadRequest;
	FString manifest_path;
	FString stream_url = "";
	bool loop = true;
	int chunks_download_ahead = 5;
	int start_frame_url_stream = 0;
	int start_chunk_url_stream = 0;
	USoundWave* sound_wave;
	
	
	
};

