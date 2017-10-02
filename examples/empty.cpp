#include <iostream>
#include "Stack.hpp"
using namespace std;

void stackEmpty() {
	cout << endl << "---empty.cpp---" << endl;
	Stack<char> arrayChar;
	char wordChar[] = "KCATS_RAHC";
	for(int i = 0; i < strlen(wordChar); i++) { arrayChar.push(wordChar[i]); }
	while(!arrayChar.empty()) {
		cout << arrayChar.pop() << " ";
	}
	cout << endl << endl;
}

int main() {
	stackEmpty();
}
