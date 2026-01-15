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
  // Serial.begin(9600);
  pinMode(LEDPin,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
buttonNew = digitalRead(buttonPin); // Write current button input data to var.

if (buttonOld == 0 && buttonNew == 1) // If the previous button value is 0 and the new value is 1, continue to the LED logic.
{
  if (LEDState == 0) // If LED is off then set it to on. Else set it to off.
  {
    digitalWrite(LEDPin,HIGH);
    LEDState = 1;
  }
  else {
    digitalWrite(LEDPin,LOW);
    LEDState = 0;
  }
  
}

buttonOld = buttonNew; // Keep track of previous button stat var for every loop.
delay(dt); // Delay in cycle reduces switch bounce noise when switch is depressed.

}