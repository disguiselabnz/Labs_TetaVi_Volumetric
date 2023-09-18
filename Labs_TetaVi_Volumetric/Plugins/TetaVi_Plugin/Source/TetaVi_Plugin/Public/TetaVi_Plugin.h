// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#if PLATFORM_ANDROID
#include <dlfcn.h>
#endif
#include "TetaviProceduralMeshComponent.h"
#include "Modules/ModuleManager.h"

enum ColorType
{
	RGB,
	RGBA,
	CompressedDDS,
	YUV2,
	UserDefined,
	INVALID
};

struct AudioInfo
{
public:
	int32 bytes_per_second,
		bits_per_sample,
		chanel_num,
		block_align,
		decoded_bytes_number,
		samples_number;
};

struct TextureInfo
{
	int32 width,
		height,
		channels,
		stride;
	ColorType color_type;
	void* pixels;
};




class FTetaVi_PluginModule : public IModuleInterface
{
public:
	
	FTetaVi_PluginModule();
	void* create_stream_decoder_obj_YUV();

	bool stream_init_model(void* stream, const char* pathToFile);
	
	int stream_get_frame_count(void* stream);
	
	void stream_release(void* stream);

	void stream_set_calculate_normals(void* stream, bool calc = true);
	
	void stream_set_calculate_tangents(void* stream, bool calc = true);

	int32 stream_get_id(void* stream);
	
	void* stream_get_frame_obj(void* stream, int frameIdx);

	int stream_get_fps(void* stream);

	bool stream_has_audio(void* stream);
	
	void stream_apply_rendering_frame(void* stream, void* frame);
	
	int frame_get_vertex_count(void* frame);
	
	void frame_copy_vertex_xyz(void* frame, void* pointer);
	
	int32 frame_face_count(void* frame);
	
	void frame_copy_face_indices(void* frame, void* pointer);
	
	void frame_copy_uv_data(void* frame, bool reverse_v_sign, void* pointer);
	
	void* frame_get_texture_obj(void* frame);

	void * frame_get_normal_map(void *native_frame_ptr, int &size,int &width,int &height);
	
	TextureInfo texture_get_info(void* textureObj);
	
	TextureInfo stream_get_video_width_height(void* stream);
	
	char* get_mat_class_info(void* stream);
	
	FVector3f* frame_get_vertex_xyz(void* frame);

	FVector3f* frame_get_vertex_normals(void* frame);

	FVector3f* frame_get_vertex_tangents(void* frame);

	int32* frame_face_indices(void* frame);
	
	FVector2f* frame_get_uv_data(void* frame);

	int32* create_audio_obj(void* native_stream_ptr, const char* name);

	AudioInfo audio_player_get_info(void* audioPlayer);

	void audio_player_release(void* native_audio_player_ptr);

	int audio_player_get_audio_buffer_byte_size(void* audioPlayer, int frame_idx);

	bool audio_player_copy_frame(void* audioPlayer, int frame_idx, void** data);
	
	int32  frame_is_key(void * frame);

	int32  frame_gop_number(void * frame);
	
	bool stream_is_buffering(void* stream);
	
	int stream_frames_decoded_ahead(void* stream);
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	bool LoadDllHandle();

private:
	/** Handle to the test dll we will load */
	void*	ExampleLibraryHandle;
};
