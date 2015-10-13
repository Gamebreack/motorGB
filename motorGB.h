#ifndef motorGB_h
#define motorGB_h

#include "Arduino.h"

class motorGB
{

  public:

    motorGB(int mp1x, int mp2x, int mp3x, int mp4x);
    void run_full1(int voltas, int direcao);
    void run_full2(int voltas, int direcao);
    void run_half(int voltas, int direcao);
    void doRevolution_full1(int direcao);
    void doRevolution_full2(int direcao);
    void doRevolution_half(int direcao);
    void setspeed(int velocx);
    void setRevolution(int stepsRevx);

  private:

    int _veloc;
    int _stepsRev;
    int _mp1;
    int _mp2;
    int _mp3;
    int _mp4;
    void walk_full1_step(int thisStep);
    void walk_full2_step(int thisStep);
    void walk_half_step(int thisStep);
    

};

#endif
