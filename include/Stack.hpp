#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
class Stack
{
    T * array_; //Указатель на массив
    size_t array_size_; //Размер массива
    size_t count_ = 0; //Значение счетчика по умолчанию
public:
    //Конструктор класса без параметров
    Stack() : array_size_(size_t(10)),
              array_(new T[10]){ //Конструктор для стека по умолчанию
    }
    //Конструктор класса с параметром
    Stack(size_t st) : array_size_(st),
                       array_(new T[st]){ //Конструктор для стека с параметром
    }
    T& operator [](int pos) {
    	return array_[pos];
    }
    //Метод count
    size_t count() const{
      return count_;
    };

    void push(T const &value){
      if (count_ == array_size_){
            T* new_array_ = new T[2*array_size_]; //Выделение новой памяти под стек
            for (int i = 0; i < array_size_; ++i){
                new_array_[i] = array_[i]; //Перезапись элементов из старого массива в новый при помощи цикла
            }
            delete[] array_; // Освобождаем выделенную память
            array_ = new_array_; // Переопределение указателя на массив
      }
      array_[count_] = value; //Добавляем значение в стек по ссылке
      ++count_; //Увеличиваем счетчик на единицу
    }

    T pop(){
       if (count_ == 0){
           throw runtime_error("---Stack is empty---"); //Пуск исключения
       }
      --count_; //Снижение счетчика на единицу
      return array_[count_];
    }
    bool empty() const {
      if(count() == 0) return true;
      return false;
    }
    //Деструктор класса Stack
    ~Stack<T>(){
      delete[] array_; //Освобождаем выделенную под него память
    }
};

#endif
