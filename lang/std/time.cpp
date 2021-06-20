#include <iostream>
#include <chrono>

/*
how things works in chrono
duration:
this is used to get the measurement in some kind of unit like second, millisecond, micro, nano seconds etc

time_point:
all the results usually returned by system_clock/steady clock will be time_point
this usually in turn will get converted to duration most of the time
TODO: find out why not give values directly to duration what more benefits time_point provide

system_clock:
used for measuring time from epoch (1st Jan 1970, 00:00:00 hrs)
this is used to measure/create calendar time

steady_clock:
this clock uses starting point(epoch) as per convenience only guarantees it will always increase
so used in calculating elapsed time only like cpu execution time etc..
*/

using namespace std;

//duration - measuring seconds, milliseconds etc
void duration(){
	//so seconds and milliseconds here must be typedef for duration
	//second
	chrono::seconds a(1);
	//millisecond
	chrono::milliseconds b(1);
	//general duration
	//template args - std::chrono::duration<Rep,Period> - what is Rep and Period
	//Rep will take any of types like - int, float, double which decides returned time to be stored in type
	//Period - this uses kilo, milli, micro, nano etc which we know by convention 
	//say second is base for 1 => kilo - 1000 sec, milli - .001 sec, micro - 10^-6 sec, nano - 10^-9 sec etc
	chrono::duration<int,kilo> c(3);	//this creates 3000 secs representation
	chrono::duration<double,nano> d(3);		//3 nano second
	//TODO: printing duration
	//TODO: getting a value in second as number (in form of int, double) say 1000 sec, 30 sec etc
}

//time point - clocks will return time_point so we have to know how can we work on top of it
void time_pt(){
	chrono::time_point<chrono::system_clock> tp1;	//for system clock
	chrono::time_point<chrono::steady_clock> tp2;	//for monotonic clock

	auto a = tp1.time_since_epoch();
	// cout << a << endl;
	//TODO: printing duration
}

// wall clock/calendar time - called as system_clock in cpp
void calendar_time(){
	auto a = chrono::system_clock::now();
	//TODO: how will I get values like - hour:min:sec , day:month:year
}

//monotonic clock - for measuring elapsed time
void elapsed_time(){
	auto a = chrono::steady_clock::now();
	cout << "print me" << endl;
	auto b = chrono::steady_clock::now();
	//TODO: how to get the time difference
}

int main(){

}	