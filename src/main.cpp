#include <Arduino.h>

 // Making a change! WoW
  // Build a circuit with two push button switches with an LED. One button brightens the LED the other button dims it.


  // global variables
int LEDPin = 6; // This pin controls the red LED on analog pin 6.
int buttonPinBright = 12; // Input from button that makes LED brighter.
int buttonPinDim = 11; // Input from button that makes LED dimmer.
// int buttonBrightRead; // ------------------  ????? This var does nothing??
int dt = 100; // Delay Time, used to reduce button input jitter.
int delayBlink = 200; // Delay for LED blink at max brightness.

int LEDVal = 0; // Analog value of the LED pin 0-255.

int buttonBrightNew; // New state of the bright button. This is a boolean where 1 is off and 0 is on.
int buttonBrightOld = 1; // Old state of the bright button. 1 is off.
int buttonDimNew; // New state of the dim button.
int buttonDimOld = 1; // old state of the dim button. 1 is off.
int blinkCount = 2; // Number of blinks at max brightness.
int i; // Blink integer.


void setup() {
  Serial.begin(9600);
  pinMode(LEDPin,OUTPUT);
  pinMode(buttonPinBright,INPUT);
  pinMode(buttonPinDim,INPUT);
}

void loop() {

// So I need a block of code that adds 51 or decriments 51 every time one of the buttons is pushed.



buttonBrightNew = digitalRead(buttonPinBright); // Write bright button input data to var. Boolean where 0 is activated.
buttonDimNew = digitalRead(buttonPinDim); // Write bright button to input var. Boolean where 0 is activated.
Serial.print(buttonBrightNew);
Serial.println(buttonDimNew);
Serial.println(LEDVal);

if (buttonBrightOld == 0 && buttonBrightNew == 1) // This activates the next code block on release, it prevents multiple inputs from a single button press.
{
 // Code block activates when button bright is pushed.
  if (LEDVal >= 0 && LEDVal < 255) // If LED value is less than or equal to 0 AND less than 255 execute code block.
  {
    LEDVal = LEDVal + 51;
    analogWrite(LEDPin,LEDVal);
    Serial.println("IF statement 1 cleared!");
  }
  if (LEDVal >= 255)
  {
    for (i = 0; i < blinkCount; i++)
    {
    digitalWrite(LEDPin,LOW);
    delay(delayBlink);
    digitalWrite(LEDPin,HIGH);
    delay(delayBlink);
    analogWrite(LEDPin,255);
    }
    
  }
  
}

if (buttonDimOld == 0 && buttonDimNew == 1) // This activates the next code block on release, it prevents multiple inputs from a single button press.
{
  if (LEDVal > 0) // If LED value is greater than 0.
  {
    LEDVal = LEDVal - 51;
    analogWrite(LEDPin,LEDVal);
  }
}



buttonBrightOld = buttonBrightNew; // Keep track of previous button stat var for every loop.
buttonDimOld = buttonDimNew; // Keep track of dimmer button var.
delay(dt); // Delay in cycle reduces switch bounce noise when switch is depressed.

}