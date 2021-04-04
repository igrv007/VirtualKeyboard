#include "InputView.h"
using namespace std;

void Start(){
	unique_ptr<InputView<string>> p_input = make_unique<InputView<string>>();
	p_input->Start();
}

int main(){
    thread vk(Start);
	vk.join();
	return (0);
}
