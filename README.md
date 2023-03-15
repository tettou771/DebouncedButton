# DebouncedButton Library

This library provides a class to debounce button inputs to prevent multiple triggers caused by mechanical switch "bounce".

## Usage

1. Download the DebouncedButton library.
2. In the Arduino IDE, click Sketch > Include Library > Add .ZIP Library, and select the downloaded zip file.
3. In your sketch, include the DebouncedButton library: `#include <DebouncedButton.h>`
4. Create a DebouncedButton object for each button you want to use: `DebouncedButton button(pin);`
5. In the loop() function, call the read() method for each button: `if (button.read()) { ... }`

## Example

Here is a basic example of how to use the DebouncedButton library:

```C++
#include <DebouncedButton.h>

DebouncedButton button(D2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (button.read()) {
    Serial.println("Button pressed!");
  }
}

## Author
This library was created by ChatGPT in response to a request from tettou771. Thank you for using this library.
