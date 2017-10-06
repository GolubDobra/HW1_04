#include <iostream>
#include "Stack.hpp"
using namespace std;

void stackEmpty() {
	try {
		cout << endl << "---empty.cpp---" << endl;
		Stack<char> arrayChar;
		char wordChar[] = "KCATS_RAHC";
		for(int i = 0; i < sizeof(wordChar); i++) { arrayChar.push(wordChar[i]); }
		while(!arrayChar.empty()) {
			cout << arrayChar.pop() << " ";
		}
		cout << endl << endl;
	}
	catch(const std::exception& e) {
		cout << e.what() << endl;
	}
}

int main() {
	stackEmpty();
}
