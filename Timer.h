#ifndef Timer_h
#define Timer_h

#include "Arduino.h"

class Timer {  // Creates a timer object that returns true if the allotted duration has passed.
  private:
    long unsigned int _startTime;
    long unsigned int _duration;
    bool _isTriggered;
  public:
    bool isTriggered();
    void reset();
    void setDuration(unsigned long t);
    Timer(unsigned int duration) {
      Serial.println("Timer constructed.");
      this->_duration = duration;
      this->_isTriggered = false;
      this->_startTime = millis();
    }

};

#endif
