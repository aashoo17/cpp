#include <iostream>

using namespace std;

/*
class:
this
const in member function
define member function outside the class
constructor:
= default
copy, assignment, destructor explanation with example
access control - public, private
class and struct differences
overload member functions
mutable data member
delegating constructor
implicit class type conversion - suppress it using explicit keyword
static members
*/

class Human {
  // private properties
  string name;
  int age;

  /*
  constructor:
  = default
  delegating constructor
  explicit constructor
  */
public:
  // says to invoke default constructor as they are not available once any
  // constructor is written manually
  Human() = default;
  Human(string name, int age) {
    // this => Human* const this
    this->name = name;
    this->age = age;
  }
  // delegating constructor
  Human(string name) : Human(name, 10) {}
  /*
  make explicit so than Human can't be written like this
  Human h = "Some name";    //not possible
  Human h("Some name");  this is possible
  */
  explicit Human(int age) {}
  /*
  methods:
  these are functions explicitly passed instance of the class using this
  this can be thought of => Human* const this
  */
  void member_func() {
    // here this is implicit
    // this => Human* const this
    // that means this can't be reassigned but can modify class instance
    this->age = 10;
    // invoke another method
    this->const_func();
    // usually this can be omitted
    const_func();
    age = 20;
  }

  // overloading method func()
  void member_func(int a) {}
  /*
  const member functions:
  methods which will not be able to modify class instance
  */
  void const_func() const {
    // here this => const Human* const this
    // this can't be modified and reassigned
    // this->name = "Some Name"; is not possible to do
    cout << this->name << endl;
  }
  /*
  static methods:
  this is not available
  called as Human::static_func()
  */
  static void static_func() {}

  // destructor
  ~Human() {
    // run memory cleanup routines - usually heap allocated memory

    // though we can execute normal code also destructor was suposed to be
    // created for memory cleanup
    cout << "cleanup is done here" << endl;
  }
};

int main() {
  // allocate on stack
  Human a;
  Human b("Some name", 10);

  a.member_func();
  b.const_func();

  // allocate on heap
  Human *c = new Human();
  Human *d = new Human("some name", 10);

  c->const_func();
  d->member_func();

  // cleanup heap
  delete c;
  delete d;

  // static function call
  Human::static_func();
}