#include <Arduino.h>
  // This one is stupid, platformIO serial monitor behaves differently from arduino IDE and therefor will not interpret strings as variables correctly.
  
  // global variables
String msg="Please select your color. Your options are r, g and y. Multi character inputs perform badly in platformIO and send_on_enter seems to add additional invisible characters";
String colorSelect;
int greenLED=5;
int yellowLED=6;
int redLED=12;

void setup() {
  Serial.begin(9600);
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(redLED,OUTPUT);

}

void loop() {
  // Initial prompt message
Serial.println(msg);
while (Serial.available()==0)
{
  // Wait for input
}
  // Read serial input for string and assign to colorSelect variable.
colorSelect=Serial.readString();
delay(2);
  // Print colorSelect variable for debug
  // Serial.print(colorSelect);


  // This SHOULD activate this codeblock IF the colorSelect variable is either green, yellow or red. It currently does not. 
if (colorSelect=="g" || colorSelect=="G")
{
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
}

if (colorSelect=="y" || colorSelect=="Y")
{
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
}



if (colorSelect=="r" || colorSelect=="R")
{
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,HIGH);
}


}