#include <Arduino.h>

const int analog_pin = A0;

int analog = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  analog = analogRead(analog_pin);
  Serial.print("Voltage: ");
  Serial.print(analog * (5.0 / 1023.0));
  Serial.println(" V");
  delay(100);
}