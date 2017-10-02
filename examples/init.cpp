#include <iostream>
#include "Stack.hpp"
using namespace std;

void stackInit() {
	cout << endl << "---init.cpp---" << endl;
	Stack<int> arrayInt;
	cout << "arrayInt created" << endl;
}

int main() {
	stackInit();
}
