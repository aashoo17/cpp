#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

void create_Vector(){
    vector<int> a = {10,20,30,40,50};
    vector<int> b;
    vector<int> c(a);
    vector<int> d = a;
    vector<int> e{10,20,30,40,50};
    vector<int> f(0,10);

    //show any one 
    for (auto i : f){
        cout << i << " ";
    }
    cout << endl;
}

void operations_Vector(){
    vector<int> a = {10,20,30,40,50};

    //add elements
    a.push_back(60);
    //size
    a.size();
    //check empty
    assert(a.empty() != 0);

    //indexing
    int b = a[0];
    a[5] = 10;

    //assignment
    vector<int> c;
    c = a;
    //comparison ==, !=
    assert(c != a);
}

int main(){
    create_Vector();
}