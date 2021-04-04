#include "InputView.h"

template <typename T>
InputView<T>::InputView(){
	m_ip = make_unique<VKeyboard<T>>();
}

template <typename T>
InputView<T>::~InputView(){

}

template <typename T>
void InputView<T>::Start(){
	m_ip->ProcessEvents();
}