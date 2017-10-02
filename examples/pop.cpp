#include <iostream>
#include "Stack.hpp"
using namespace std;

void stackPop() {
	cout << endl << "---pop.cpp---" << endl;
	Stack<int> arrayInt;
	for(int i = 0; i < 10; i++) { arrayInt.push(i); }
	for(int j = 0; j < 6; j++) { cout << arrayInt.pop() << " "; }
	cout << endl << endl;
}

int main() {
	stackPop();
}
