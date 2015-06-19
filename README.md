# Qt Creator Arduino configuration

This repository creates a template that you allows you to configure Qt Creator as your Arduino's IDE.

Portuguese spearks / Pessoal de lingua portuguesa: Postei uma série de videos no youtube de como configurar todo seu ambiente de desenvolvimento, confira em https://www.youtube.com/user/cleitonsouza01/playlists


## About Qt Creator
Qt Creator provides a cross-platform where you can developer from Windows, Linux or Mac. Is a very advanced IDE when provide a lot of smart things to help you develop more quickly and easily. Some main features of Qt Creator:
- Rapid code navigation tools
- Syntax highlighting and code completion
- Static code checking and style hints as you type
- Support for source code refactoring
- Context sensitive help
- Code folding
- Parenthesis matching and parenthesis selection modes

With all these features and more, Qt Creator can be lightweight, and for me, is one of the best IDE's available.


## About my template
This repository creates a template that you allows you to configure Qt Creator as your Arduino's IDE.

What you need to use (*pre-requisites*):
* PC running Linux
- Windows and Mac can use it too, but some small changes are necessary
- In the future I will provide files ready to use in all environments
* Arduino IDE 1.6.3
- http://www.arduino.cc/en/Main/Software
* Arduino-Makefile 1.3.4
- https://github.com/sudar/Arduino-Makefile
* Qt Creator 3.3.1
- http://www.qt.io/download-open-source
* GTKTerm version 0.99
- Can be any other serial monitor, but I chose it because is very lightweight

## Some screenshots
![Choose template image](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_choose_temp.png?raw=false "Screen where you can choose template")

![Choose Parameters image](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_choose_param.png?raw=false "Screen where you can choose Parameters")

![Choose Board image](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_choose_board.png?raw=false "Screen where you can choose Board")

![Programing C++ Style](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_example_cpp_style.png?raw=false "Programing C++ Style")

![Programing in Skecth style](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_example_sketch_style.png?raw=false "Programing in Skecth style")


## Boards supported and tested
Theoretically this template can support all boards that Arduino-MakeFile support, it's mean:
* Supports all official AVR-based Arduino boards
* Supports chipKIT
* Supports Teensy 3.x (via Teensyduino)

I Already tested successfully with:
- Arduino Mega 2560
- Arduino Pro
- Arduino Uno
If you have tested any other boards, please tell me about your experience!


## How install
In this repository you will find two folders:
* arduino_cpp_style
- This folder contains a C++ style Arduino template
* arduino_sketch_style
- This folder contains a Sketch style Arduino template
- (the same style used in the official Arduino IDE)


INSTALLATION INSTRUCTIONS
-------------------------

1) Close Qt Creator

2) Execute the following commands* in Terminal:

```
cd ~/Qt5.4.1/Tools/QtCreator/share/qtcreator/templates/wizards/
git clone https://github.com/cleitonsouza01/qt-creator-arduino
```
You should see something similar to this:

```
Cloning into 'qt-creator-arduino'...
remote: Counting objects: 30, done.
remote: Compressing objects: 100% (27/27), done.
remote: Total 30 (delta 9), reused 18 (delta 2), pack-reused 0
Unpacking objects: 100% (30/30), done.
Checking connectivity... done.
```
* Note:
* You may need to change the first command to match your Qt installation.
* My Qt installation was ~/Qt5.4.1/Tools/QtCreator/share/qtcreator/templates/wizards/
* A tip is to type in ~/Qt then hit [TAB] to get the shell to auto-complete stuff for you.

3) Open Qt Creator

4) Click on:
File > New File or Project
Select Arduino project

And then have fun!


## Author
* Cleiton Souza (cleiton@tutamail.com)
* Jason Jorgenson (jjorgenson@gmail.com)

## Similar works
I found one Qt template created by Philippe Lucidarme (http://5lair.free.fr) but it is based on an old version of Qt Creator / Arduino-Mk version, and it seems that Philippe no longer updates this template.
