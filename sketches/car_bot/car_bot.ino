#include <L298NMini.h>
#include <HCSR04.h>

const uint8_t IN1 = 9;
const uint8_t IN2 = 8;
const uint8_t IN3 = 7;
const uint8_t IN4 = 6;
const uint8_t TRIG = 11;
const uint8_t ECHO = 12;
uint32_t distance_cm;
uint32_t randNumber;

L298NMini motor1(IN1, IN2);
L298NMini motor2(IN3, IN4);

HCSR04 sensor(TRIG, ECHO);

void setup() {
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
    delay(200);
    
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
    delay(550);
    
  } else {
    
    motor1.forward();
    motor2.forward();
    delay(100);
  }
  
  digitalWrite(LED_BUILTIN, LOW);
}

