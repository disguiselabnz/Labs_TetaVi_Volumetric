// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <stdexcept>
#include <string>
#include "Json.h"
#include "TetaVi_Plugin.h"
#include <vector>

struct streamChunk
{
    int from =-1;
    int to =-1;
    std::string path = "";
    bool is_donwnloaded = false;
    bool is_opened = false;
    void* stream = nullptr;
};


class TetaVi_Stream
{
private:
    int height = 2048;
    int width = 2048;
    int fps = 30;
    std::vector<streamChunk> streams;
    
    char* mcInfo = nullptr;
public:
    void* stream;
    int stream_id;
    int real_start_frame = -1;
    bool has_audio = false;
    
    void* GetFrameObj(int frameIdx, int sid);
    bool OpenStreamUrl(std::string tet_path);
    bool OpenStream(const std::string tet_path,int url_stream_id = -1);
    void openStream_i(int stream_id);
    ~TetaVi_Stream() { };
    FTetaVi_PluginModule Decoder;
    int GetWidth() { return width; };
    int GetHeight() { return height; };
    int GetFps() { return fps; };
    bool IsBuffering();
    int GetFramesDecodedAhead();
    void ParseExample();
    bool material_segmentation = false;
    int frame_count = 0;
    bool is_url_stream =false;
    
};



