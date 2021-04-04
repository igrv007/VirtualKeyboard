# VirtualKeyboard

This repo contains implementation of console based virtual keyboard.
It takes input on terminal from user in non-echo mode and displays it after user hits enter key.
CTRL+q quits the application.This application is Windows based specifically.

PRE-REQUISITE:

This application has been built and tested on:
  - Windows 10
  - Visual Studio 2015 x86 native command prompt
  - C++14.

COMPILE:

cl.exe /EHsc virtualkeyboard.cpp /std:c++14

RUN:

virtualkeyboard.exe



DESIGN & IMPLEMAINTAION DETAILS:
  
  This application uses Model-View design pattern and polymorphism.It mainly contains 3 parts:
    
    1.Entry point for application (virtualkeyboard.cpp)
    2.Model (VKeyboard class + Input class )
    3.View  (InputView class)

Entry point instantiates the view i.e InputView class, which internally instantiates model i.e VKeyboard class through Input class pointer using polymorphism.
Standard thread library is used to create thread which runs View & Model.
InputView class's Start() method internally invokes VKeyboard class's ProcessEvents() method which handles all key presses.


![vkeyboard_new](https://user-images.githubusercontent.com/70363556/113506106-6cd17f00-9560-11eb-9dc6-b56c7d5247b6.png)


