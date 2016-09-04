
#include "Sensors.h"
YL69 yl69; //Moisture
DHT11 dht11; //Temperature and humidity
LM393 lm393; //Light

//Moisture pins
int yl69A = 16;
int yl69D = 7;

//Temperature pins
int dht11A = 14;
int dht11D = 6;

//Light pins
int lm393A = 15;
int lm393D = 5;

void setup() {

  //Power
  pinMode(yl69D, OUTPUT);
  pinMode(dht11D, OUTPUT);
  pinMode(lm393D, OUTPUT);

  //Readings. Note, dht11 declarse pinMode internally.
  pinMode(yl69A, INPUT);
  pinMode(lm393A, INPUT);

  Serial.begin(9600);

}

void loop() {

  //Send power to the sensors.
  digitalWrite(yl69D, HIGH);
  digitalWrite(lm393D, HIGH);
  digitalWrite(dht11D, HIGH);
  delay(3000);
  
  int chk = dht11.read(dht11A);
  
  switch (chk)
  {
    case 0:
       Serial.println("OK"); 
       dht11.prettyPrint(); 
       break;
    case -1: Serial.println("Checksum error"); break;
    case -2: Serial.println("Time out error"); break;
    default: Serial.println("Unknown error"); break;
  }

  //Moisture
  yl69.read(yl69A);
  yl69.prettyPrint(yl69A);

  //Light
  lm393.read(lm393A);
  lm393.prettyPrint(lm393A);

  //Turn-off the power
  digitalWrite(yl69D, LOW);
  digitalWrite(lm393D, LOW);
  digitalWrite(dht11D, LOW);
  delay(5000);



}
