#ifndef INPUT_H
#define INPUT_H

#include "VKeyboard.h"
template <typename T>
class Input{
public:
	Input();
	~Input();
	void Process();
private:
	std::unique_ptr<VKeyboard<T>> m_kb;

};

#include "Input.cpp"
#endif  //INPUT_H