#include <HCSR04.h>

const uint8_t TRIG = 7;
const uint8_t ECHO = 6;
uint32_t distance_cm;

HCSR04 sensor(TRIG, ECHO);

void setup() {
  Serial.begin(9600);
}

void loop() {
  distance_cm = sensor.read_cm();
  Serial.println("Distance: " + String(distance_cm));
  delay(300);
}
