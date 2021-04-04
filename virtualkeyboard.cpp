#include "Input.h"
using namespace std;

void Start(){
	unique_ptr<Input<string>> p_kb = make_unique<Input<string>>();
	p_kb->Process();
}

int main(){
    thread vk(Start);
	vk.join();
	return (0);
}
