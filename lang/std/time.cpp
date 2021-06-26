#include <iostream>
#include <chrono>
#include <ratio>

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
	//so seconds and milliseconds here are typedef for duration
	//second
	chrono::seconds a(1);
	//millisecond
	chrono::milliseconds b(1);
	//general duration
	//template args - std::chrono::duration<Rep,Period> - what is Rep and Period
	//Rep will take any of types like - int, float, double which decides duration to be stored in
	//Period - this uses std::ratio()
	//std::ratio() special typedef cases - kilo - 1000, milli - .001, micro - 10^-6 sec, nano - 10^-9 sec etc
	std::chrono::duration<int> twentySeconds(20);
	std::chrono::duration<double,std::ratio<60>> halfAMinute(0.5);			// 60/1
	std::chrono::duration<long,std::ratio<1,1000>> oneMillisecond(1);		// 1/1000
	std::chrono::duration<long,milli> oneMillisecond_1(1);		//	1/1000
	//printing
	//TODO: how can we always print in terms of second
	cout << halfAMinute.count() << endl;
}

//time point - clocks will return time_point so we have to know how can we work on top of it
void time_pt(){
	chrono::time_point<chrono::system_clock> tp1;	//for system clock
	chrono::time_point<chrono::steady_clock> tp2;	//for monotonic clock

	cout << tp1.time_since_epoch().count() << endl;
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
	time_pt();
}	