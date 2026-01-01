#include <Arduino.h>

    // global variables

int greenLED=9;


void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED,OUTPUT);

}

void loop() {

  analogWrite(greenLED,0);
  delay(500);
  analogWrite(greenLED,50);
  delay(500);
  analogWrite(greenLED,100);
  delay(500);
  analogWrite(greenLED,150);
  delay(500);
  analogWrite(greenLED,200);
  delay(500);
  analogWrite(greenLED,255);
  delay(400);

}