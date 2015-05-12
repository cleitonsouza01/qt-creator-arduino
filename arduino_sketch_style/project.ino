/*
Project:	%ProjectName%
Board:		%BOARD_TAG%
MCU:		%BOARD_MCU%	
FRENQUENCY:	%BOARD_F%

Created using Qt Creator
*/
#ifndef ARDUINO_H
#define ARDUINO_H
#include <Arduino.h>
#endif

//******************************
//* FUNCTIONS SECTION
//* Always create your functions here, before setup() and loop() functions
#define LED_PIN     13
#define DELAY_MS    300
bool vStatus=false;

void updateLED()
{
    if (vStatus)
    {
        digitalWrite(LED_PIN, LOW);
    }
    else
    {
        digitalWrite(LED_PIN, HIGH);
    }
    vStatus = !vStatus;
}



//******************************
//* SETUP AND LOOP SECTION
//* Always leave setup() and loop() functions at the end of file
void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    updateLED();
    delay(DELAY_MS);
}


