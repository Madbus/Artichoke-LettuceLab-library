
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

wheels::diasble()
{
  digitalWrite(10, LOW);//D10- right forward
  digitalWrite(9, LOW); //D9 - right backward
  digitalWrite(6, LOW); //D6 - left backward
  digitalWrite(5, LOW); //D5 - left forward
  Serial.print("motors disabled");
}
