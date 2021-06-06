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

class Human{
    string name;
    int age;
    public:
    /*
    constructor:
    = default
    delegating constructor
    explicit constructor
    */
    Human() = default;  //says to invoke default constructor as they are not available once any constructor is written manually 
    Human(string name,int age){
        this->name = name;
        this->age = age;
    }
    //delegating constructor
    Human(string name):Human(name,10){

    }
    /*
    make explicit so than Human can't be written like this
    Human h = "Some name";    //not possible
    Human h("Some name");  this is possible
    */
    explicit Human(int age){
        
    }
    /*
    methods:
    these are functions explicitly passed instance of the class using this
    this can be thought of => Human* const this
    */
    void func(){
        //here this is implicit
        //this => Human* const this 
        //that means this can't be reassigned but can be modified
        this->age = 10;
        //invoke another method
        this->const_func();
        //usually this can be omitted
        const_func();
        age = 20;
    }

    //overloading method func()
    void func(int a){

    }
    /*
    const member functions:
    methods which will not be able to modify class instance
    */
    void const_func() const{
        //here this => const Human* const this
        //this can't be modified and reassigned
        cout << this->name << endl;
    }
    /*
    static methods:
    this is not available
    called as Human::static_func()
    */
    static void static_func(){
        
    } 
};