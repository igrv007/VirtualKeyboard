#ifndef VKEYBOARD_H
#define VKEYBOARD_H

#include <string>
#include <iostream>
#include <windows.h>
#include <memory>
#include <conio.h>
#include <thread>
// #include <cstdlib>
// #include <cstdio>


template <typename T>
class VKeyboard{
public:
	VKeyboard();
	~VKeyboard();
	void HandleInputEvents();

private:
	void DisableEchoMode() const;
	void DisplayCurrLine() const;
	void ClearString();
	void HandleEnterPress();
	void HandleCTRL_QPress(bool& bDone);
	void HandleRemainingKeyPresses(int& ch);


	T m_curr_line;
	enum {
		KEY_ENTER = 13,
		CTRL_Q    = 17
	};
};

#include "VKeyboard.cpp"
#endif //VKEYBOARD_H