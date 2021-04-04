#ifndef INPUT_H
#define INPUT_H

template <typename T>
class Input{
public:
	Input();
	virtual ~Input();
	virtual void ProcessEvents();
};

#include "Input.cpp"
#endif  //INPUT_H