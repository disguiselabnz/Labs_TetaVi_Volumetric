
#pragma once

#include <stdexcept>
#include <string>
#include "TetaVi_Plugin.h"
#include "TetaVi_Stream.h"
#include <ctime>
#include <chrono>

using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;
class FrameUpdate
{
	// public functions
public:
	FrameUpdate(TetaVi_Stream &tv_stream, int fps,int first_frame = 0) : FPS(fps) {
		TV_stream = tv_stream;
		stream = TV_stream.stream;
		Set(first_frame);
	}
	int GetFramePlaying();
	void Set(int frame_idx);
	void* UpdateFrame(int frame_idx);
	void* UpdateFrame();
	void Pause(bool to_pause);

	// private members 
private:
	int FPS = 30;
	long long now;
	long long startTime;
	long long pausedTime;
	long long lastUpdate;
	long long fpsDecodedLast;
	bool pauseState;
	bool pause;
	bool buffereing;
	long accumlatedPauseMs;
	float speedCoef = 1;
	int startFrameIdx = 0;
	int currMeshFrameIndex;
	void* stream;
	TetaVi_Stream TV_stream;
	double fpsDecodedDelta;
	double fpsDiff;
	int FpsDecoded;
	bool inStress;
	bool slow_util;

	// private functions 
private:
	bool UpdateFramePrefix(void* frame);
	long AccumlatedPauseMs();
	void UpdateFramePostfix();
	bool Pause() { return pauseState; };
	long long Now() { return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count(); };


};