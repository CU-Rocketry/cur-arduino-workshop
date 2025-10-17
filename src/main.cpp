#include <Arduino.h>

// #define is basically automatic find
// and replace
// everywhere you write LED_PIN, the
// compiler writes 9
#define LED_PIN 9
#define BUTTON_PIN 10

// integer data type (16-bit signed)
int buttonState = 0;

// floating point (32-bit)
float temperature = 0.0;
// floating point (64-bit)
double pressure = 0.0;

// strings act like arrays of characters
String message = "Hello, world!";

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}