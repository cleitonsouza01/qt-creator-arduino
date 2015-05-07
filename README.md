# Qt Creator Arduino configuration

Portuguese spearks / Pessoal de lingua portuguesa: Postei uma série de videos no youtube de como configurar todo seu ambiente de desenvolvimento, confira em https://www.youtube.com/user/cleitonsouza01/playlists

In this repositorie you can found template that you need to configure your Qt Creator as your Arduino IDE.

## About Qt Creator
Qt Creator provides a cross-platform where you can developer from Windows, Linux or Mac. Is a very advanced IDE when provide a lot of smart things to help you develop more quickly and easyly. Some main features of Qt Creator:
- Rapid code navigation tools
- Syntax highlighting and code completion
- Static code checking and style hints as you type
- Support for source code refactoring
- Context sensitive help
- Code folding
- Parenthesis matching and parenthesis selection modes

With all these features and more, Qt Creator can be lightweight, for me one of the best IDE.

## About my template
What you found in this repositorie is one template that setup Qt Creator as Arduino IDE.

What you need to use (*pre-requiriments*):
* PC running Linux (Windows and Mac can use it too, but need change some small things, in future I will provide files ready to use in all environment)
* Arduino IDE 1.6.3 (http://www.arduino.cc/en/Main/Software)
* Arduino-Makefile 1.3.4 (https://github.com/sudar/Arduino-Makefile)
* Qt Creator 3.3.1 (http://www.qt.io/download-open-source/)
* GTKTerm version 0.99 (Can be any other serial monitor, I chosed it because is very lightweight)

## Some screenshots

![Choose template image](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_choose_temp.png?raw=false "Screen where you can choose template")

![Choose Board image](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_choose_board.png?raw=false "Screen where you can choose Board")

![Choose Parameters image](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_choose_param.png?raw=false "Screen where you can choose Parameters")

![Programing C++ Style](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_example_cpp_style.png?raw=false "Programing C++ Style")

![Programing in Skecth style](https://github.com/cleitonsouza01/qt-creator-arduino/blob/master/screenshot/img_example_sketch_style.png?raw=false "Programing in Skecth style")

## How install
In this repositorie you found two folders:
* arduino_cpp_style: This folder you found Arduino template based on C++ style;
* arduino_sketch_style: This folder you found Arduino template based on Skecth style, same style used in Arduino IDE;

To install, just follow steps bellow:

1) Close Qt Creator

2) Execute bellow commands in your linux terminal:

```
master@desk:~$ cd ~/Qt5.4.1/Tools/QtCreator/share/qtcreator/templates/wizards/
master@desk:~/Qt5.4.1/Tools/QtCreator/share/qtcreator/templates/wizards$ git clone https://github.com/cleitonsouza01/qt-creator-arduino
Cloning into 'qt-creator-arduino'...
remote: Counting objects: 30, done.
remote: Compressing objects: 100% (27/27), done.
remote: Total 30 (delta 9), reused 18 (delta 2), pack-reused 0
Unpacking objects: 100% (30/30), done.
Checking connectivity... done.
master@desk:~/Qt5.4.1/Tools/QtCreator/share/qtcreator/templates/wizards$ 

```

3) Open Qt Creator

4) Click on menu File > New File or Project > Select Arduino project and then have fun!

On step 2, you will need to change directory to your directory intallation, in my Qt installation I used ~/Qt5.4.1/Tools/QtCreator/share/qtcreator/templates/wizards/


## Author
Cleiton Souza (cleiton@tutamail.com)


## Similar works
I found one Qt template created by Philippe Lucidarme (http://5lair.free.fr) but based on old Qt Creator / Arduino-Mk version, and mister Philippe no more update her template.

