#include <Arduino.h>

#include "Wire.h"
#include "I2Cdev.h"
#include "ADXL345.h"

ADXL345 accel;
int16_t ax, ay, az;

void setup()
{
  Serial.begin(9600);

  Wire.begin();
  accel.initialize();
}

void loop()
{
  accel.getAcceleration(&ax, &ay, &az);
  Serial.print("x: ");
  Serial.print(ax);
  Serial.print(" y: ");
  Serial.print(ay);
  Serial.print(" z: ");
  Serial.print(az);
  Serial.println();

  delay(100);
}