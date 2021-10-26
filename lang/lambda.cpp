#include <vector>
#include <string>
#include <iostream>

using namespace std;
class Human{
    public:
    string name;
    int age;
};

int main(){
    //sample data in outer scope
    int x = 10;
    vector<int> y = {10,20,30,40,50};
    Human z = Human();
    z.name = "Human";
    z.age = 20;

    //capture using copy
    auto a = [=](){
        //capture the data
        cout << x << endl;
    };
    a();
    auto b = [=](){
        for (auto i : y) {
            cout << i << " ";
        }
        cout << endl;
    };
    b();
    //capture using reference
    auto c = [&](){
        cout << z.name << endl;
    };
    c();
    // init capture
    auto d = [k = std::move(z)](){
        cout << k.name << endl;
    };
    d();
}