template <typename T>
VKeyboard<T>::VKeyboard(){
	std::cout << "Virtual Keyboard session has started..." <<std::endl;
	DisableEchoMode();
}

template <typename T>
void VKeyboard<T>::DisableEchoMode() const{
	HANDLE hStdIn = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode = 0;
	GetConsoleMode(hStdIn, &mode);
	SetConsoleMode(hStdIn, mode & (~ENABLE_ECHO_INPUT));
}

template<typename T>
void VKeyboard<T>::ProcessEvents() {
	int ch;
	bool bDone = true;            //This is a flag varible.
	while(bDone){
		ch = getch();

		switch(ch){
			case KEY_ENTER:
				HandleEnterPress();
				break;
			case CTRL_Q:
				HandleCTRL_QPress(bDone);
				break;
			default:
				HandleRemainingKeyPresses(ch);
				break;
		}
	}
}

template <typename T>
void VKeyboard<T>::DisplayCurrLine() const{
	std::cout << m_curr_line << std::endl;
}

template <typename T>
void VKeyboard<T>::ClearString(){
	m_curr_line.clear();
}

template <typename T>
void VKeyboard<T>::HandleEnterPress(){
	DisplayCurrLine();
	ClearString();
}

template <typename T>
void VKeyboard<T>::HandleCTRL_QPress(bool& bDone){
	bDone = false;
}

template <typename T>
void VKeyboard<T>::HandleRemainingKeyPresses(int& ch){
	m_curr_line.push_back(ch);
}
template <typename T>
VKeyboard<T>::~VKeyboard(){
	std::cout << "Ending Virtual Keyboard session..." << std::endl;
}

