#include <L298NMini.h>

const uint8_t IN1 = 11;
const uint8_t IN2 = 10;
const uint8_t IN3 = 9;
const uint8_t IN4 = 8;

L298NMini motor1(IN1, IN2);
L298NMini motor2(IN3, IN4);

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  motor1.forward();
  motor2.forward();
}
