#include <L298NMini.h>
#include <HCSR04.h>

const uint8_t IN1 = 2;
const uint8_t IN2 = 3;
const uint8_t IN3 = 4;
const uint8_t IN4 = 5;
const uint8_t TRIG = 6;
const uint8_t ECHO = 7;
uint32_t distance_cm;
uint32_t randNumber;

L298NMini motor1(IN1, IN2);
L298NMini motor2(IN3, IN4);

HCSR04 sensor(TRIG, ECHO);

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  randomSeed(analogRead(0));

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
}

void loop() {
  distance_cm = sensor.read_cm();

  if (distance_cm < 20) {
    digitalWrite(LED_BUILTIN, HIGH);

    motor1.stop();
    motor2.stop();
    delay(500);
    
    motor1.backward();
    motor2.backward();
    delay(500);
    
    randNumber = random(0, 10);
    if (randNumber >= 5) {
      // pivot right
      motor2.stop();
      motor1.backward();
    } else {
      // pivot left
      motor1.stop();
      motor2.backward();
    }
    delay(750);
    
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    
    motor1.forward();
    motor2.forward();
  }
}

