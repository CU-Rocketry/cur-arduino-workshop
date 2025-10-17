#include <Arduino.h>

const int led_pin = 9;
const int btn_pin = 8;

int btn_state = 0;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(btn_pin, INPUT);
}

void loop() {
  btn_state = digitalRead(btn_pin);
  digitalWrite(led_pin, btn_state);
}