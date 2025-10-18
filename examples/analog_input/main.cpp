#include <Arduino.h>

const int led_pin = 9;
const int pot_pin = A0;

int flash_delay = 0;

void setup() {
  pinMode(led_pin, OUTPUT);
  // analog pins are always input
}

void loop() {
  flash_delay = analogRead(pot_pin);
  
  digitalWrite(led_pin, HIGH);
  delay(flash_delay);
  digitalWrite(led_pin, LOW);
  delay(flash_delay);
}