#include <Arduino.h>

  // global variables
int lightPin=A0;
int lightVal;
int dv=250;
int greenPin=5;
int redPin=6;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin,INPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
}



void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dv);

  if (lightVal>500)
  {
    digitalWrite(greenPin,HIGH);
    digitalWrite(redPin,LOW);
  }
  
  if (lightVal<=500)
  {
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,HIGH);
  }
  

}