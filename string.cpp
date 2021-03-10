#include <string>
#include <cassert>
#include <iostream>

using namespace std;

/*
how string works:
this data type create on => stack + heap
class wrapper over pointer on stack
and dynamically allocated memory kept on heap

but we do not have to cleanup heap memory
this means when destructor runs it cleans the memory
this destructor runs when stack value gets cleaned up

this also means when we do assignment of string we not only copy stack value
we also copy heap value this is the only way we can ensure that when destructor
for 1 string is run other do not point to deallocated heap memory
*/

void create_string(){
    //ways to create string
    string a = "Hello";     //copy constructor
    string b;   //default initializer will run 
    string c("Hello");  //copy constructor
    string d('a',10); 
}

void operations_string(){
    //operations on string
    string a = "Hello World";
    //size
    size_t b = a.size();
    //indexing
    a[5] = 'A';
    char c = a[1];

    //concatenate
    string d = "World";
    string e = "Hello ";
    string f;
    f = e + d;
    //assignment =
    //this copies the string to assigned string

    //comparison operators == , !=
    string g = "Hello";
    string h = "World";
    assert(g != h);

    //printing string
    cout << g << endl;
}

int main(){
      
}