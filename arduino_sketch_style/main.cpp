/*
Project:	%ProjectName%
Board:		%BOARD_TAG%
MCU:		%BOARD_MCU%	
FRENQUENCY:	%BOARD_F%

Created using QtCreator
*/
#ifndef ARDUINO_H
#define ARDUINO_H
#include <Arduino.h>
#endif

int main()
{
    // Initialize Arduino Librairies
    init();

    setup();

    while (1)
    {
        loop();
    }

}
