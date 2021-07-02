#include <future>
#include <iostream>

using namespace std;

void func1(){
    cout << "func1" << endl;
}

void func2(){
    cout << "func2" << endl;
}

int main(){
    future<void> a(async(func1));
    a.get();
}