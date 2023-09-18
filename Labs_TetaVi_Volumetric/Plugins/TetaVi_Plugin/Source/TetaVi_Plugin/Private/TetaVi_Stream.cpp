// Fill out your copyright notice in the Description page of Project Settings.


#include "TetaVi_Stream.h"
#include "Core.h"


/*FGraphEventRef RunLambdaOnGameThread(TFunction< void()> InFunction)
{
	return FFunctionGraphTask::CreateAndDispatchWhenReady(InFunction, TStatId(), nullptr, ENamedThreads::BackgroundThreadPriority);
}*/
bool TetaVi_Stream::OpenStreamUrl(const std::string url)
{
	int num_of_chunks = 9;
	is_url_stream = true;
	for(int i =0 ; i< num_of_chunks ; i++)
	{
		streamChunk sc;
		sc.from = 150*i;
		sc.to = 150*(i+1);
		sc.path = "C:/Content/guy_00" + std::to_string(i) +".tet";
		sc.is_donwnloaded = true;
		streams.push_back(sc);
		
		
		
		
	}
	return true;
	
}

bool TetaVi_Stream::OpenStream(const std::string tet_path,int url_stream_id) {
	
	const char* path = tet_path.c_str();
	if (!FPaths::FileExists(path)) {
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("file doesnt exists "));
		return false;
	}
	if (url_stream_id ==-1 && stream)
	{
		Decoder.stream_release(stream);
		stream =nullptr;
	}
		
	void* _stream;		
		
	_stream = Decoder.create_stream_decoder_obj_YUV();

	Decoder.stream_set_calculate_normals(_stream);
	Decoder.stream_set_calculate_tangents(_stream);
	Decoder.stream_init_model(_stream, path);

	stream_id = Decoder.stream_get_id(_stream);
	TextureInfo textureInfo = Decoder.stream_get_video_width_height(_stream);
	width = textureInfo.width;
	height = textureInfo.height;
	mcInfo = Decoder.get_mat_class_info(_stream);
	fps = Decoder.stream_get_fps(_stream);
	material_segmentation = mcInfo ? strlen(mcInfo) > 0 : false;
	frame_count = Decoder.stream_get_frame_count(_stream);
	
	has_audio = Decoder.stream_has_audio(_stream);
	
	if(url_stream_id > -1)
	{
		if(url_stream_id < streams.size() )
		{
			// error
			UE_LOG(LogTemp, Warning, TEXT("_stream %d"),url_stream_id);
			streams[url_stream_id].stream = _stream;
		}else
		{
			
		}
		
	}
	stream = _stream;
	return stream != nullptr;
}




// Sets default values
void* TetaVi_Stream::GetFrameObj(int frameIdx, int sid)
{
	
	
	void* frame = nullptr;
	if(real_start_frame < 0)
	{
		frameIdx = 0;
	}else
	{
		frameIdx -= real_start_frame;
	}
	if(is_url_stream)
	{
		for(int i = 0; i <streams.size();i++)
		{
			if(streams[i].is_donwnloaded)
			{
				if(!streams[i].is_opened)
				{
					OpenStream(streams[i].path,i);
					streams[i].is_opened = true;
				}
			}
			if( frameIdx >= streams[i].from && frameIdx < streams[i].to )
			{
				if(streams[i].stream)
				{
					if(i+1 < streams.size() && !streams[i+1].is_opened){
						/*RunLambdaOnGameThread([=]
						{
                    		//UE_LOG(LogTemp, Warning, TEXT("is_opened %d"),i+1);
							OpenStream(streams[i+1].path,i+1);
                    		Decoder.stream_get_frame_obj(streams[i+1].stream, 0);
							
						});*/
						streams[i+1].is_opened = true;
						
					}
					frame =  Decoder.stream_get_frame_obj(streams[i].stream, frameIdx);
					if (frame) {
						if(real_start_frame<0) real_start_frame = frameIdx;
						UE_LOG(LogTemp, Warning, TEXT("frame %d"),frameIdx);
						//Decoder.stream_apply_rendering_frame(stream, frame);
					}
					
					
				}else
				{
					
				}
				break;
			}
		}
	}
	
	
	return frame;
	

}

bool TetaVi_Stream::IsBuffering()
{
	if (!stream)return false;
	return Decoder.stream_is_buffering(stream) == 0 ? false : true;
}

int TetaVi_Stream::GetFramesDecodedAhead()
{
	if (!stream)return -1;
	return Decoder.stream_frames_decoded_ahead(stream);
}


