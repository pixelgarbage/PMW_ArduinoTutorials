#include <Arduino.h>

  // global variables
  int myVoltPin=A2;
  int readVal;
  float V2;
  int delayT=250;

  int greenLED=3;
  int yellowLED=5;
  int redLED=9;


void setup() {
  Serial.begin(9600);
  pinMode(myVoltPin,INPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(redLED,OUTPUT);


}

void loop() {
  readVal=analogRead(myVoltPin);
  V2=(5./1024.)*readVal;
  Serial.print(V2);
  Serial.println(" V");
  Serial.println(readVal);


    // Green LED turns on at less than 3 volts.
  if (V2>=0 && V2<3)
  {
    digitalWrite(greenLED,HIGH);
  }
  if (V2>=3)
  {
    digitalWrite(greenLED,LOW);
  }

  // Yellow LED turns on between 3-4 volts.
  if (V2>=3 && V2<4)
  {
    digitalWrite(yellowLED,HIGH);
  }
  if (V2<3 || V2>=4)
  {
    digitalWrite(yellowLED,LOW);
  }
  
  // Red LED turns on above 4 volts.
  if (V2>=4)
  {
    digitalWrite(redLED,HIGH);
  }
  if (V2<4)
  {
    digitalWrite(redLED,LOW);
  }
  
  

  delay(delayT);

}