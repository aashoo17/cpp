#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a{10,20,30,40,50};  //list initaializer

    vector<int>::iterator begin = a.begin();
    vector<int>::iterator end = a.end();

    while (begin != end) {
        *begin += 20;
        begin++;
    }

    //print vector
    for (auto i : a){
        cout << i << " ";
    }
    cout << endl;
}