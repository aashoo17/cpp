#include <string>
#include <vector>

using namespace std;
/*
what are the sizes of char,short,int, long,long long types
char - 1 byte
short - 2 byte min
int - 2 byte min
long - 4 byte min
long long - 8 byte min

implicit type conversions
integer overflow
use of L, UL, LL, ULL type
float over and under flow
how string and vector works
*/

int main(){
    //integers
    unsigned char a_ = 10;
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
    float e = 10.0F;
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