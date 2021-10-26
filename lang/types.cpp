#include <iostream>

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

void integers(){
    //signed integers
    signed char a = 10;
    short b = 10;
    int c = 10;
    long d = 10L;
    long long e = 10LL;

    //unsigned char
    unsigned char f = 10;
    unsigned short g = 10;
    unsigned int h = 10;
    unsigned long i = 10UL;
    unsigned long long j = 10ULL;
}

//so in cpp we don't have to bring fixed type through any header file
void fixed_integers(){
    //signed 
    int8_t a = 10;
    int16_t b = 10;
    int32_t c = 10;
    int64_t d = 10;

    //unsigned
    uint8_t e = 10;
    uint16_t f = 10;
    uint32_t g = 10;
    uint64_t h = 10;

    uintptr_t i = 10;
}

void floats(){
    float a = 10;
    double b = 10;
}

//char 
void chars(){
    char a = 'A';
    char b = '\0';  //NULL byte
    char c = '\n';  //multiple char used to represent one character
}

//boolean - no header file required unlike in c
void boolean(){
    bool a = true;
    bool b = false;
}

int main(){
    fixed_integers();
}