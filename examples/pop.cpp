#include <iostream>
#include "Stack.hpp"
using namespace std;

void stackPop() {
	try {
		cout << endl << "---pop.cpp---" << endl;
		Stack<int> arrayInt;
		for(int i = 0; i < 10; i++) { arrayInt.push(i); }
		for(int j = 0; j < 6; j++) { cout << arrayInt.pop() << " "; }
		cout << endl << endl;
	} catch(const std::exception& e) {
		cout << e.what() << endl;
	}
}

int main() {
	stackPop();
}
