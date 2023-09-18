
#include "FrameUpdate.h"

int FrameUpdate::GetFramePlaying() {
    
    return   (FPS * ((Now() - startTime) - AccumlatedPauseMs()) * speedCoef / 1000) + startFrameIdx;
}

void FrameUpdate::Set(int frame_idx) {
    startFrameIdx = frame_idx;
    accumlatedPauseMs = 0;
    startTime = pausedTime = lastUpdate = Now();
    fpsDecodedLast = Now();
}

void* FrameUpdate::UpdateFrame(int frame_idx)
{
    if (frame_idx == currMeshFrameIndex)
        return nullptr;
    void* frame = TV_stream.GetFrameObj(frame_idx,0);

    if (!UpdateFramePrefix(frame))
        return nullptr;

    UpdateFramePostfix();

    currMeshFrameIndex = frame_idx;
    return frame;
}

long FrameUpdate::AccumlatedPauseMs()
{
    return accumlatedPauseMs + (pauseState ? (Now() - pausedTime): 0);
}

 bool FrameUpdate::UpdateFramePrefix(void* frame)
{
    if (frame == nullptr)
        return false;
    if (FPS == -1)
        FPS = TV_stream.GetFps(); // assuming same fps along video but can not getting until reading the first frame
    return true;
}

 void FrameUpdate::UpdateFramePostfix()
 {
     
     fpsDecodedDelta = (Now() - fpsDecodedLast) * 0.05 + fpsDecodedDelta * 0.95;
     fpsDecodedLast = Now();
     FpsDecoded = ((1000 / fpsDecodedDelta) + 0.5);
 }

 void FrameUpdate::Pause(bool to_pause) // use for a pause button
 {
     
        if (pauseState == to_pause)
            return;
        if (!pauseState && to_pause)
        {
            pausedTime = lastUpdate = Now();
        }
        else //if (pauseState && !value) -- always
        {
            accumlatedPauseMs += (Now() - pausedTime);
            pausedTime = Now();
            fpsDecodedLast = Now();
        }
        pauseState = to_pause;
     
 }

 void* FrameUpdate::UpdateFrame()
 {
     void* return_frame = nullptr;
     if (TV_stream.stream == nullptr)
         return nullptr;
     lastUpdate = Now();

     int FramePlaying = GetFramePlaying();
     return_frame = UpdateFrame(FramePlaying);
     if (FramePlaying >= TV_stream.frame_count)
     {
         
     }
     else
     {

         bool p = !return_frame && (TV_stream.IsBuffering());
         buffereing = p;
         Pause(p);
         if (buffereing)
         {
             inStress = false;
         }
         else
         {

             if (TV_stream.GetFramesDecodedAhead() < 45)
             {
                 slow_util = !slow_util;
                 //Pause(slow_util);  // slow down by half
             }
         }
     }
     return return_frame;
 }
