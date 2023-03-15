#include <DebouncedButton.h>

#define BUTTON_COUNT 2

DebouncedButton buttons[BUTTON_COUNT] = {
  DebouncedButton(D10),
  DebouncedButton(D11)
};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < BUTTON_COUNT; i++) {
    if (buttons[i].read()) {
      Serial.print("Button ");
      Serial.print(i);
      Serial.println(" pressed!");
    }
  }
}

