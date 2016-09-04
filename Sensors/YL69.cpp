/*
FILE: YL69.cpp
PURPOSE: YL69 (moisture sensor) for Arduino.
DATE: July 2, 2016
*/

#include "Arduino.h"
#include "Sensors.h"

int YL69::read(int pin) {
    
    return analogRead(pin);

};

void YL69::prettyPrint(int pin) {
    
    Serial.print("Moisture Level: ");
    Serial.print(analogRead(pin));
    Serial.println();
    
}
//End class YL69.