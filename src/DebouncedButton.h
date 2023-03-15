#ifndef DebouncedButton_h
#define DebouncedButton_h

#include "Arduino.h"

class DebouncedButton {
  public:
    DebouncedButton(uint8_t pin);
    bool read();
  private:
    uint8_t _pin;
    uint16_t _debounceDelay;
    bool _lastButtonState;
    uint32_t _lastDebounceTime;
};

#endif
