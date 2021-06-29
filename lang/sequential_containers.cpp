#include <cassert>
#include <deque>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

/*
sequential containers:
they are called sequential as elements kept in same order as you start pushing
them to this container say first 10,20,40 then 30 i have putted i will get back
in same order first 10,20,40 then 30

iterator:
we will work on elements of sequential containers using iterator only
read/modify the elements all will be done using iterator

following operations are required generally on sequential containers and we will
work on it
1. create the container and initialize
2. assignment
3. size of container
4. add/remove elements
5. comparison operators -
6. iterators

algorithms:
iterators makes sequential containers independent of their type
that means if we get iterator it does not matter if it is vector, deque,
list....or other seq containers so any algorithm can be applied on these
containers by getting iterator on them

TODO: explain vector, deque & list and their differences

*/

// vector
// vector_ name given to function not vector to avoid type clash
void vector_() {
  // create
  // for other way of creation see the vector.cpp file - same will work on other
  // sequential type also
  vector<int> a{
      10, 20, 30, 40,
      50}; // list initaializer will be the most common ways of initializing it

  // assignment
  vector<int> b;
  b = a; // assignment

  // size
  assert(a.size() == 5);     // check size
  assert(a.empty() != true); // check if size is zero

  // add/remove elements
  a.push_back(60);
  //[emplace vs insert
  //stackoverflow](https://stackoverflow.com/questions/14788261/c-stdvector-emplace-vs-insert)
  a.insert(a.cbegin() + 4,
           70); // get iterator for 1st position then add 4 to get 5th position
  a.emplace(a.cend(), 100); // TODO: differnce between insert and emplace
  a.erase(a.begin());       // TODO: a.end() in erase fails
  // a.clear();  //remove all elements

  // TODO: comparison does not matter much I think so not done as of now

  // iterator - normal iterator and const_iterator
  // const_iterator will not allow modifications
  // auto can be used but I have omitted to see how writing actual type looks
  // like
  vector<int>::iterator begin = a.begin();
  vector<int>::iterator end = a.end();

  // modify all elements using iterator
  //!= symbol is used in cpp for comparing of iterators not <
  while (begin != end) {
    *begin += 20;
    begin++;
  }

  // print vector
  for (auto i : a) {
    cout << i << " ";
  }
  cout << endl;
}

// deque
// vector vs deque
// deque can grow in back and front both side but vector can grow only in the
// back this means deque keep extra memory in front and back both sides
void deque_() {
  // create
  // for other way of creation see the vector.cpp file - same will work on other
  // sequential type also
  deque<int> a{
      10, 20, 30, 40,
      50}; // list initaializer will be the most common ways of initializing it

  // assignment
  deque<int> b;
  b = a; // assignment

  // size
  assert(a.size() == 5);     // check size
  assert(a.empty() != true); // check if size is zero

  // add/remove elements
  a.push_back(60);
  a.push_front(200); // add elements in front
  a.insert(a.cbegin() + 4,
           70); // get iterator for 1st position then add 4 to get 5th position
  a.emplace(a.cend(), 100); // TODO: differnce between insert and emplace
  a.erase(a.begin());       // TODO: a.end() in erase fails
  // a.clear();  //remove all elements

  // TODO: comparison does not matter much I think so not done as of now

  // iterator - normal iterator and const_iterator
  // const_iterator will not allow modifications
  deque<int>::iterator begin =
      a.begin(); // auto can be used but using big form for understanding only
  deque<int>::iterator end = a.end();

  // modify all elements using iterator
  //!= symbol is used in cpp for comparing of iterators not <
  while (begin != end) {
    *begin += 20;
    begin++;
  }

  // print deque
  for (auto i : a) {
    cout << i << " ";
  }
  cout << endl;
}

// list
void list_() {
  // create
  // for other way of creation see the vector.cpp file - same will work on other
  // sequential type also
  list<int> a{
      10, 20, 30, 40,
      50}; // list initaializer will be the most common ways of initializing it

  // assignment
  list<int> b;
  b = a; // assignment

  // size
  assert(a.size() == 5);     // check size
  assert(a.empty() != true); // check if size is zero

  // add/remove elements
  a.push_back(60);
  // FIXME: not working check
  // a.insert(a.cbegin() + 4,70);    //get iterator for 1st position then add 4
  // to get 5th position
  a.emplace(a.cend(), 100); // TODO: differnce between insert and emplace
  a.erase(a.begin());       // TODO: a.end() in erase fails
  // a.clear();  //remove all elements

  // TODO: comparison does not matter much I think so not done as of now

  // iterator - normal iterator and const_iterator
  // const_iterator will not allow modifications
  list<int>::iterator begin = a.begin();
  list<int>::iterator end = a.end();

  // modify all elements using iterator
  //!= symbol is used in cpp for comparing of iterators not <
  while (begin != end) {
    *begin += 20;
    begin++;
  }

  // print vector
  for (auto i : a) {
    cout << i << " ";
  }
  cout << endl;
}

int main() { list_(); }