#ifndef lettucelab_h
#define lettucelab_h

#include "Arduino.h"

class lettucelab
{
  void begin();
};
class wheels
{
  public:
    void disable();
    void left();
    void right();
    void forward();
    void backward();
  private:
};

class lights
{
  void leftIndicator();
  void rightIndicator();
  void leftHeadLight();
  void rightHeadLight();
  void leftTailLight();
  void righTailLight();
};

#endif
