#include <Arduino.h>

  // global variables
  int myVoltPin=A2; // Potpin
  int readVal;
  float V2;
  int delayT=250;

  int greenLED=3;
  int yellowLED=5;
  int redLED=9;
  float LEDVal;


void setup() {
  Serial.begin(9600);
  pinMode(myVoltPin,INPUT);
  pinMode(greenLED,OUTPUT);
  // pinMode(yellowLED,OUTPUT);
  // pinMode(redLED,OUTPUT);


}

void loop() {
  readVal=analogRead(myVoltPin);
  LEDVal = (255./1024.)*readVal;
  analogWrite(greenLED,LEDVal);
  Serial.println(LEDVal);




}