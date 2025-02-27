#include "UltrasonicSensor.h"
UltrasonicSensor sensor(9, 10);
void setup() {
 Serial.begin(9600);
}
void loop() {
 Serial.print("Distance: ");
 Serial.print(sensor.getDistance());
 Serial.println(" cm");
 delay(500);
}
