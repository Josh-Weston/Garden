/*
FILE: Sensors.h
PURPOSE: Sensor Library for Arduino.
DATE: July 2, 2016
NOTE: Compiler will find the appropriate CPP file fro each class.
*/

#ifndef Sensors_H
#define Sensors_H

#include "Arduino.h"

//Soil Moisture Sensor
class YL69 {

    public:
        int read(int pin);
        void prettyPrint(int pin);
    
    //protected:
    //private:

};

//Temperature and Humidity Sensor
class DHT11 {
    
    public:
        int read(int pin);
        int humidity;
        int temperature;
        double dewPoint(double celcius, double humidity);
        double dewPointFast(double celsius, double humidity);
        double fahrenheit(double celsius);
        double kelvin(double celsius);
        void prettyPrint();
    
};

//Light Sensor
class LM393 {
    
    public:
        int read(int pin);
        void prettyPrint(int pin);
    
};

#endif