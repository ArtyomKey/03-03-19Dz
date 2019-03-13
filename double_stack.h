/********************************
  Объявление класса double_stack
 ********************************/
#define Doublestack

#include <iostream>

class double_stack{
  private:
    double *data;
    int size;
    int capacity;
  public:
    double_stack(int cap = 10);       //размер 10 по умолчанию
    ~double_stack();                 // деструктор
    double operator[] (unsigned int n);
    void push(const double x );     // поместить элемент в вершину стека
    double pop();                  // удалить элемент из вершины стека и вернуть его
    int getsize();
};

/********************************
      Реализация double_stack
 ********************************/
double_stack::double_stack(int cap){
  capacity = cap;
  data = new double[cap];
  size = 0;
}

double_stack::~double_stack(){
  delete [] data;
  capacity = 0;
  size = 0;
}

void double_stack::push(const double x){
  if(size >= capacity){
    capacity*= 2;
    double* temp = new double[capacity];
    for(unsigned int i = 0; i < size; i++){
      temp[i] = data[i];
    }
    delete [] data;
    data = temp;
  }
  data[++size] = x;
}

double double_stack::pop(){
  return data[size--];
}

double double_stack::operator[] (unsigned int n){
  return data[n];
}

int double_stack::getsize(){
  return size;
}