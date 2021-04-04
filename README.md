# VirtualKeyboard

This repo contains implementation of console based virtual keyboard.
It takes input on terminal from user in non-echo mode and displays it after user hits enter key.
CTRL+q quits the application.

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
  
  This application uses Model-View design pattern.It mainly contains 3 parts:
    
    1.Entry point for application (virtualkeyboard.cpp)
    2.Model (VKeyboard class)
    3.View  (Input class)

Entry point instantiates the view i.e Input class, which internally instantiates model i.e VKeyboard class.
Standard thread library is used to create thread which runs model.
Input class's Process() method internally invokes VKeyboard class's HandleInputEvents() method which handles all key presses.


![vkeyboard](https://user-images.githubusercontent.com/70363556/113504499-18c19d00-9556-11eb-807e-1ca908953a5a.PNG)

