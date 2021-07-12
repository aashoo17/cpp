#include <chrono>
#include <ctime>
#include <iostream>
#include <ratio>

/*
how things works in chrono
duration:
this is used to get the measurement in second + nano seconds

time_point:
all the results usually returned by system_clock/steady clock will be time_point
this usually in turn will get converted to duration most of the time
TODO: find out why not give values directly to duration what more benefits
time_point provide

system_clock:
used for measuring time from epoch (1st Jan 1970, 00:00:00 hrs)
this is used to measure/create calendar time

steady_clock:
this clock uses monotonic clock and only guarantees it will always increase
so used in calculating elapsed time only

this is how api works
steady_clock/system_clock => time_point => duration
*/

using namespace std;

// duration - measuring seconds, milliseconds etc
void duration() {
  // so seconds and milliseconds here are typedef for duration
  chrono::seconds a(1);      // second
  chrono::milliseconds b(1); // millisecond

  // general duration
  // template args - std::chrono::duration<Rep,Period> - what is Rep and Period
  // Rep will take any of types like - int, float, double which decides duration
  // to be stored in Period - this uses std::ratio() which describes
  // multiplication factor with second std::ratio() special typedef cases - kilo - 1000,
  // milli - 1/1000, micro - 10^-6 sec, nano - 10^-9 sec etc
  chrono::duration<int> twentySeconds(20);
  chrono::duration<double, std::ratio<60>> halfAMinute(0.5);     // 60/1
  chrono::duration<long, std::ratio<1, 1000>> oneMillisecond(1); // 1/1000
  chrono::duration<long, milli> oneMillisecond_1(1);             //	1/1000
  // printing
  // TODO: how can we always print in terms of second
  cout << halfAMinute.count() << endl;

  // duration operation
  chrono::duration<double> c = halfAMinute - twentySeconds; // difference
  cout << c.count() << endl;
}

// time point - clocks will return time_point so we have to know how can we work
// on top of it
void time_pt() {
  chrono::time_point<chrono::system_clock> tp1; // for system clock
  chrono::time_point<chrono::steady_clock> tp2; // for monotonic clock

  cout << tp1.time_since_epoch().count() << endl;
}

// wall clock/calendar time - called as system_clock in cpp
void calendar_time() {
  chrono::time_point<chrono::system_clock> a = chrono::system_clock::now();
  // TODO: how will I get values like - hour:min:sec , day:month:year without
  // using c api - timezone based time
  chrono::duration<double> b = a.time_since_epoch(); // time elapsed from epoch
  cout << b.count() << endl;

  // getting the calendar time using c api
  time_t c = chrono::system_clock::to_time_t(a);
  cout << c << endl;
  struct tm *d = localtime(&c);
  cout << d->tm_mday << ":" << d->tm_mon << ":" << 1900 + d->tm_year << endl;
  struct tm *e = gmtime(&c);
  cout << e->tm_mday << ":" << e->tm_mon << ":" << 1900 + e->tm_year << endl;
  // all other c api will be applicable also
}

// monotonic clock - for measuring elapsed time
void elapsed_time() {
  chrono::time_point<chrono::steady_clock> a = chrono::steady_clock::now();
  cout << "print me" << endl;
  chrono::time_point<chrono::steady_clock> b = chrono::steady_clock::now();
  // so time_pt when subtracted gives duration
  chrono::duration<double> c = b - a; // elapsed time
  cout << c.count() << endl;
}

int main() { time_pt(); }