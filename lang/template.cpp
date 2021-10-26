#include <iostream>

using namespace std;

// function template
//TODO: using typename vs class keyword in template
template <typename T> void my_func(T a) { cout << a << endl; }
template<class T> void another_func(T a){cout << a << endl;}

// class template
template <typename T> class Human {
  T name;

public:
  void say_name(T a) { cout << a << endl; }
};

template <class T> class Another_Class {
  T name;

public:
  void say_name(T a) { cout << a << endl; }
};

int main() {
  // using function template
  // in function args are templated so when we pass the parameter T can be auto
  // deduced and not required to type explicitly
  my_func(10);
  another_func<int>(20); //pasing template parameter explicitly

  // using class template
  Human<int> h; // in class generally explicit type of T will be required to give
  h.say_name(20);

  // heap allocation
  Another_Class<int> *ac = new Another_Class<int>();
  ac->say_name(10);
}