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
    void left();
    void right();
    void forward();
    void backward();
    void diceRoll();
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
    void leftIndicator();
    void rightIndicator();
    void leftHeadLight();
    void rightHeadLight();
    void leftTailLight();
    void righTailLight();
  private:
    int _LeftHeadLight = 4;
    int _RightHeadLight = 13;
    int _LeftBlinker = 11;
    int _RightBlinker = 12;
    int _LeftTailLight = 8;
    int _RightTailLight = 7;
};

#endif
