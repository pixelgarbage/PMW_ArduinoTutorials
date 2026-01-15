#include <Arduino.h>

  // global variables
  int myVoltPin=A2;
  int readVal;
  float V2;
  int delayT=250;


void setup() {
  Serial.begin(9600);

}

void loop() {
  readVal=analogRead(myVoltPin);
  V2=(5./1024.)*readVal;
  Serial.print(V2);
  Serial.println(" V");
  Serial.println(readVal);
  delay(delayT);

}