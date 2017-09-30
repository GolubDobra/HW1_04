#include "Stack.hpp"

void stackInit() {
	cout << endl << "---init.cpp---" << endl;
	Stack<int> arrayInt;
	cout << "arrayInt created" << endl;
}

void stackPush() {
	cout << endl << "---push.cpp---" << endl;
	Stack<int> arrayInt;
	for(int i = 0; i < 10; i++) { arrayInt.push(i*2); }
	for(size_t j = 0; j < arrayInt.count(); j++) { cout << arrayInt[j] << " "; }
	cout << endl;
}

void stackPop() {
	cout << endl << "---pop.cpp---" << endl;
	Stack<int> arrayInt;
	for(int i = 0; i < 10; i++) { arrayInt.push(i); }
	for(int j = 0; j < 6; j++) { cout << arrayInt.pop() << " "; }
	cout << endl << endl;
}

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
