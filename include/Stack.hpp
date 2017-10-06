#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

template <typename T>
class Stack {
    T * array_; //Указатель на массив
    size_t array_size_; //Размер массива
    size_t count_ = 0; //Значение счетчика по умолчанию
public:
    //Конструктор класса без параметров
    Stack() noexcept: array_size_(size_t(10)),
        array_(new T[10]) { //Конструктор для стека по умолчанию
    };
    //Конструктор класса с параметром
    Stack(size_t st) noexcept: array_size_(st),
        array_(new T[st]) { //Конструктор для стека с параметром
    };
    //Конструктор копирования
    Stack(const Stack& s) noexcept{
      if(this != &s){
        delete[] array_;
        array_size_ = s.array_size_;
        count_ = s.count_;
        array_ = new T[s.array_size_];
        for(size_t i = 0; i < s.array_size_; ++i) {
          array_[i] = s.array_[i];
        }
      }
    };
    //Конструктор перемещения
    Stack(Stack&& s) noexcept{
      array_size_ = s.array_size_;
      count_ = s.count_;
      array_ = s.array_;
      s.array_size_ = 0;
      s.count_ = 0;
      s.array_ = nullptr;
    };
    //Оператор присваивания с семантикой копирования
    auto operator=(const Stack& s) noexcept{
      if(this == &s) {return *this;}
      else {
        delete[] array_;
        array_size_ = s.array_size_;
        count_ = s.count_;
        array_ = new T[s.array_size_];
        for(size_t i = 0; i < s.array_size_; ++i) {
          array_[i] = s.array_[i];
        }
        return *this;
      }
    };
    //Оператор присваивания с семантикой перемещения
    auto operator=(Stack&& s) noexcept{
      if(this == &s){return *this;}
      else{
        array_size_ = s.array_size_;
        count_ = s.count_;
        array_ = s.array_;
        s.array_size_ = 0;
        s.count_ = 0;
        s.array_ = nullptr;
        return *this;
      }
    };
    T& operator [](int pos) noexcept {
        return array_[pos];
    };
    //Метод count
    size_t count() const noexcept{
        return count_;
    };

    void push(T const &value) noexcept{
        if (count_ == array_size_) {
            T* new_array_ = new T[2*array_size_]; //Выделение новой памяти под стек
            for (int i = 0; i < array_size_; ++i) {
                new_array_[i] = array_[i]; //Перезапись элементов из старого массива в новый при помощи цикла
            }
            delete[] array_; // Освобождаем выделенную память
            array_ = new_array_; // Переопределение указателя на массив
        }
        array_[count_] = value; //Добавляем значение в стек по ссылке
        ++count_; //Увеличиваем счетчик на единицу
    };

    T top() const noexcept{
      return array_[count_];
    }
    T pop() noexcept{
        if (count_ == 0) {
            throw runtime_error("---Stack is empty---"); //Пуск исключения
        }
        --count_; //Снижение счетчика на единицу
        return top();
    };
    bool empty() const noexcept{
        if(count() == 0) return true;
        return false;
    };
    //Деструктор класса Stack
    ~Stack<T>() noexcept{
        delete[] array_; //Освобождаем выделенную под него память
    };
};


#endif
