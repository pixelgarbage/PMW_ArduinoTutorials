#include <Arduino.h>

// global variables

int yellowLED=8;
int greenLED=9;
int redLED=10;
int blueLED=11;

int longWait=1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  pinMode(yellowLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
}

void loop() {
  // test loop on onboard LED
  digitalWrite(13,HIGH);
  delay(50);
  digitalWrite(13,LOW);
  delay(1000);
  Serial.println("Loop Completed");

  // binary counter

  // 0000 = 0
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(longWait);

  // 0001 = 1
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  delay(longWait);

  // 0010 = 2
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  delay(longWait);

  // 0011 = 3
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(longWait);

  // 0100 = 4
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(longWait);

  // 0101 = 5
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  delay(longWait);

  // 0110 = 6
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  delay(longWait);

  // 0111 = 7
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(longWait);

  // 1000 = 8
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(longWait);

  // 1001 = 9
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  delay(longWait);

  // 1010 = 10
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  delay(longWait);

  // 1011 = 11
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(longWait);

  // 1100 = 12
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(longWait);

  // 1101 = 13
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  delay(longWait);

  // 1110 = 14
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  delay(longWait);

  // 1111 = 15
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(longWait);

}