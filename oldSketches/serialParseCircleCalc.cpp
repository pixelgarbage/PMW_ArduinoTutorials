#include <Arduino.h>

  // global variables
float radius;
String msg="What is the radius of your circle?";
float area;
String msg2="Your circle has an area of ";
float pi=3.14;

void setup() {
  Serial.begin(9600);

}

void loop() {
Serial.println(msg);
while (Serial.available()==0)
{
  /* code */
}
// This seems buggy, could be platformio causing the issue but for some reason the following block of code is executing twice.
// It's only parsing the radius once.
radius = Serial.parseFloat();
area = pi*radius*radius;
Serial.print(msg2);
Serial.println(area);


}