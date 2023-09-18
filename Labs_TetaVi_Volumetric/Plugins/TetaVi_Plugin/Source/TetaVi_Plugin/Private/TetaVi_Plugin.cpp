// Copyright Epic Games, Inc. All Rights Reserved.

#include "TetaVi_Plugin.h"
#include "Core.h"
#include "TetaviProceduralMeshComponent.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"


#define LOCTEXT_NAMESPACE "FTetaVi_PluginModule"


FTetaVi_PluginModule::FTetaVi_PluginModule()
{
	
	
}

void FTetaVi_PluginModule::StartupModule()
{
	//LoadDllHandle();
}

void FTetaVi_PluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Free the dll handle
	FPlatformProcess::FreeDllHandle(ExampleLibraryHandle);
	ExampleLibraryHandle = nullptr;
}


void* FTetaVi_PluginModule::create_stream_decoder_obj_YUV() {
	void* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void* (*create_stream_decoder_obj_YUV)();
		create_stream_decoder_obj_YUV create_stream_decoder_obj_YUVF = nullptr;
		create_stream_decoder_obj_YUVF = (create_stream_decoder_obj_YUV)dlsym(ExampleLibraryHandle, "create_stream_decoder_obj_YUV");
		Result = create_stream_decoder_obj_YUVF();
		if (Result)
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("create_stream_decoder_obj_YUV load successfully"));
				
			
		}
		else
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("create_stream_decoder_obj_YUV failed to load"));
			
		}
	}
	
	return Result;

#endif

	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void* (*create_stream_decoder_obj_YUV)();

		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("create_stream_decoder_obj_YUV"));
		if (DllExport)
		{
			create_stream_decoder_obj_YUV create_stream_decoder_obj_YUVF = (create_stream_decoder_obj_YUV)(DllExport);
			Result = (void*)create_stream_decoder_obj_YUVF();
			if (Result)
			{
								
			}
			else
			{
				FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("create_stream_decoder_obj_YUV failed to load"));		
			}

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("create_stream_decoder_obj_YUV fail!"));
		}
	}
	else {
		//FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("TV_DecoderEngine.dll exists", "TV_DecoderEngine.dll fail to load!"));
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}
	return Result;
}

bool FTetaVi_PluginModule::stream_init_model(void* stream, const char* pathToFile) {
	bool Result = false;
#if PLATFORM_ANDROID
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef bool (*stream_init_model)(void* stream, const char* pathToFile);
		stream_init_model stream_init_modelF = nullptr;
		stream_init_modelF = (stream_init_model)dlsym(ExampleLibraryHandle, "stream_init_model");
		Result = stream_init_modelF(stream,pathToFile);
		if (Result)
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_init_model load successfully"));
				
		}
		else
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_init_model failed to load"));
			
		}
		
	}
	return Result;

#endif
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_init_model"));
		if (DllExport)
		{
			
			typedef bool (*stream_init_model)(void* stream, const char* pathToFile);
			//Type cast the valid dll export to type
			stream_init_model stream_init_modelF = (stream_init_model)(DllExport);
			Result = (bool)stream_init_modelF(stream, pathToFile);
			//UE_LOG(LogTemp, Warning, TEXT( "stream_init_model Called!!"));

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("m_create_stream_rendering fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}
	return Result;
}

int FTetaVi_PluginModule::stream_get_frame_count(void* stream) {
	int Result = 0;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int (*stream_get_frame_count)(void* stream);
		stream_get_frame_count stream_get_frame_countF = nullptr;
		stream_get_frame_countF = (stream_get_frame_count)dlsym(ExampleLibraryHandle, "stream_get_frame_count");
		Result = stream_get_frame_countF(stream);
		if (Result > 0)
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_get_frame_count load successfully"));
				
		}
		else
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_get_frame_count failed to load"));
			
		}
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_get_frame_count"));
		if (DllExport)
		{
			
			typedef int(*stream_get_frame_count)(void* stream);
			//Type cast the valid dll export to type
			stream_get_frame_count stream_get_frame_countF = (stream_get_frame_count)(DllExport);
			Result = (int)stream_get_frame_countF(stream);
			if (Result) {
				//				UE_LOG(LogTemp, Warning, TEXT("stream_get_frame_count Called!! returned %d"), Result);
			}
			else {
								UE_LOG(LogTemp, Warning, TEXT("stream_get_frame_count returned nothing!!"));
			}

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_get_frame_count fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

void FTetaVi_PluginModule::stream_release(void* stream) {
#if PLATFORM_ANDROID
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void (*stream_release)(void* stream);
		stream_release stream_releaseF = nullptr;
		stream_releaseF = (stream_release)dlsym(ExampleLibraryHandle, "stream_release");
		stream_releaseF(stream);
		
	}
	
	return;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_release"));
		if (DllExport)
		{
			
			typedef void (*stream_release)(void* stream);
			//Type cast the valid dll export to type
			stream_release stream_releaseF = (stream_release)(DllExport);
			(void)stream_releaseF(stream);
			//			UE_LOG(LogTemp, Warning, TEXT( "stream_release Called!!"));

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_release fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

}

void FTetaVi_PluginModule::stream_set_calculate_normals(void* stream, bool calc) {
#if PLATFORM_ANDROID
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void (*stream_set_calculate_normals)(void* stream, bool calc);
		stream_set_calculate_normals stream_set_calculate_normalsF = nullptr;
		stream_set_calculate_normalsF = (stream_set_calculate_normals)dlsym(ExampleLibraryHandle, "stream_set_calculate_normals");
		stream_set_calculate_normalsF(stream, calc);
		
	}
	
	return;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_set_calculate_normals"));
		if (DllExport)
		{
			
			typedef void (*stream_set_calculate_normals)(void* stream,bool calc);
			//Type cast the valid dll export to type
			stream_set_calculate_normals stream_set_calculate_normalsF = (stream_set_calculate_normals)(DllExport);
			(void)stream_set_calculate_normalsF(stream,calc);
			//			UE_LOG(LogTemp, Warning, TEXT( "stream_set_calculate_normals Called!!"));

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_set_calculate_normals fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

}

void FTetaVi_PluginModule::stream_set_calculate_tangents(void* stream, bool calc) {
#if PLATFORM_ANDROID
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void (*stream_set_calculate_tangents)(void* stream, bool calc);
		stream_set_calculate_tangents stream_set_calculate_tangentsF = nullptr;
		stream_set_calculate_tangentsF = (stream_set_calculate_tangents)dlsym(ExampleLibraryHandle, "stream_set_calculate_tangents");
		stream_set_calculate_tangentsF( stream, calc);
		
	}
	
	return;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_set_calculate_tangents"));
		if (DllExport)
		{
			
			typedef void (*stream_set_calculate_tangents)(void* stream,bool calc);
			//Type cast the valid dll export to type
			stream_set_calculate_tangents stream_set_calculate_tangentsF = (stream_set_calculate_tangents)(DllExport);
			(void)stream_set_calculate_tangentsF(stream,calc);
			//			UE_LOG(LogTemp, Warning, TEXT( "stream_set_calculate_tangents Called!!"));

		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_set_calculate_tangents fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

}

int32 FTetaVi_PluginModule::stream_get_id(void* stream) {
	int32 Result = 0;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int32 (*stream_get_id)(void* stream);
		stream_get_id stream_get_idF = nullptr;
		stream_get_idF = (stream_get_id)dlsym(ExampleLibraryHandle, "stream_get_id");
		Result = stream_get_idF( stream);
		if (Result > 0)
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_get_id load successfully"));
				
			
		}
		else
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_get_id failed to load"));
			
		}
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_get_id"));
		if (DllExport)
		{
			
			typedef int32(*stream_get_id)(void* stream);
			//Type cast the valid dll export to type
			stream_get_id stream_get_idF = (stream_get_id)(DllExport);
			Result = (int32)stream_get_idF(stream);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_get_id Called!! returned %d"), Result);
			}
			else
			{
								UE_LOG(LogTemp, Warning, TEXT("stream_get_id returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_get_id fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

void* FTetaVi_PluginModule::stream_get_frame_obj(void* stream, int frameIdx) {
	void* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void* (*stream_get_frame_obj)(void* stream, int frameIdx);
		stream_get_frame_obj stream_get_frame_objF = nullptr;
		stream_get_frame_objF = (stream_get_frame_obj)dlsym(ExampleLibraryHandle, "stream_get_frame_obj");
		Result = stream_get_frame_objF( stream, frameIdx);
	}if (Result)
	{
		//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_get_frame_obj load successfully"));
				
			
	}
	else
	{
		//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_get_frame_obj failed to load"));
			
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_get_frame_obj"));
		if (DllExport)
		{
			
			typedef void* (*stream_get_frame_obj)(void* stream, int frameIdx);
			//Type cast the valid dll export to type
			stream_get_frame_obj stream_get_frame_objF = (stream_get_frame_obj)(DllExport);
			Result = (void*)stream_get_frame_objF(stream, frameIdx);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_get_frame_obj Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_get_frame_obj returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_get_id fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

int FTetaVi_PluginModule::stream_get_fps(void* stream) {
	int Result = 0;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int (*stream_get_fps)(void* stream);
		stream_get_fps stream_get_fpsF = nullptr;
		stream_get_fpsF = (stream_get_fps)dlsym(ExampleLibraryHandle, "stream_get_fps");
		Result = stream_get_fpsF( stream);
	}if (Result > 0)
	{
		//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_get_fps load successfully - " + FString::FromInt(Result) ));
				
			
	}
	else
	{
		//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("stream_get_fps failed to load"));
			
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_get_fps"));
		if (DllExport)
		{
			
			typedef int (*stream_get_fps)(void* stream);
			//Type cast the valid dll export to type
			stream_get_fps stream_get_fpsF = (stream_get_fps)(DllExport);
			Result = (int)stream_get_fpsF(stream);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_get_fps Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_get_fps returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_get_fps fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

bool FTetaVi_PluginModule::stream_has_audio(void* stream) {
	bool Result = false;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef bool (*stream_has_audio)(void* stream);
		stream_has_audio stream_has_audioF = nullptr;
		stream_has_audioF = (stream_has_audio)dlsym(ExampleLibraryHandle, "stream_has_audio");
		Result = stream_has_audioF( stream);
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_has_audio"));
		if (DllExport)
		{
			
			typedef bool (*stream_has_audio)(void* stream);
			//Type cast the valid dll export to type
			stream_has_audio stream_has_audioF = (stream_has_audio)(DllExport);
			Result = (bool)stream_has_audioF(stream);
			
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_has_audio fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

void FTetaVi_PluginModule::stream_apply_rendering_frame(void* stream, void* frame) {
#if PLATFORM_ANDROID
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void (*stream_apply_rendering_frame)(void* stream, bool frame);
		stream_apply_rendering_frame stream_apply_rendering_frameF = nullptr;
		stream_apply_rendering_frameF = (stream_apply_rendering_frame)dlsym(ExampleLibraryHandle, "stream_apply_rendering_frame");
		stream_apply_rendering_frameF( stream, frame);
		
	}
	
	return;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_apply_rendering_frame"));
		if (DllExport)
		{
			
			typedef void (*stream_apply_rendering_frame)(void* stream, void* frame);
			//Type cast the valid dll export to type
			stream_apply_rendering_frame stream_apply_rendering_frameF = (stream_apply_rendering_frame)(DllExport);
			(void)stream_apply_rendering_frameF(stream, frame);
			if (frame)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_apply_rendering_frame Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_apply_rendering_frame returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_get_id fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

}

int32 FTetaVi_PluginModule::frame_get_vertex_count(void* frame) {
	int32 Result = -1;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int32 (*frame_get_vertex_count)(void* frame);
		frame_get_vertex_count frame_get_vertex_countF = nullptr;
		frame_get_vertex_countF = (frame_get_vertex_count)dlsym(ExampleLibraryHandle, "frame_get_vertex_count");
		Result = frame_get_vertex_countF( frame);
		if (Result)
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("frame_get_vertex_count load successfully"));
				
			
		}
		else
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("frame_get_vertex_count failed to load"));
			
		}
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_get_vertex_count"));
		if (DllExport)
		{
			
			typedef int32(*frame_get_vertex_count)(void* frame);
			//Type cast the valid dll export to type
			frame_get_vertex_count frame_get_vertex_countF = (frame_get_vertex_count)(DllExport);
			Result = (int32)frame_get_vertex_countF(frame);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_count Called!! returned %d"), Result);
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_count returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_get_id fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

void FTetaVi_PluginModule::frame_copy_vertex_xyz(void* frame, void* pointer) {
#if PLATFORM_ANDROID
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void (*frame_copy_vertex_xyz)(void* frame, void* pointer);
		frame_copy_vertex_xyz frame_copy_vertex_xyzF = nullptr;
		frame_copy_vertex_xyzF = (frame_copy_vertex_xyz)dlsym(ExampleLibraryHandle, "frame_copy_vertex_xyz");
		frame_copy_vertex_xyzF(  frame,  pointer);
		
	}
	
	return;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_copy_vertex_xyz"));
		if (DllExport)
		{
			
			typedef void (*frame_copy_vertex_xyz)(void* frame, void* pointer);
			//Type cast the valid dll export to type
			frame_copy_vertex_xyz frame_copy_vertex_xyzF = (frame_copy_vertex_xyz)(DllExport);
			if (!pointer) {
				UE_LOG(LogTemp, Warning, TEXT("frame_copy_vertex_xyz verticies pointer is null"));
				return;
			}
			(void)frame_copy_vertex_xyzF(frame, pointer);
			if (pointer)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_copy_vertex_xyz Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_copy_vertex_xyz returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_copy_vertex_xyz fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

}

int32 FTetaVi_PluginModule::frame_face_count(void* frame) {
	int32 Result = -1;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int32 (*frame_face_count)(void* frame);
		frame_face_count frame_face_countF = nullptr;
		frame_face_countF = (frame_face_count)dlsym(ExampleLibraryHandle, "frame_face_count");
		Result = frame_face_countF( frame);
		if (Result)
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("frame_face_count load successfully"));
				
			
		}
		else
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("frame_face_count failed to load"));
			
		}
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_face_count"));
		if (DllExport)
		{
			
			typedef int32(*frame_face_count)(void* frame);
			//Type cast the valid dll export to type
			frame_face_count frame_face_countF = (frame_face_count)(DllExport);
			Result = (int32)frame_face_countF(frame);
			if (Result) {
				//				UE_LOG(LogTemp, Warning, TEXT( "frame_face_count Called!! returned %d"), Result);

			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_face_count returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_face_count fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

void FTetaVi_PluginModule::frame_copy_face_indices(void* frame, void* pointer) {
#if PLATFORM_ANDROID
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void (*frame_copy_face_indices)(void* frame, void* pointer);
		frame_copy_face_indices frame_copy_face_indicesF = nullptr;
		frame_copy_face_indicesF = (frame_copy_face_indices)dlsym(ExampleLibraryHandle, "frame_copy_face_indices");
		frame_copy_face_indicesF(  frame,  pointer);
		
	}
	
	return;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_copy_face_indices"));
		if (DllExport)
		{
			
			typedef void (*frame_copy_face_indices)(void* frame, void* pointer);
			//Type cast the valid dll export to type
			frame_copy_face_indices frame_copy_face_indicesF = (frame_copy_face_indices)(DllExport);
			(void)frame_copy_face_indicesF(frame, pointer);
			if (pointer)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_copy_face_indices Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_copy_face_indices returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_copy_face_indices fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

}

void FTetaVi_PluginModule::frame_copy_uv_data(void* frame, bool reverse_v_sign, void* pointer) {
#if PLATFORM_ANDROID
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void (*frame_copy_uv_data)(void* frame, bool reverse_v_sign, void* pointer);
		frame_copy_uv_data frame_copy_uv_dataF = nullptr;
		frame_copy_uv_dataF = (frame_copy_uv_data)dlsym(ExampleLibraryHandle, "frame_copy_uv_data");
		frame_copy_uv_dataF(  frame, reverse_v_sign, pointer);
		
	}
	
	return;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_copy_uv_data"));
		if (DllExport)
		{
			
			typedef void (*frame_copy_uv_data)(void* frame, bool reverse_v_sign, void* pointer);
			//Type cast the valid dll export to type
			frame_copy_uv_data frame_copy_uv_dataF = (frame_copy_uv_data)(DllExport);
			(void)frame_copy_uv_dataF(frame, reverse_v_sign, pointer);
			if (pointer)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_copy_uv_data Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_copy_uv_data returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_copy_uv_data fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

}

void* FTetaVi_PluginModule::frame_get_texture_obj(void* frame) {
	void* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void* (*frame_get_texture_obj)(void* frame);
		frame_get_texture_obj frame_get_texture_objF = nullptr;
		frame_get_texture_objF = (frame_get_texture_obj)dlsym(ExampleLibraryHandle, "frame_get_texture_obj");
		Result = frame_get_texture_objF(frame);
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_get_texture_obj"));
		if (DllExport)
		{
			
			typedef void* (*frame_get_texture_obj)(void* frame);
			//Type cast the valid dll export to type
			frame_get_texture_obj frame_get_texture_objF = (frame_get_texture_obj)(DllExport);
			Result = (void*)frame_get_texture_objF(frame);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_texture_obj Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_texture_obj returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_get_texture_obj fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;


}

void* FTetaVi_PluginModule::frame_get_normal_map(void *frame, int &size,int &width,int &height) {
	void* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void* (*frame_get_normal_map)(void* frame, int &size,int &width,int &height);
		frame_get_normal_map frame_get_normal_mapF = nullptr;
		frame_get_normal_mapF = (frame_get_normal_map)dlsym(ExampleLibraryHandle, "frame_get_normal_map");
		Result = frame_get_normal_mapF(frame,size,width,height);
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_get_normal_map"));
		if (DllExport)
		{
			
			typedef void* (*frame_get_normal_map)(void* frame, int &size,int &width,int &height);
			//Type cast the valid dll export to type
			frame_get_normal_map frame_get_normal_mapF = (frame_get_normal_map)(DllExport);
			Result = (void*)frame_get_normal_mapF(frame,size,width,height);
			if (Result)
			{
								//UE_LOG(LogTemp, Warning, TEXT("frame_get_normal_map Called!! size is %d"),size);
			}
			else
			{
								//UE_LOG(LogTemp, Warning, TEXT("frame_get_normal_map returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_get_normal_map fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;


}

TextureInfo FTetaVi_PluginModule::texture_get_info(void* textureObj) {
	TextureInfo Result;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef TextureInfo (*texture_get_info)(void* textureObj);
		texture_get_info texture_get_infoF = nullptr;
		texture_get_infoF = (texture_get_info)dlsym(ExampleLibraryHandle, "texture_get_info");
		Result = texture_get_infoF( textureObj);
		
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("texture_get_info"));
		if (DllExport)
		{
			
			typedef TextureInfo(*texture_get_info)(void* textureObj);
			//Type cast the valid dll export to type
			texture_get_info texture_get_infoF = (texture_get_info)(DllExport);
			Result = (TextureInfo)texture_get_infoF(textureObj);
			if (Result.pixels)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("texture_get_info Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("texture_get_info returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("texture_get_info fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

TextureInfo FTetaVi_PluginModule::stream_get_video_width_height(void* stream) {
	TextureInfo Result;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef TextureInfo (*stream_get_video_width_height)(void* stream);
		stream_get_video_width_height stream_get_video_width_heightF = nullptr;
		stream_get_video_width_heightF = (stream_get_video_width_height)dlsym(ExampleLibraryHandle, "stream_get_video_width_height");
		Result = stream_get_video_width_heightF( stream);
		
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_get_video_width_height"));
		if (DllExport)
		{
			
			typedef TextureInfo(*stream_get_video_width_height)(void* stream);
			//Type cast the valid dll export to type
			stream_get_video_width_height stream_get_video_width_heightF = (stream_get_video_width_height)(DllExport);
			Result = (TextureInfo)stream_get_video_width_heightF(stream);
			if (Result.width > 0)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_get_video_width_height Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_get_video_width_height returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_get_video_width_height fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

char* FTetaVi_PluginModule::get_mat_class_info(void* stream) {
	char* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef char* (*get_mat_class_info)(void* stream);
		get_mat_class_info get_mat_class_infoF = nullptr;
		get_mat_class_infoF = (get_mat_class_info)dlsym(ExampleLibraryHandle, "get_mat_class_info");
		Result = get_mat_class_infoF(stream);
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("get_mat_class_info"));
		if (DllExport)
		{
			
			typedef char* (*get_mat_class_info)(void* stream);
			//Type cast the valid dll export to type
			get_mat_class_info get_mat_class_infoF = (get_mat_class_info)(DllExport);
			Result = (char*)get_mat_class_infoF(stream);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("get_mat_class_info Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("get_mat_class_info returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("get_mat_class_info fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

FVector3f* FTetaVi_PluginModule::frame_get_vertex_xyz(void* frame) {
	FVector3f* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef FVector3f* (*frame_get_vertex_xyz)(void* frame);
		frame_get_vertex_xyz frame_get_vertex_xyzF = nullptr;
		frame_get_vertex_xyzF = (frame_get_vertex_xyz)dlsym(ExampleLibraryHandle, "frame_get_vertex_xyz");
		Result = frame_get_vertex_xyzF(frame);
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_get_vertex_xyz"));
		if (DllExport)
		{
			
			typedef FVector3f* (*frame_get_vertex_xyz)(void* frame);
			//Type cast the valid dll export to type
			frame_get_vertex_xyz frame_get_vertex_xyzF = (frame_get_vertex_xyz)(DllExport);
			Result = (FVector3f*)frame_get_vertex_xyzF(frame);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_xyz Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_xyz returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_xyz fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;


}

FVector3f* FTetaVi_PluginModule::frame_get_vertex_normals(void* frame) {
	FVector3f* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef FVector3f* (*frame_get_vertex_normals)(void* frame);
		frame_get_vertex_normals frame_get_vertex_normalsF = nullptr;
		frame_get_vertex_normalsF = (frame_get_vertex_normals)dlsym(ExampleLibraryHandle, "frame_get_vertex_normals");
		Result = frame_get_vertex_normalsF(frame);
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_get_vertex_normals"));
		if (DllExport)
		{
			
			typedef FVector3f* (*frame_get_vertex_normals)(void* frame);
			//Type cast the valid dll export to type
			frame_get_vertex_normals frame_get_vertex_normalsF = (frame_get_vertex_normals)(DllExport);
			Result = (FVector3f*)frame_get_vertex_normalsF(frame);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_normals Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_normals returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_normals fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;


}

FVector3f* FTetaVi_PluginModule::frame_get_vertex_tangents(void* frame) {
	FVector3f* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef FVector3f* (*frame_get_vertex_tangents)(void* frame);
		frame_get_vertex_tangents frame_get_vertex_tangentsF = nullptr;
		frame_get_vertex_tangentsF = (frame_get_vertex_tangents)dlsym(ExampleLibraryHandle, "frame_get_vertex_tangents");
		Result = frame_get_vertex_tangentsF(frame);
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_get_vertex_tangents"));
		if (DllExport)
		{
			
			typedef FVector3f* (*frame_get_vertex_tangents)(void* frame);
			//Type cast the valid dll export to type
			frame_get_vertex_tangents frame_get_vertex_tangentsF = (frame_get_vertex_tangents)(DllExport);
			Result = (FVector3f*)frame_get_vertex_tangentsF(frame);
			if (Result)
			{
								//UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_tangents Called!!"));
			}
			else
			{
								//UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_tangents returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_get_vertex_tangents fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;


}

int32* FTetaVi_PluginModule::frame_face_indices(void* frame) {
	int32* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int32* (*frame_face_indices)(void* frame);
		frame_face_indices frame_face_indicesF = nullptr;
		frame_face_indicesF = (frame_face_indices)dlsym(ExampleLibraryHandle, "frame_face_indices");
		Result = frame_face_indicesF( frame);
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_face_indices"));
		if (DllExport)
		{
			
			typedef int32* (*frame_face_indices)(void* frame);
			//Type cast the valid dll export to type
			frame_face_indices frame_face_indicesF = (frame_face_indices)(DllExport);
			Result = (int32*)frame_face_indicesF(frame);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_face_indices Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_face_indices returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_face_indices fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;


}

FVector2f* FTetaVi_PluginModule::frame_get_uv_data(void* frame) {
	FVector2f* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef FVector2f* (*frame_get_uv_data)(void* frame);
		frame_get_uv_data frame_get_uv_dataF = nullptr;
		frame_get_uv_dataF = (frame_get_uv_data)dlsym(ExampleLibraryHandle, "frame_get_uv_data_reverse_v_sign");
		Result = frame_get_uv_dataF(frame);
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_get_uv_data_reverse_v_sign"));
		if (DllExport)
		{
			
			typedef FVector2f* (*frame_get_uv_data)(void* frame);
			//Type cast the valid dll export to type
			frame_get_uv_data frame_get_uv_dataF = (frame_get_uv_data)(DllExport);
			Result = (FVector2f*)frame_get_uv_dataF(frame);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_uv_data Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_get_uv_data returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_get_uv_data fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;


}

bool FTetaVi_PluginModule::stream_is_buffering(void* stream) {
	bool Result = false;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef bool (*stream_is_buffering)(void* stream);
		stream_is_buffering stream_is_bufferingF = nullptr;
		stream_is_bufferingF = (stream_is_buffering)dlsym(ExampleLibraryHandle, "stream_is_buffering");
		Result = stream_is_bufferingF( stream);
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_is_buffering"));
		if (DllExport)
		{
			
			typedef bool (*stream_is_buffering)(void* stream);
			//Type cast the valid dll export to type
			stream_is_buffering stream_is_bufferingF = (stream_is_buffering)(DllExport);
			Result = (bool)stream_is_bufferingF(stream);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_is_buffering Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_is_buffering returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_is_buffering fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;

}

int FTetaVi_PluginModule::stream_frames_decoded_ahead(void* stream) {
	int Result = 0;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int (*stream_frames_decoded_ahead)(void* stream);
		stream_frames_decoded_ahead stream_frames_decoded_aheadF = nullptr;
		stream_frames_decoded_aheadF = (stream_frames_decoded_ahead)dlsym(ExampleLibraryHandle, "stream_frames_decoded_ahead");
		Result = stream_frames_decoded_aheadF( stream);
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("stream_frames_decoded_ahead"));
		if (DllExport)
		{
			
			typedef int (*stream_frames_decoded_ahead)(void* stream);
			//Type cast the valid dll export to type
			stream_frames_decoded_ahead stream_frames_decoded_aheadF = (stream_frames_decoded_ahead)(DllExport);
			Result = (int)stream_frames_decoded_aheadF(stream);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_frames_decoded_ahead Called!! returnd %d"),Result);
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("stream_frames_decoded_ahead returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("stream_frames_decoded_ahead fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;

}

int32* FTetaVi_PluginModule::create_audio_obj(void* native_stream_ptr, const char* name) {
	int32* Result = nullptr;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int32* (*create_audio_obj)(void* native_stream_ptr, const char* name);
		create_audio_obj create_audio_objF = nullptr;
		create_audio_objF = (create_audio_obj)dlsym(ExampleLibraryHandle, "create_audio_obj");
		Result = create_audio_objF(  native_stream_ptr, name);
	}
	
	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("create_audio_obj"));
		if (DllExport)
		{
			
			typedef int32* (*create_audio_obj)(void* native_stream_ptr, const char* name);
			//Type cast the valid dll export to type
			create_audio_obj create_audio_objF = (create_audio_obj)(DllExport);
			Result = (int32*)create_audio_objF(native_stream_ptr, name);
			if (Result)
			{
								//UE_LOG(LogTemp, Warning, TEXT("create_audio_obj Called!! returnd %d"),Result);
			}
			else
			{
								//UE_LOG(LogTemp, Warning, TEXT("create_audio_obj returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("create_audio_obj fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

AudioInfo FTetaVi_PluginModule::audio_player_get_info(void* audioPlayer) {
	AudioInfo Result;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef AudioInfo (*audio_player_get_info)(void* audioPlayer);
		audio_player_get_info audio_player_get_infoF = nullptr;
		audio_player_get_infoF = (audio_player_get_info)dlsym(ExampleLibraryHandle, "audio_player_get_info");
		Result = audio_player_get_infoF( audioPlayer);
		
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("audio_player_get_info"));
		if (DllExport)
		{
			
			typedef AudioInfo(*audio_player_get_info)(void* audioPlayer);
			//Type cast the valid dll export to type
			audio_player_get_info audio_player_get_infoF = (audio_player_get_info)(DllExport);
			Result = (AudioInfo)audio_player_get_infoF(audioPlayer);
			
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("audio_player_get_info fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

void FTetaVi_PluginModule::audio_player_release(void* native_audio_player_ptr) {
#if PLATFORM_ANDROID
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef void (*audio_player_release)(void* native_audio_player_ptr);
		audio_player_release audio_player_releaseF = nullptr;
		audio_player_releaseF = (audio_player_release)dlsym(ExampleLibraryHandle, "audio_player_release");
		audio_player_releaseF(native_audio_player_ptr);
		
	}
	
	return;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("audio_player_release"));
		if (DllExport)
		{
			
			typedef void (*audio_player_release)(void* native_audio_player_ptr);
			//Type cast the valid dll export to type
			audio_player_release audio_player_releaseF = (audio_player_release)(DllExport);
			(void)audio_player_releaseF( native_audio_player_ptr);
			
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("audio_player_release fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}
}

int FTetaVi_PluginModule::audio_player_get_audio_buffer_byte_size(void* audioPlayer, int frame_idx) {
	int Result = 0;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int (*audio_player_get_audio_buffer_byte_size)(void* audioPlayer, int frame_idx);
		audio_player_get_audio_buffer_byte_size audio_player_get_audio_buffer_byte_sizeF = nullptr;
		audio_player_get_audio_buffer_byte_sizeF = (audio_player_get_audio_buffer_byte_size)dlsym(ExampleLibraryHandle, "audio_player_get_audio_buffer_byte_size");
		Result = audio_player_get_audio_buffer_byte_sizeF( audioPlayer, frame_idx);
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("audio_player_get_audio_buffer_byte_size"));
		if (DllExport)
		{
			
			typedef int (*audio_player_get_audio_buffer_byte_size)(void* audioPlayer, int frame_idx);
			//Type cast the valid dll export to type
			audio_player_get_audio_buffer_byte_size audio_player_get_audio_buffer_byte_sizeF = (audio_player_get_audio_buffer_byte_size)(DllExport);
			Result = (int)audio_player_get_audio_buffer_byte_sizeF(audioPlayer, frame_idx);
			if (Result)
			{
							//UE_LOG(LogTemp, Warning, TEXT("audio_player_get_audio_buffer_byte_size Called!! returnd %d"),Result);
			}
			else
			{
							UE_LOG(LogTemp, Warning, TEXT("audio_player_get_audio_buffer_byte_size returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("audio_player_get_audio_buffer_byte_size fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

int32 FTetaVi_PluginModule::frame_is_key(void* frame) {
	int32 Result = -1;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int32 (*frame_is_key)(void* frame);
		frame_is_key frame_is_keyF = nullptr;
		frame_is_keyF = (frame_is_key)dlsym(ExampleLibraryHandle, "frame_is_key");
		Result = frame_is_keyF( frame);
		if (Result)
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("frame_is_key load successfully"));
				
			
		}
		else
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("frame_is_key failed to load"));
			
		}
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_is_key"));
		if (DllExport)
		{
			
			typedef int32 (*frame_is_key)(void* frame);
			//Type cast the valid dll export to type
			frame_is_key frame_is_keyF = (frame_is_key)(DllExport);
			Result = (int32)frame_is_keyF(frame);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_is_key Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_is_key returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_is_key fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;


}

int32 FTetaVi_PluginModule::frame_gop_number(void* frame) {
	int32 Result = -1;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef int32 (*frame_gop_number)(void* frame);
		frame_gop_number frame_gop_numberF = nullptr;
		frame_gop_numberF = (frame_gop_number)dlsym(ExampleLibraryHandle, "frame_gop_id");
		Result = frame_gop_numberF( frame);
		if (Result)
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("frame_gop_number load successfully"));
				
			
		}
		else
		{
			//FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("frame_gop_number failed to load"));
			
		}
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("frame_gop_id"));
		if (DllExport)
		{
			
			typedef int32 (*frame_gop_number)(void* frame);
			//Type cast the valid dll export to type
			frame_gop_number frame_gop_numberF = (frame_gop_number)(DllExport);
			Result = (int32)frame_gop_numberF(frame);
			if (Result)
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_gop_number Called!!"));
			}
			else
			{
				//				UE_LOG(LogTemp, Warning, TEXT("frame_gop_number returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("frame_gop_number fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;


}

bool FTetaVi_PluginModule::audio_player_copy_frame(void* audioPlayer, int frame_idx, void** data) {
	bool Result = false;
#if PLATFORM_ANDROID
	
	if (ExampleLibraryHandle || LoadDllHandle()) {
		typedef bool (*audio_player_copy_frame)(void* audioPlayer, int frame_idx, void** data);
		audio_player_copy_frame audio_player_copy_frameF = nullptr;
		audio_player_copy_frameF = (audio_player_copy_frame)dlsym(ExampleLibraryHandle, "audio_player_copy_frame");
		Result = audio_player_copy_frameF(audioPlayer,frame_idx,data);
	}
	

	return Result;

#endif
	if (ExampleLibraryHandle || LoadDllHandle()) {
		void* DllExport = FPlatformProcess::GetDllExport(ExampleLibraryHandle, *FString("audio_player_copy_frame"));
		if (DllExport)
		{
			
			typedef bool (*audio_player_copy_frame)(void* audioPlayer, int frame_idx, void** data);
			//Type cast the valid dll export to type
			audio_player_copy_frame audio_player_copy_frameF = (audio_player_copy_frame)(DllExport);
			Result = (bool)audio_player_copy_frameF(audioPlayer, frame_idx, data);
			if (Result)
			{
								//UE_LOG(LogTemp, Warning, TEXT("audio_player_copy_frame Called!!"));
			}
			else
			{
								UE_LOG(LogTemp, Warning, TEXT("audio_player_copy_frame returned nothing!!"));
			}
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("audio_player_copy_frame fail!"));
		}

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll fail to load!"));
	}

	return Result;
}

bool FTetaVi_PluginModule::LoadDllHandle()
{
#if PLATFORM_ANDROID
    if(ExampleLibraryHandle) return true;
    ExampleLibraryHandle = dlopen("libdecoder_engine_api.so", RTLD_NOW | RTLD_LOCAL);
    if(!ExampleLibraryHandle)
    {
        //FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("TetaVi Android lib failed to load"));
        
    }else
    {
        //FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("TetaVi Android lib loaded successfuly"));
        
    }
    return ExampleLibraryHandle != nullptr;
#endif

#if PLATFORM_WINDOWS
    FString BaseDir = IPluginManager::Get().FindPlugin("TetaVi_Plugin")->GetBaseDir();
    FString DllFilePath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/TetaVi_PluginLibrary/Win64/TV_DecoderEngine.dll"));
    if (FPaths::FileExists(DllFilePath))
    {
        
        ExampleLibraryHandle = FPlatformProcess::GetDllHandle(*DllFilePath);
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("TV_DecoderEngine.dll doesnot exist"));
        GLog->Log(DllFilePath + " doesnot exist");
        //FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("TetaVi Win64 lib failed to load"));
        
    }
    return ExampleLibraryHandle != nullptr;
#endif
#if PLATFORM_MAC
    FString BaseDir = IPluginManager::Get().FindPlugin("TetaVi_Plugin")->GetBaseDir();
    FString DllFilePath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/TetaVi_PluginLibrary/Mac/tetCodecMacLib.bundle/Contents/MacOS/tetCodecMacLib"));
    if(ExampleLibraryHandle) return true;
    ExampleLibraryHandle = dlopen(TCHAR_TO_ANSI(*DllFilePath), RTLD_NOW | RTLD_LOCAL);
    //ExampleLibraryHandle = dlopen("/Users/guyfishman/Documents/Unreal Projects/tetaviMac/Plugins/TetaVi_Plugin/Binaries/ThirdParty/TetaVi_PluginLibrary/Mac/tetCodecMacLib.bundle/Contents/MacOS/tetCodecMacLib", RTLD_NOW | RTLD_LOCAL);
    //ExampleLibraryHandle = dlopen("tetCodecMacLib", RTLD_NOW | RTLD_LOCAL);
    
    if(!ExampleLibraryHandle)
    {
        FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(dlerror()));
        
    }else
    {
        //FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("TetaVi Android lib loaded successfuly"));
        
    }
    return ExampleLibraryHandle != nullptr;
#endif
    
    
}
// this code purpse is to add a simple int array to owr shader



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTetaVi_PluginModule, TetaVi_Plugin)
