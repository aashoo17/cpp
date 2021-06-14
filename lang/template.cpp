#include <iostream>

using namespace std;

//function template
template <typename T> void my_func(T a){
    cout << a << endl;
}

//class template
template<typename T> class Human{
    T name;
    public:
    void say_name(T a){
        cout << a << endl;
    }
};

int main(){
    //using function template
    //in function args are templated so when we pass the parameter T can be auto deduced and not required to 
    //type explicitly
    my_func(10);    
    //using class template
    Human<int> h;   //in class generally explicit type of T will be required to give
    h.say_name(20);
}