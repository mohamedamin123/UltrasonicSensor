#ifndef ULTRASONICSENSOR_H
#define ULTRASONICSENSOR_H
#include "Arduino.h"
class UltrasonicSensor {
public:
 UltrasonicSensor(int trigPin, int echoPin);
 float getDistance();
private:
int _trigPin, _echoPin;
};
#endif