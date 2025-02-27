#include "UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor(int trigPin, int echoPin) {
 _trigPin = trigPin;
 _echoPin = echoPin;
 pinMode(_trigPin, OUTPUT);
 pinMode(_echoPin, INPUT);
}
float UltrasonicSensor::getDistance() {
 digitalWrite(_trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(_trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(_trigPin, LOW);
 long duration = pulseIn(_echoPin, HIGH);
 return duration * 0.034 / 2;
}
