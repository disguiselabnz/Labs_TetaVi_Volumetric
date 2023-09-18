// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "TetaVi_Plugin.h"
#include "Http.h"
#include "CoreMinimal.h"



UENUM()
enum Status
{
	Is_Not_Required,
	Is_Required,
	Not_Downloaded,
	Is_Downloading,
	Downloaded,
	Not_Opened,
	Is_Opening,
	Opend,
	Playing,
	Finished_Playing,
	Deleting,
	Deleted,
	Loop
  };
/**
 * 
 */
class TETAVI_PLUGIN_API Tetavi_Chunk
{
public:
	Tetavi_Chunk(FTetaVi_PluginModule _Decoder);
	~Tetavi_Chunk();
	bool OpenStream();
	void SaveAudio();
	bool stream_frames_decoded_ahead();
	void* GetFrameObj(int frameIdx);
	void Release();

	FTetaVi_PluginModule Decoder;
	
	int from =-1;
	int to =-1;
	FString url = "";
	FString path_tet = "";
	void* stream = nullptr;
	AudioInfo info;
	TArray<uint8> audio_raw;
	class USoundWave* sound_wave;
	int stream_id;
	int real_start_frame = -1;
	bool has_audio = false;
	int height;
	int width;
	int fps;
	int frame_count = 0;
	char* mcInfo = nullptr;
	bool material_segmentation = false;
	bool sound_done_write = false;
	TEnumAsByte<Status> status = Is_Not_Required;
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
	void DownloadTet();
	IHttpRequest* HttpDownloadRequest;
	
};

