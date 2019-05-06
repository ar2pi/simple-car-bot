// L298NMini - Library for L298N Mini
// Adapted from: https://github.com/AndreaLombardo/L298N

#include "L298NMini.h"

typedef void (*CallBackFunction) ();

L298NMini::L298NMini(uint8_t pinIN1, uint8_t pinIN2) {
  _pinIN1 = pinIN1;
  _pinIN2 = pinIN2;
  _isMoving = false;
  _canMove = true;
  _lastMs = 0;

  pinMode(_pinIN1, OUTPUT);
  pinMode(_pinIN2, OUTPUT);
}

void L298NMini::forward() {
  digitalWrite(_pinIN1, HIGH);
  digitalWrite(_pinIN2, LOW);

  _isMoving = true;
}


void L298NMini::forwardFor(unsigned long delay, CallBackFunction callback) {
  if ((_lastMs == 0) && _canMove) {
    _lastMs = millis();
    this->forward();
  }

  if (((millis() - _lastMs) > delay) && _canMove) {
    this->stop();
    _lastMs = 0;
    _canMove = false;

    callback();

  }
}

void L298NMini::forwardFor(unsigned long delay) {
  this->forwardFor(delay, fakeCallback);
}


void L298NMini::backward() {
  digitalWrite(_pinIN1, LOW);
  digitalWrite(_pinIN2, HIGH);

  _isMoving = true;
}

void L298NMini::backwardFor(unsigned long delay, CallBackFunction callback) {

  if ((_lastMs == 0) && _canMove) {
    _lastMs = millis();
    this->backward();
  }

  if (((millis() - _lastMs) > delay) && _canMove) {
    this->stop();
    _lastMs = 0;
    _canMove = false;

    callback();

  }
}

void L298NMini::backwardFor(unsigned long delay) {
  this->backwardFor(delay, fakeCallback);
}

void L298NMini::run(uint8_t direction) {
  switch (direction) {
    case BACKWARD:
      this->backward();
      break;
    case FORWARD:
      this->forward();
      break;
  }
}

void L298NMini::stop() {
  digitalWrite(_pinIN1, LOW);
  digitalWrite(_pinIN2, LOW);

  _isMoving = false;
}

void L298NMini::reset() {
  _canMove = true;
}

boolean L298NMini::isMoving() {
  return _isMoving;
}

void L298NMini::fakeCallback() {

}