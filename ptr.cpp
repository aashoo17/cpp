using namespace std;

void ref_func(int& a){
    a = 30;
}

void ptr_func(int* _Nonnull a){
    *a = 30;
}

int main(){
    //pointers
    int a = 10;

    int *b = &a;    //get pointer
    *b = 20;    //modify underlying value

    //pointer arithmtic ++, --, +=, -=
    // b++;
    // b += 2;
    //void*
    //though void* loses its charm because of templates in c. how ?
    void* c = &a;
    *(int*)c = 30;  //deref void ptr

    //void**, int** etc
    //these are array of pointers
    //int** = array of int*
    //void** = array of void*
    //since void* can represent anything we get array of pointers to any memory

    //TODO: ptr in functions
    ptr_func(b);


    //references- alias for type
    int d = 10;

    //int& - says reference to int
    int& e = d;
    e = 20;     //modify underlying value - but operation just looks like as on int

    //refernces in functions
    ref_func(e);    //just like pointer refs can modify the values when passed in function
}