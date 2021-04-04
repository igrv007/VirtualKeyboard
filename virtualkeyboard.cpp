#include "Input.h"
using namespace std;

void Start(){
	unique_ptr<Input<string>> p_kb = make_unique<Input<string>>();
	p_kb->Process();
}

int main(){
	//std::unique_ptr<Keyboard> p_kb(new Keyboard<std::stiring>());
    thread vk(Start);
	vk.join();
	//p_kb->DisplayCurrLine();
	return (0);
}
