#include<cvzone.h>

SerialData serialData(1,3); 
int valsRec[1];

#define LED 9
#define LED2 6 

void setup() {
  // put your setup code here, to run once:

  //Serial.begin(9600); 
  serialData.begin(9600); 
  pinMode(LED,OUTPUT); 
  pinMode(LED2,OUTPUT); 

}

void loop() {
  // put your main code here, to run repeatedly:

  serialData.Get(valsRec);
  //digitalWrite(LED,valsRec[0]);
  analogWrite(LED, valsRec[0]); 
  analogWrite(LED2, valsRec[0]); 
 

}
