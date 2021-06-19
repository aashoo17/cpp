#include <ctime>
#include <iostream>
#include <chrono>

using namespace std;

//duration - measuring seconds, milliseconds etc
void duration(){
	//second
	chrono::seconds a(1);
	//millisecond
	chrono::milliseconds b(1);
	//general duration
	//TODO: template args - std::chrono::duration<Rep,Period> - what is Rep and Period
	//Rep will take any of types like - int, float, double which decides returned time be in decimal or not
	//Period - this uses kilo, milli, micro, nano etc which we know by convention 
	//say second is base for 1 => kilo - 1000 sec, milli - .001 sec, micro - 10^-6 sec, nano - 10^-9 sec etc
	chrono::duration<int,kilo> c(3);	//this creates 3000 secs representation
}



int main(){

}	