#include <Arduino.h>

  // global variables
int numBlinks;
String msg="How many blinks do you want:";
int i;
int bt=500;
int redPin=12;

void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
}

void loop() {
Serial.println(msg);
while (Serial.available()==0)
{
  /* code */
}
numBlinks=Serial.parseInt();
for (i = 1; i <= numBlinks; i=i+1)
{
  digitalWrite(redPin,HIGH);
  delay(bt);
  digitalWrite(redPin,LOW);
  delay(bt);
}




}