#ifndef INPUT_H
#define INPUT_H

//This is a Base class for
//all input devices in this application
template <typename T>
class Input{
public:
	Input();
	virtual ~Input();
	virtual void ProcessEvents();
};

#include "Input.cpp"
#endif  //INPUT_H