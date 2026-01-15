#include <Arduino.h>
  // This one is stupid, platformIO serial monitor behaves differently from arduino IDE and therefor will not interpret strings as variables correctly.

  // global variables
  int redPin = 8;
  int greenPin = 9;
  int bluePin = 10;
  String myColor;
  String msg="What color do you want?";

void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
Serial.println(msg);
while (Serial.available()==0)
{
  // Wait
}

myColor = Serial.readString();

if (myColor=="r")
{
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if (myColor=="g")
{
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
}

if (myColor=="b")
{
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
}

if (myColor=="0")
{
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}


if (myColor=="a")
{
  digitalWrite(redPin,LOW);
  analogWrite(greenPin,255);
  analogWrite(bluePin,50);
}

  
}