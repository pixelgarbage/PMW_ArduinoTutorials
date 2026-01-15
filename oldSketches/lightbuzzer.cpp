#include <Arduino.h>

  // global variables
int lightPin=A0;
int lightVal;
int dv;
int buzzPin=6;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin,INPUT);
  pinMode(buzzPin,OUTPUT);
}



void loop() {
  lightVal = analogRead(lightPin);
  dv =  (-9980./1024.)*lightVal-2000;

  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(dv);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(dv);
  
  //Serial.println(lightVal);
  Serial.println(dv);
}