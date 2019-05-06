// HCSR04 - Library for HR-SC04 Ranging Module.
// Adapted from: https://github.com/JRodrigoTech/Ultrasonic-HC-SR04

#include "HCSR04.h"

HCSR04::HCSR04(uint8_t TP, uint8_t EP)
{
  pinMode(TP, OUTPUT);
  pinMode(EP, INPUT);
  _pinTrig = TP;
  _pinEcho = EP;
}

uint32_t HCSR04::read_cm()
{
  digitalWrite(_pinTrig, LOW);
  delayMicroseconds(5);
  digitalWrite(_pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(_pinTrig, LOW);
  _duration = pulseIn(_pinEcho, HIGH, _TIME_OUT);
  if (_duration == 0) {
    _duration = _TIME_OUT;
  }
  return _duration * SOUND_SPEED_CMS / (2 * 1000000);
}
