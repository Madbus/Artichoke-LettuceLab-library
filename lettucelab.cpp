
/*
Artichoke LettuceLab Library
Source file
############################

Version 1.0
For lettuceLab motor light and sensor controller
Compatible with arduino mega

Author:
Nikolai Patrick 2020
*/
#include "Arduino.h"
#include "lettucelab.h"

lettucelab::begin()
{
Serial.begin(9600);
}

//wheels:
wheels::diasble()
{
  digitalWrite(10, LOW);//D10- right forward
  digitalWrite(9, LOW); //D9 - right backward
  digitalWrite(6, LOW); //D6 - left backward
  digitalWrite(5, LOW); //D5 - left forward
  Serial.print("motors disabled");:
}

wheels::forward(int ForwardLength, int ForwardSpeed)
{
  analogWrite(5, ForwardSpeed);
  analogWrite(10, ForwardSpeed);
  _DevisedForward = ForwardLength;
  delay(_DevisedForward);
  analogWrite(5, 0);
  analogWrite(10, 0);
  Serial.print("moving forward");
}

wheels::backward(int BackwardLength, int BackwardSpeed)
{
  analogWrite(6, BackwardSpeed);
  analogWrite(9, BackwardSpeed);
  _DevisedBackward = BackwardLength * 1000;
  delay(_DevisedBackward);
  analogWrite(6, 0);
  analogWrite(9, 0);
}
wheels::left(int LeftLength, int LeftSpeed) { //Turn the vehicle left (seconds, speed)
  analogWrite(6, LeftSpeed);
  analogWrite(10, LeftSpeed);
  _DevisedLeft = _LeftLength * 1000;
  delay(_DevisedLeft);
  analogWrite(6, 0);
  analogWrite(10, 0);
}
wheels::Right(int RightLength, int RightSpeed) { //Turn the vehicle right (seconds, speed)
  analogWrite(5, RightSpeed);
  analogWrite(9, RightSpeed);
  _DevisedRight = RightLength * 1000;
  delay(_DevisedRight);
  analogWrite(5, 0);
  analogWrite(9, 0);
}
wheeels::leftOrRight(int LeftOrRightSpeed) {
  _DiceRoll = random(1, 2);
  if (_DiceRoll==1) {
    analogWrite(6, 255);
    analogWrite(10, 255);
    _DiceDeviseLeft = LeftOrRightSpeed * 1000;
    delay(_DiceDeviseLeft);
    analogWrite(6, 0);
    analogWrite(10, 0);
  }
  if (_DiceRoll==2) {
    analogWrite(5, 255);
    analogWrite(9, 255);
    _DiceDeviseRight = LeftOrRightSpeed * 1000;
    delay(_DiceDeviseRight);
    analogWrite(5, 0);
    analogWrite(9, 0);
  }
}
