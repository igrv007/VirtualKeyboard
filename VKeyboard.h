#ifndef VKEYBOARD_H
#define VKEYBOARD_H

#include <string>
#include <iostream>
#include <windows.h>
#include <memory>
#include <conio.h>
#include <thread>
#include "Input.h"



//This class acts as Model part.
//It handles all the backend for handling all key events.
template <typename T>
class VKeyboard : public Input<T>{
public:
	VKeyboard();
	~VKeyboard();
	void ProcessEvents();

private:
	void DisableEchoMode() const;
	void DisplayCurrLine() const;
	void ClearString();
	void HandleEnterPress();
	void HandleCTRL_QPress(bool& bDone);
	void HandleRemainingKeyPresses(int& ch);


	T m_curr_line;

	//These are the virtual key codes for 
	//enter & ctrl+q keys
	enum {
		KEY_ENTER = 13,
		CTRL_Q    = 17
	};
};

#include "VKeyboard.cpp"
#endif //VKEYBOARD_H