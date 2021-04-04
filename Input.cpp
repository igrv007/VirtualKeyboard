#include "Input.h"

template <typename T>
Input<T>::Input(){
	m_kb = make_unique<VKeyboard<T>>();
}

template <typename T>
Input<T>::~Input(){
	//placeholder
}

template <typename T>
void Input<T>::Process(){
	if(m_kb)
		m_kb->HandleInputEvents();
}