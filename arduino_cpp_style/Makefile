# Parameters for compiling
ARDUINO_DIR     = %ARDUINO_DIR%
AVR_TOOLS_DIR	= %AVR_TOOLS_DIR%
TARGET          = output
ARDUINO_LIBS    = %ARDUINO_LIBS%

#If had problem on compilation (-mmcu), try set MCU manualy
#MCU             = atmega328p
#F_CPU           = 16000000

# Avrdude code for programming
BOARD_TAG	= %BOARD_TAG%
#BOARD_SUB	= // Some board have sub, example board MEGA had atmega2560 as sub, read more in https://code.google.com/p/arduino/wiki/Platforms
MONITOR_PORT	= %ARDUINO_PORT%
AVRDUDE			= $(ARDUINO_DIR)/hardware/tools/avr/bin/avrdude
AVRDUDE_CONF	= $(ARDUINO_DIR)/hardware/tools/avr/etc/avrdude.conf
#AVRDUDE_ARD_PROGRAMMER	= wiring
#AVRDUDE_ARD_BAUDRATE	= 115200


# Arduino makefile
include %ARDUINO_MAKEFILE_DIR%/Arduino.mk

