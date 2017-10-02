#include <iostream>
#include "Stack.hpp"
using namespace std;

int main() {
	try {
		cout << endl << "---Stack of Int elements---" << endl;
		Stack<int> Stack_int(7); //Создание объекта класса Stack размера 7 без выделения новой памяти
    //Добавление элементов
		Stack_int.push(1);
		Stack_int.push(2);
		Stack_int.push(3);
		Stack_int.push(4);
		Stack_int.push(5);
		Stack_int.push(6);
		Stack_int.push(7);

    //Удаление элементов из стека типа Char
		for(int i = 0; i < 7; i++) {
			cout << Stack_int.pop() << endl;
		}
		cout << endl << endl;

		cout << "---Stack of Char elements---" << endl;
		Stack<char> Stack_char(5); //Создание объекта класса Stack размера 5 без выделения новой памяти
    //Добавление элементов
    Stack_char.push('d');
		Stack_char.push('l');
		Stack_char.push('r');
		Stack_char.push('o');
		Stack_char.push('W');

    //Удаление элементов из стека типа Char
		for(int i = 0; i < 5; i++) {
			cout << Stack_char.pop();
		}
		cout << endl << endl;

    cout << "---Stack of Char elements with adding new memory---" << endl;
		Stack<char> Stack_char_OW(5); //Создание объекта класса Stack размера 5 с выделением новой памяти
    //Добавление элементов
    Stack_char_OW.push('y');
		Stack_char_OW.push('r');
		Stack_char_OW.push('o');
		Stack_char_OW.push('m');
		Stack_char_OW.push('e');
    Stack_char_OW.push('m');
    Stack_char_OW.push(' ');
		Stack_char_OW.push('e');
		Stack_char_OW.push('r');
		Stack_char_OW.push('o');
		Stack_char_OW.push('M');

    //Удаление элементов из стека типа Char
    for(int i = 0; i < 11; i++) {
			cout << Stack_char_OW.pop();
		}
		cout << endl << endl;

	} catch(const exception& e) { //Обработка исключений
		cout << e.what() << endl;
	}
}
