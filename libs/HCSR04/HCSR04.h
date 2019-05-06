#ifndef HCSR04_h
#define HCSR04_h

#include "Arduino.h"

class HCSR04
{
  public:
    HCSR04(uint8_t TP, uint8_t EP);
    const uint16_t SOUND_SPEED_CMS = 34300; // 3.4300cm/s
    uint32_t read_cm();

  private:
    const uint16_t _TIME_OUT = 3000; // 3000 µs = 50cm // 30000 µs = 5 m
    uint8_t _pinTrig;
    uint8_t _pinEcho;
    uint32_t _duration;
};

#endif
