#include <DebouncedButton.h>

DebouncedButton button(2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (button.read()) {
    Serial.println("Button pressed!");
  }
}
