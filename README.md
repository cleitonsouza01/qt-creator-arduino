# Qt Creator Arduino configuration

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

What you need to use (<b>pre-requiriments</b>):
* PC running Linux (Windows and Mac can use it too, but need change some small things, in future I will provide files ready to use in all environment)
* Arduino IDE 1.6.3 (http://www.arduino.cc/en/Main/Software)
* Arduino-Makefile 1.3.4 (https://github.com/sudar/Arduino-Makefile)
* Qt Creator 3.3.1 (http://www.qt.io/download-open-source/)
* GTKTerm version 0.99 (Can be any other serial monitor, I chosed it because is very lightweight)


## How install
When all pre-requeriments is installed, follow bellow steps:

1. Make download of all files from this repositorie

2. Close Qt Creator

3. Create a folder called arduino in <folder-where-intalled-qt-creator>/qtcreator/templates/wizards/

4. Copy all files that you downloaded to <folder-where-intalled-qt-creator>/qtcreator/templates/wizards/arduino

4. Open Qt Creator

5. Click on menu File > New File or Project > Select Arduino project and then have fun!

On step 2, in my case for example, I need to copy all files (arduino folder) to: ~/Qt5.4.1/Tools/QtCreator/share/qtcreator/templates/wizards/

Maybe my example is a bit diferent from you because I installed all Qt library (to developer in C++), not only Qt Creator.


## Author
Cleiton Souza (cleiton@tutamail.com)


## Similar works
I found one Qt template created by Philippe Lucidarme (http://5lair.free.fr) but based on old Qt Creator / Arduino-Mk version, and mister Philippe no more update her template.