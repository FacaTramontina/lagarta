#include "Arduino.h"

#define SERIAL_RATE  115200
#define FREQUENCY 1000  
#define RESOLUTION 10 


// Motors config 
#define channel1 0
#define channel2 1

#define AIN1  19
#define AIN2  18
#define PWMA  5

#define BIN1  21
#define BIN2  22
#define PWMB  23


// Degub LED
#define  LED_BUILD_IN  2


// QTR pins 
const uint8_t SensorPins[] = {36, 39, 34, 35, 32, 33, 25, 26};
const uint8_t SensorCount = sizeof(SensorPins) / sizeof(SensorPins[0]);