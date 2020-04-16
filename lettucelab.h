
/*
Artichoke LettuceLab Library
Header file
############################

Version 1.0
For lettuceLab motor light and sensor controller
Compatible with arduino mega

Author:
Nikolai Patrick 2020
*/
#ifndef lettucelab_h
#define lettucelab_h

#include "Arduino.h"

class lettucelab
{
  public:
    void begin();
  private:
};
class wheels
{
  public:
    void disable();
    void left(int LeftLength, int LeftSpeed);
    void right(int RightLength, int RightSpeed);
    void forward(int ForwardLength, int ForwardSpeed);
    void backward(int BackwardLength, int BackwardSpeed);
    void leftOrRight(int LeftOrRightSpeed);
  private:
    int _DevisedLeft;
    int _DevisedForward;
    int _DevisedBackward;
    int _DevisedRight;
    int _DiceRoll;
};

class lights
{
  public:
    void LightsOff();
    void LightsOn(int allbrightness);
//future use:
//    void rightIndicator();
//    void leftHeadLight();
//    void rightHeadLight();
//    void leftTailLight();
//    void righTailLight();
//    void indicatorBlink(); - auto-blink
    void HeadLightsOn(int headbrightness);
    void HeadLightsOff();
    void TailLightsOn(int tailbrightness);
    void TailLightsOff();
  private:
    int _LeftHeadLight = 4;
    int _RightHeadLight = 13;
    int _LeftBlinker = 11;
    int _RightBlinker = 12;
    int _LeftTailLight = 8;
    int _RightTailLight = 7;
};

#endif
