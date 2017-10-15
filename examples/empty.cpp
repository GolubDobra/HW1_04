#include <iostream>
#include "Stack.hpp"
using namespace std;

void stackEmpty() {
	try {
		cout << endl << "---empty.cpp---" << endl;
		Stack<char> arrayChar;
		Stack<char> arrayChar2;

		char wordChar[] = "KCATS_RAHC";
		for(int i = 0; i < sizeof(wordChar); i++) { arrayChar.push(wordChar[i]); }
		arrayChar2 = arrayChar;//Копируем arrayChar в arrayChar2
		while(!arrayChar.empty()) {
			arrayChar.pop();
			cout << arrayChar.top() << " ";
		}
		cout << endl << endl;

		while(!arrayChar2.empty()) {
			arrayChar2.pop();
			cout << arrayChar2.top() << " ";
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
