#include <Arduino.h>

  // global variables
String myName;
String msg = "What is your name? ";
String msg2 = "Hello ";
String msg3 = ", welcome to Arduino!";

void setup() {
  Serial.begin(9600);

}

void loop() {
Serial.println(msg);
while (Serial.available()==0)
{
  /* code */
}
myName=Serial.readString();
Serial.print(msg2);
Serial.print(myName);
Serial.println(msg3);

}