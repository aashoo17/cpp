#include <iostream>

using namespace std;

class Human{
    string name;
    int age;
    public:
    //constructor
    //if any constructor manually created, default constructor no longer available using = default we can ask compiler to give default constructor
    Human() = default; 
    Human(string name,int age){
        this->name = name;
        this->age = age;
    }
    //make explicit so than Human can't be written like this
    //Human h = "Some name";    //not possible
    //Human h("Some name");  this is possible
    explicit Human(string name): Human(name,10){
        
    } 

    void func(){
        //here this is implicit
        //this => Human* const this 
        //that means this can't be reassigned but can be modified
    }

    void const_func() const{
        //here this => const Human* const this
        //this can't be modified and reassigned
    }
    //this not available
    //called as Human::static_func()
    static void static_func(){
        
    }

};