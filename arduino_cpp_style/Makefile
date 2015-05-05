# Parameters for compiling
ARDUINO_DIR     = %ARDUINO_DIR%
AVR_TOOLS_DIR	= %AVR_TOOLS_DIR%
TARGET          = output
ARDUINO_LIBS    = %ARDUINO_LIBS%

# If you get "avr-g++: error: missing argument to '-mmcu='"
# you probaly will need to configure MCU and F_CPU parameters
# See MCU list on end of this file
# bellow configuration example to Arduino Pro Mini 5V 16Mhz
#MCU             = atmega328p
#F_CPU           = 16000000

# Avrdude code for programming
BOARD_TAG	= %BOARD_TAG%
# On arduino 1.5 and above, some board have sub, example board MEGA had atmega2560 as sub
# read more in https://code.google.com/p/arduino/wiki/Platforms
#BOARD_SUB	= 
MONITOR_PORT	= %ARDUINO_PORT%
AVRDUDE		= $(ARDUINO_DIR)/hardware/tools/avr/bin/avrdude
AVRDUDE_CONF	= $(ARDUINO_DIR)/hardware/tools/avr/etc/avrdude.conf
#AVRDUDE_ARD_PROGRAMMER	= wiring
#AVRDUDE_ARD_BAUDRATE	= 115200


# Arduino makefile
include %ARDUINO_MAKEFILE_DIR%/Arduino.mk

#Bellow you found MCU values extracted from board.txt file
#atmegang.build.mcu=atmegang
#atmegang.menu.cpu.atmega168.build.mcu=atmega168
#atmegang.menu.cpu.atmega8.build.mcu=atmega8
#bt.menu.cpu.atmega328.build.mcu=atmega328p
#bt.menu.cpu.atmega168.build.mcu=atmega168
#diecimila.menu.cpu.atmega328.build.mcu=atmega328p
#diecimila.menu.cpu.atmega168.build.mcu=atmega168
#esplora.build.mcu=atmega32u4
#ethernet.build.mcu=atmega328p
#fio.build.mcu=atmega328p
#leonardo.build.mcu=atmega32u4
#lilypad.menu.cpu.atmega328.build.mcu=atmega328p
#lilypad.menu.cpu.atmega168.build.mcu=atmega168
#LilyPadUSB.build.mcu=atmega32u4
#megaADK.build.mcu=atmega2560
#mega.menu.cpu.atmega2560.build.mcu=atmega2560
#mega.menu.cpu.atmega1280.build.mcu=atmega1280
#megaADK.build.mcu=atmega2560
#micro.build.mcu=atmega32u4
#mini.menu.cpu.atmega328.build.mcu=atmega328p
#mini.menu.cpu.atmega168.build.mcu=atmega168
#nano.menu.cpu.atmega328.build.mcu=atmega328p
#nano.menu.cpu.atmega168.build.mcu=atmega168
#pro.menu.cpu.16MHzatmega328.build.mcu=atmega328p
#pro.menu.cpu.8MHzatmega328.build.mcu=atmega328p
#pro.menu.cpu.16MHzatmega168.build.mcu=atmega168
#pro.menu.cpu.8MHzatmega168.build.mcu=atmega168
#robotControl.build.mcu=atmega32u4
#robotMotor.build.mcu=atmega32u4
#uno.build.mcu=atmega328p
#yun.build.mcu=atmega32u4
