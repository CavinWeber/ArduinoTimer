#include "Arduino.h"
#include "Timer.h"

bool Timer::isTriggered() {
  if (millis() - this->_startTime >= this->_duration) {
    //    Serial.println("Timer marked as triggered.");
    _isTriggered = true;
    return true;
  }
  else {
    return false;
  }
}

void Timer::reset() {
  _startTime = millis();
  _isTriggered = false;
}

void Timer::setDuration(unsigned int t) {
  _duration = t;
  reset();
}

