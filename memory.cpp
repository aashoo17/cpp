#include <memory>
#include <iostream>

using namespace std;
void new_and_delete(){
    //heap allocation
    //single value allocation
    int *a = new int;   //not intialized
    int *b = new int(10);   //initialized
    //array allocation
    int *c = new int[10];   //allocate 10 int elements and give pointer to first one

    //do something with these here

    //heap deallocation
    delete a;
    delete b;
    //array deallocation
    delete[] c;
}

//shared pointer
void shared_pointer_(){
    //creation
    shared_ptr<int> a = make_shared<int>(10);   //make_shared() ensure 10 is heap allocated
    shared_ptr<int> b(new int(10));   //explicitly passing heap allocated value
    //where does c points right now
    shared_ptr<int> c;

    //get the shared pointer which shares the memory
    c = a;

    //change c to change value of a
    *c = 100;
    cout << *a << endl;

    //change/read value - deref
    *a = 20;
    int d = *b;

    cout << *b << endl;

    //shared_ptr gets deleted here automatically i.e. memeory is freed
}

//weak pointer
void weak_pointers_(){
    //create a shared pointer
    shared_ptr<int> a = make_shared<int>(10);
    //create weak_ptr
    weak_ptr<int> b(a); //make a weak_ptr using shared_ptr

    //TODO: check how many weak count to any variable exists

    //check if weak_ptr is valid
    shared_ptr<int> c = b.lock();

    //if valid modify underlying value
    *c = 20;    //modify the shared_ptr received from weak_ptr
    cout << *a << endl;
}

//unique pointers
void unique_pointers_(){
    unique_ptr<int> a = make_unique<int>(10);   //get unique_ptr to heap memory 10
    //no body can use that memory until unique_ptr have it

    //memory gets freed here
}

int main(){
    weak_pointers_();
}