/*
Project:	%ProjectName%
Board:		%BOARD_TAG%
MCU:		%BOARD_MCU%	
FRENQUENCY:	%BOARD_F%

Created using QtCreator
*/

#include <Arduino.h>

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
