#ifndef INPUTVIEW_H
#define INPUTVIEW_H

#include "VKeyboard.h"
template <typename T>
class InputView{
public:
	InputView();
	~InputView();
	void Start();
private:
	std::unique_ptr<Input<T>> m_ip;
};

#include "InputView.cpp"
#endif  //INPUTVIEW_H
