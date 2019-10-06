#pragma once
#include <SDL_stuff.h>
#include <reimu.h>
class non1loop {
  public:
    //constructor/deconstructor
    
    non1loop();
    //non1loop(reimu);
    ~non1loop();
    //setters

    void setFrameCount(int frameCnt);
    //getters

    int getLastFrame();
    int getFrameCount();
    //misc

    void loop();
  private:
    int frameCount;
    int lastFrame;
    reimu object;
};
