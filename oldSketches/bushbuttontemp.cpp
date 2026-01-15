#include <Arduino.h>

  // global variables
int LEDPin = 8;
int buttonPin = 12;
int buttonRead;
int dt = 100;

int LEDState = 0;
int buttonNew;
int buttonOld = 1;



void setup() {
  Serial.begin(9600);
  pinMode(LEDPin,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  buttonRead = digitalRead(buttonPin);

  if (buttonRead == 1) // Button is not depressed, circuit is open, resistance is low, voltage remains high.
  {
    digitalWrite(LEDPin,LOW);
  }

  if (buttonRead == 0) // Button is depressed, closing circuit, resistance increases by 10k and voltage drops to 0.
  {
    digitalWrite(LEDPin,HIGH);
  }
  

  Serial.println(buttonRead);
  delay(dt);

}