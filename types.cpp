#include <string>
#include <vector>

using namespace std;
/*
what are the sizes of char,short,int, long,long long types
implicit type conversions
integer overflow
use of L, UL, LL, ULL type
float over and under flow
how string and vector works
*/

int main(){
    //integers
    short a = 10;
    int b = 10;
    //TODO: why L, LL, UL, ULL ? what will happen if we don't put it
    long c = 10L;
    long long d = 10LL;

    unsigned short a1 = 10;
    unsigned int b1 = 10;
    unsigned long c1 = 10UL;
    unsigned long long d1 = 10ULL;

    //floats
    float e = 10.0f;
    double f = 10.0;
    //char
    char g = 'A';
    signed char h = 10;
    unsigned char i = 10;   //this is used as byte in cpp

    //bool
    bool j = true;
    //string
    string k = "Hello";
    //vector
    vector<int> l = {10,20,30,40,50};

    //using const
    const int m = 10;   //const can't be modified
}