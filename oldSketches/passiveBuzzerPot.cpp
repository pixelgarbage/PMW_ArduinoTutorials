#include <Arduino.h>
  // This one is stupid, platformIO serial monitor behaves differently from arduino IDE and therefor will not interpret strings as variables correctly.

  // global variables
  int buzzPin = 9;
  int delayTime1 = 1;
  int delayTime2 = 2;
  int i;


void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);

}

void loop() {
for (i=1;i<=100;i=i+1) {
  digitalWrite(buzzPin, HIGH);
  delay(delayTime1);
  digitalWrite(buzzPin, LOW);
  delay(delayTime1);
}

for (i=1;i<=100;i=i+1) {
  digitalWrite(buzzPin, HIGH);
  delay(delayTime2);
  digitalWrite(buzzPin, LOW);
  delay(delayTime2);
}


}