#include <Arduino.h>
  // This one is stupid, platformIO serial monitor behaves differently from arduino IDE and therefor will not interpret strings as variables correctly.

  // global variables
  int myNumb;
  int buzzPin = 9;
  String msg = "Please enter your number:";
  int dt = 2000;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while (Serial.available()==0)
  {
    // Wait for input.
  }
  
  myNumb = Serial.parseInt();
  if (myNumb>5)
  {
    analogWrite(buzzPin,128);
    delay(dt);
    analogWrite(buzzPin,0);
    Serial.println(myNumb);
  }
  


}