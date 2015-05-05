/*
Project:	%ProjectName%
Board:		%BOARD_TAG%
MCU:		%BOARD_MCU%	
FRENQUENCY:	%BOARD_F%

Created using QtCreator
*/

#include <Arduino.h>

#define LED_PIN     13
#define DELAY_MS    1000

int main()
{
    // Initialize Arduino Librairies
    init();

    pinMode(LED_PIN, OUTPUT);

    while (1)
    {
        digitalWrite(LED_PIN, HIGH);
        delay(DELAY_MS);
        digitalWrite(LED_PIN, LOW);
        delay(DELAY_MS);
    }

}
