#include <iostream>
#include "Stack.hpp"
using namespace std;

void stackInit() {
	try {
		cout << endl << "---init.cpp---" << endl;
		Stack<int> arrayInt;
		Stack<int> arrayInt1 = Stack<int>(10);
		cout << "arrayInt created" << endl;
		cout << "Moved arrayInt1" << endl;
	}
	catch(const std::exception& e) {
		cout << e.what() << endl;
	}
}

int main() {
	stackInit();
}
