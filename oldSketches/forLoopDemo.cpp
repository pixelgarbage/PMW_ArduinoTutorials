#include <Arduino.h>

  // global variables
int yellowLED=6;
int redLED=9;
int delayT=250;
int yellowBlink=5;
int redBlink=3;
int i;

void setup() {
  Serial.begin(9600);
  pinMode(yellowLED,OUTPUT);
  pinMode(redLED,OUTPUT);
}

void loop() {

  // Yellow LED blinks 3 times.
  for (i = 1; i <= yellowBlink; i=i+1)
  {
  
  digitalWrite(yellowLED,HIGH);
  delay(delayT);
  digitalWrite(yellowLED,LOW);
  delay(delayT);
  }



  // Red LED blinks 5 times.
for (i = 1; i <= redBlink; i=i+1)
{
  digitalWrite(redLED,HIGH);
  delay(delayT);
  digitalWrite(redLED,LOW);
  delay(delayT);
}



 // Serial.println(LEDVal);




}