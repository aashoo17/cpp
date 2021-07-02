#include <iostream>

using namespace std;

//namespace declaration
namespace custom{
    class Human{
        public:
        void name(){
            cout << "What is my name" << endl;
        }
    };
}

int main(){
    //using namespace
    custom::Human h;
    h.name();
}