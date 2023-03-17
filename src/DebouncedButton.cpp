#include "DebouncedButton.h"

DebouncedButton::DebouncedButton(uint8_t pin, uint16_t debounceDelay) :
  _pin(pin),
  _debounceDelay(debounceDelay),
  _lastButtonState(HIGH),
  _lastDebounceTime(0)
{
  pinMode(_pin, INPUT_PULLUP);
}

bool DebouncedButton::read()
{
  bool buttonState = digitalRead(_pin);
  if (buttonState != _lastButtonState) {
    if ((millis() - _lastDebounceTime) > _debounceDelay) {
      _lastDebounceTime = millis();
      _lastButtonState = buttonState;
      return _lastButtonState == LOW;
    }
  }
  return false;
}
