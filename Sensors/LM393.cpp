/*
FILE: LM393.cpp
PURPOSE: YL69 (light sensor) for Arduino.
DATE: July 2, 2016
*/

#include "Arduino.h"
#include "Sensors.h"

int LM393::read(int pin) {
    
    return analogRead(pin);
    
}

void LM393::prettyPrint(int pin) {
    
    Serial.print("Light Level: ");
    Serial.print(analogRead(pin));
    Serial.println();
    
}