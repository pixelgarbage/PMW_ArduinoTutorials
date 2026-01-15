#include <Arduino.h>

    // global variables
int j=1;
int waitT=750;
String myString=" + ";
String mess1="A circle with radius ";
String mess2=" has the area of ";
String mess3=".";

int x=12;
int y=11;
int z;
float pi=3.14;
float r=2;
float area;

void setup() {
  Serial.begin(9600);

}

void loop() {
  area=pi*r*r;
  Serial.print(mess1);
  Serial.print(r);
  Serial.print(mess2);
  Serial.print(area);
  Serial.println(mess3);
  r=r+.5;
  delay(waitT);


}
