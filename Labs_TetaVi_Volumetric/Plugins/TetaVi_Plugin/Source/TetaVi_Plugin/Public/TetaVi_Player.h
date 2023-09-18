// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TetaviProceduralMeshComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "TetaVi_Stream.h"
#include "TetaVi_Plugin.h"
#include "Sound/SampleBufferIO.h"
#include "FrameUpdate.h"
#include "Tetavi_Streamer.h"
#include "Components/AudioComponent.h"
#if WITH_EDITOR
#include "Sections/MovieSceneIntegerSection.h"
#endif
#include "Sound/AmbientSound.h"



#include "TetaVi_Player.generated.h"

UCLASS()
class TETAVI_PLUGIN_API ATetaVi_Player : public AActor
{
	GENERATED_BODY()
	UTetaViProceduralMeshComponent* pm;
	int32 syquencer_factor;


	// called when stream is opened and ready to start
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStreamReady);
public:
	// Sets default values for this actor's properties
	ATetaVi_Player();
	bool CreateProcMesh();
	virtual void BeginDestroy();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Pause"))
		void Pause(bool pause);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Stop"))
		void Stop();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetFrameIndex"))
		void SetFrameIndex(int index);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "getFrameCount"))
		int getFrameCount();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "getCurrentFrameIndex"))
		int getCurrentFrameIndex();
	virtual void PostInitializeComponents() override;

	UPROPERTY(BlueprintAssignable)
		FOnStreamReady OnStreamReady;
	
	UPROPERTY()
		TArray<FVector3f> vertices;
	FVector* vertices_malloc;
	UPROPERTY()
	TArray<FVector3f> normals;
	UPROPERTY()
		TArray<int32> triangles;
	int32* triangles_malloc;
	UPROPERTY()
		TArray<FVector2f> uvs;
	FVector2D* uvs_malloc;
	UPROPERTY()
		TArray<FColor> vertexColors;
	UPROPERTY()
		TArray<FTetaViProcMeshTangent> tangents;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	UMaterialInstanceConstant* MaterialYUV;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UMaterialInterface* Material;
	UPROPERTY()
		UMaterialInstanceDynamic* DynamicMaterialYUV;
	UPROPERTY()
		UTexture2D* texY;
	UPROPERTY()
		UTexture2D* texUV;
	UPROPERTY()
		UTexture2D* normalMap;
	UPROPERTY(BlueprintReadWrite)
		int sync_all_actors_utill = false;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
		int starting_frame = 0;
	UPROPERTY()
		float starting_frame_in_sec = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (FilePathFilter = "tet", DisplayPriority = "1"))
		FFilePath tetPath;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = ( DisplayPriority = "2"))
		FString stream_url;
	std::string tet_path_saved;
	UPROPERTY()
		TArray<uint8> audio_raw;

	
	UPROPERTY()
		int curr_frame_idx = 0;
	
	UPROPERTY(BlueprintReadWrite)
		UAudioComponent* audio_component;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
		class USoundWave* sound_wave;
	UPROPERTY()
		bool first_frame_loaded = false;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool loop = false;
	UPROPERTY(BlueprintReadWrite)
	int fps = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool play_on_awake = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool sequencer_mode = false;
	UPROPERTY()
	int sequencer_frame_to = 0;
	UPROPERTY()
	int sequencer_frame_from = 0;
	UPROPERTY()
	int starting_frame_in_section = 0;
	UPROPERTY()
	bool gop_boost = true;
	UPROPERTY()
	int curr_gop_num = -1;
	UPROPERTY()
	int start_delay = 0;
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "onFrameChangeCapture"))
		bool FrameChangeCapture(int frame_index);
	bool FrameChangeEditor(int frame_index, int frame_factor);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "onFrameChange"))
		bool FrameChange(int frame_index);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "onFrameChangeAudio"))
		bool FrameChangeAudio(float percent_of_audio);
	UFUNCTION()
		void OnAudioFinished();
	UFUNCTION()
		void onAudioPercent( const USoundWave* PlayingSoundWave, const float PlaybackPercent);
	UFUNCTION(BlueprintCallable)
		bool OpenStream();
	UFUNCTION()
	bool play_tet_with_audio();
	UFUNCTION()
	void StartPlay(int start_frame = 0);
	
	void update_tet_to_build(bool to_delete = false);
	
	void write_array_to_file(TArray<FString> arr,FString path);


	virtual void OnConstruction(const FTransform& Transform) override;
	
	void OpenStreamAndAudio();
	void ClearMeshData();
	
	FTetaVi_PluginModule Decoder;
	Tetavi_Streamer stream;
	AudioInfo info;
	void* curr_frame;
	bool stop = false;
	float delta_time_count = 0;
	const int default_malloc = 18000 * 3;
	int capture_fps=-1;
	int starting_frame_capture = 0;
	bool synced = false;
	bool has_audio;
	bool wrote_audio = false;
	


private:
	bool update_frame(bool force, int frame_index);
	
	int default_width = 1024;
	void* TextureData;
	bool textures_binded = false;
	FrameUpdate* frame_update;
	bool opend_stream = false;
	
	bool normal_map_texture_binded = false;
	int stream_do_work_timer = 0;
	int realtime_frame_idx = 0;
	int capture_frame_idx = 0;

	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void BindTextures(int widthY, int heightY, int widthUV, int heightUV);
	
	void SaveAudio();
	Audio::FSoundWavePCMWriter Writer;
	int open_stream_time = -1;
	int play_state = 0;
	int paused_time = 0;
	bool paused = false;

	

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void TetaViTick(long frame);

	void CreateMesh(void* frame);
	bool CreateNormalMapTexture(void* frame);
	void BindNormalMap(int width, int height);
	void CreateTexture(void* frame);
	bool OpenStreamPreview(bool force = false);
	void CreateHelperTexture();
#if WITH_EDITOR
	UMovieSceneIntegerSection* sequencer_range_section = nullptr;
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& e) override;
#endif

};
