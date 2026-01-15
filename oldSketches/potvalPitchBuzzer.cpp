#include <Arduino.h>

  // global variables

int buzzPin = 9;
int buzzTime1 = 500;
int buzzTime2 = 80;
int potVal;
int potPin = A3;
int buzzPitch;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin,INPUT);
}

void loop() {

potVal = analogRead(potPin);

buzzPitch = (9940./1024.)*potVal+60;
digitalWrite(buzzPin,HIGH);
delayMicroseconds(buzzPitch);
digitalWrite(buzzPin,LOW);
delayMicroseconds(buzzPitch);

Serial.println(potVal);

  //if (potVal>1000)
 // {
  //  digitalWrite(buzzPin,HIGH);
  //  delayMicroseconds(buzzTime2);
  //  digitalWrite(buzzPin,LOW);
  //  delayMicroseconds(buzzTime2);
  //}
  
 // if (potVal<50)
  ////{
  //  digitalWrite(buzzPin,HIGH);
  //  delayMicroseconds(buzzTime1);
  //  digitalWrite(buzzPin,LOW);
  //  delayMicroseconds(buzzTime1);
  //}
  


}